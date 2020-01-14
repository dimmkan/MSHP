#include<fstream>
#include<iostream>
#include<cstring>

using namespace std;

class Human{
private:
    char name[50];
    char midname[50];
    char surname[50];
    int age;
    int count_of_cats;
public:
    Human();
    void read(fstream &fin);
    const char *get_name() { return this->name; }
    const char *get_midname() { return this->midname; }
    const char *get_surname() { return this->surname; }
};

Human::Human(){
    for (int i = 0; i < 50; i++) {
        name[i] = midname[i] = surname[i] = 0;
    }
    age = count_of_cats = 0;
}

void Human::read(fstream &fin){
    if(!fin.is_open()) {
        return;
    }
    fin >> name >> midname >> surname >> age >> count_of_cats;
}

class Cat {
private:
    char name[50];
    int age;
    char ability;
    char position[50];
public:
    Human owner;
    Cat();
    void read(fstream &fin);
    const char *get_name() { return this->name; }
    const char *get_position() { return this->position; }
    const Human get_owner() { return this->owner; }
};

Cat::Cat() {
    for (int i = 0; i < 50; i++) {
        name[i] = position[i] = 0;
    }
    age = 0;
    ability = '-';
}

void Cat::read(fstream &fin) {
    if(!fin.is_open()) {
        return;
    }
    fin >> this->name >> this->age >> this->ability >> this->position;
    this->owner.read(fin);
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
        fout << data[i].get_position() << " " << data[i].get_name() << " of " << data[i].owner.get_name() << " " << data[i].owner.get_midname() << " " << data[i].owner.get_surname() << endl;
    }
    fout.close();
}

int main() {
    CatSolver cs("input.txt");
    cs.solve("output.txt");
    return 0;
}
