#include <iostream>
#include <cstring>

using namespace std;

class Student{
    char name[51];
    char surname[51];
    int age;
    char phone_number[15];
public:
    void read_student();
    int get_age();
    char* get_name();
    char* get_surname();
};

void Student::read_student(){
    cin >> surname >> name >> age >> phone_number;
}

int Student::get_age(){
    return age;
}

char* Student::get_name(){
    return name;
}

char* Student::get_surname(){
    return surname;
}

class Journal{
    Student *journ;
    int cnt;
public:
    Journal(int count);
    ~Journal();
    void print_student_of_age(int x);
};

Journal::Journal(int count){
    journ = new Student[count];
    cnt = count;
    for(int i = 0; i < cnt; i++){
        Student s;
        s.read_student();
        journ[i] = s;
    }
}

Journal::~Journal(){
    delete [] journ;
}

void Journal::print_student_of_age(int x){
    bool flag = true;
    for(int i = 0; i < cnt; i++){
        if(journ[i].get_age() > x){
            cout << journ[i].get_surname() << " " << journ[i].get_name() << endl;
            flag = false;
        }
    }
    if(flag){
        cout << "There are no adult students";
    }
}

int main()
{
    int count, x;
    cin >> count;
    Journal j(count);
    cin >> x;
    j.print_student_of_age(x);
    return 0;
}
