#include<iostream>
#include<iomanip>

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

void print_student(Student person){
    cout << person.name << " " << person.surname << " " << person.age << " " << person.grade << " " << person.mark_count << endl;
    for (int i = 0; i < person.mark_count; i++) {
        cout << person.marks[i] << " ";
    }
    cout << endl;
}

double get_student_avg_mark(Student *person){
    double res = 0;
    for(int i = 0; i < person->mark_count; i++){
        res += person->marks[i];
    }
    return res/person->mark_count;
}

void add_mark(Student &s, int mark){
   int *tmp_marks = new int[s.mark_count+1];
   for(int i = 0; i < s.mark_count; i++){
       tmp_marks[i] = s.marks[i];
   }
   tmp_marks[s.mark_count] = mark;
   s.mark_count++;
   delete [] s.marks;
   s.marks = tmp_marks;
}

int main(){
    Student data[5];
        for(int i = 0; i < 5; i++){
            data[i] = read_student();
            while(get_student_avg_mark(&data[i]) < 4.5){
                add_mark(data[i], 5);
            }
        }
        for (int i = 0; i < 5; i++) {
            print_student(data[i]);
        }
        for (int i = 0; i < 5; i++) {
            delete [] data[i].marks;
        }
    return 0;
}
