#include<fstream>
#include<iostream>

using namespace std;

class Cat {
private:
    char name[50];
    char surname[50];
public:
    Cat();
    void read(fstream &fin);
    const char *get_name() { return this->name; }
    const char *get_surname() { return this->surname; }
};

Cat::Cat() {
    for (int i = 0; i < 50; i++) {
        name[i] = surname[i] = 0;
    }
}

void Cat::read(fstream &fin) {
    if(!fin.is_open()) {
        return;
    }
    fin >> this->name >> this->surname;
}

class CatSolver {
private:
    int n;
    Cat *data;
public:
    CatSolver(const char *input_filename);
    ~CatSolver() { delete [] data; }
    void solve(const char *output_filename);
};

CatSolver::CatSolver(const char *input_filename) {
    fstream fin(input_filename, ios::in);
    fin >> this->n;
    this->data = new Cat[this->n];
    for (int i = 0; i < this->n; i++) {
        this->data[i].read(fin);
    }
    fin.close();
}

void CatSolver::solve(const char *output_filename) {
    fstream fout(output_filename, ios::out);
    for(int i = 0; i < this->n; i++){
        fout << data[i].get_surname() << " " << data[i].get_name() << endl;
    }
    fout.close();
}

int main() {
    CatSolver cs("input.txt");
    cs.solve("output.txt");
    return 0;
}
