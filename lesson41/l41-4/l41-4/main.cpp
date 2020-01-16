#include<fstream>
#include<iostream>
#include<cstring>

using namespace std;

class Cat {
private:
    char name[50];
    char surname[50];
    char morning_eat[50];
    int cute_grade;
public:
    Cat();
    void read(fstream &fin);
    const char *get_name() { return this->name; }
    const char *get_surname() { return this->surname; }
    const char *get_morning_eat() {return this->morning_eat;}
    int get_cute_grade() {return this->cute_grade;}
};

Cat::Cat() {
    for (int i = 0; i < 50; i++) {
        name[i] = surname[i] = morning_eat[i] = 0;
    }
    cute_grade = 0;
}

void Cat::read(fstream &fin) {
    if(!fin.is_open()) {
        return;
    }
    char str[256] = {};
    fin >> str;
    strcpy(this->name, strtok(str, ";"));
    strcpy(this->surname, strtok(nullptr, ";"));
    strcpy(this->morning_eat, strtok(nullptr, ";"));
    this->cute_grade = atoi(strtok(nullptr, ";"));
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
        fout << "name: " << data[i].get_name() << endl;
        fout << "surname: " << data[i].get_surname() << endl;
        fout << "morning: " << data[i].get_morning_eat() << endl;
        fout << "cute grade: " << data[i].get_cute_grade() << endl;
    }
    fout.close();
}

int main() {
    CatSolver cs("input.txt");
    cs.solve("output.txt");
    return 0;
}
