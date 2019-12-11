#include<iostream>

using namespace std;

struct Student {
    char name[51];
    char surname[51];
    unsigned int age;
    unsigned int grade;
    unsigned mark_count;
    int *marks;
};

Student read_student() {
    Student s;
    cin >> s.name >> s.surname >> s.age >> s.grade >> s.mark_count;
    s.marks = new int[s.mark_count];
    for (int i = 0; i < s.mark_count; i++) {
        cin >> s.marks[i];
    }
    return s;
}

int age_enterance(Student *s){
    return s->age - (s->grade - 1);
}

int main(){
    Student data[5];
    for(int i = 0; i < 5; i++){
        data[i] = read_student();
    }
    for (int i = 0; i < 5; i++) {
        cout << age_enterance(&data[i]) << endl;
    }
    for (int i = 0; i < 5; i++) {
        delete [] data[i].marks;
    }
    return 0;
}
