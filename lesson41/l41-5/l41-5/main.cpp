#include<fstream>
#include<iostream>

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
    int get_cute_grade() { return this->cute_grade; }
};

Cat::Cat() {
    for (int i = 0; i < 50; i++) {
        name[i] = surname[i] = morning_eat[i] = 0;
    }
    this->cute_grade = 0;
}

void Cat::read(fstream &fin) {
    if(!fin.is_open()) {
        return;
    }
    fin >> this->name >> this->surname >> this->morning_eat >> this->cute_grade;
}

class CatSolver {
private:
    int n;
    Cat *data;
    Cat *get_cats_by_cute_grade(int grade, int &n_result);
    void show_cats_list(fstream &fout, int n_result, Cat *result);
    void show_cats_by_cute_grade(fstream &fout, int grade);
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

Cat *CatSolver::get_cats_by_cute_grade(int grade, int &n_result) {
    n_result = 0;
    Cat *result = new Cat[this->n];
    for (int i = 0; i < this->n; i++) {
        if (this->data[i].get_cute_grade() == grade) {
            result[n_result++] = this->data[i];
        }
    }
    return result;
}

void CatSolver::show_cats_list(fstream &fout, int n_result, Cat *result) {
    if(!n_result) {
        fout << "Here is no cats!";
        return;
    }
    for (int i = 0; i < n_result; i++) {
        fout << result[i].get_name() << " " << result[i].get_surname();
        if (i != n_result-1) { // если не последний котик
            fout << ", ";
        }
    }
}

void CatSolver::show_cats_by_cute_grade(fstream &fout, int grade) {
    int n_result;
    Cat *result = this->get_cats_by_cute_grade(grade, n_result);
    fout << "Cute grade: " << grade << endl;
    this->show_cats_list(fout, n_result, result);
    delete [] result;
    fout << endl;
}

void CatSolver::solve(const char *output_filename) {
    fstream fout(output_filename, ios::out);
    for (int i = 10; i > 5; i--) {
        show_cats_by_cute_grade(fout, i);
    }
    fout.close();
}

int main() {
    CatSolver cs("input.txt");
    cs.solve("output.txt");
    return 0;
}
