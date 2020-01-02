#include <iostream>
using namespace std;

struct Student {
    char name[51];
    char surname[51];
    unsigned age;
    unsigned grade;
    unsigned mark_count;
    int *marks;
};

Student read_student() {
    Student s;
    cin >> s.name >> s.surname;
    cin >> s.age >> s.grade >> s.mark_count;
    s.marks = new int [s.mark_count];
    for (unsigned i = 0; i < s.mark_count; ++i)
        cin >> s.marks[i];
    return s;
}

void print_student(Student &s) {
    cout << s.name << " " << s.surname << " ";
    cout << s.age << " " << s.grade << " " << s.mark_count << endl;
    for (unsigned i = 0; i < s.mark_count; ++i)
        cout << s.marks[i] << " ";
    cout << endl;
}

struct StudentJournal {
    unsigned count;
    Student* data;
};

StudentJournal read_journal() {
    StudentJournal sj;
    cin >> sj.count;
    sj.data = new Student[sj.count];
    for (unsigned i = 0; i < sj.count; ++i)
        sj.data[i] = read_student();
    return sj;
}

double middle_mark(Student &s) {
    int sum = 0;
    for (unsigned i = 0; i < s.mark_count; ++i)
        sum += s.marks[i];
    return (double)sum/s.mark_count;
}

void print_journal(StudentJournal &sj, double average_score) {
    int count = 0;
    for (unsigned i = 0; i < sj.count; ++i)
        if(middle_mark(sj.data[i]) > average_score)
            count++;

    cout << count << endl;
    for (unsigned i = 0; i < sj.count; ++i)
        if(middle_mark(sj.data[i]) > average_score)
            print_student(sj.data[i]);
}

void cleanup(StudentJournal &sj) {
    for (unsigned i = 0; i < sj.count; ++i)
        delete [] sj.data[i].marks;
    delete [] sj.data;
}

int main() {
    StudentJournal sj = read_journal();
    double average_score;
    cin >> average_score;
    print_journal(sj, average_score);
    cleanup(sj);
    return 0;
}
