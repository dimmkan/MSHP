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

void print_journal(StudentJournal &sj) {
    cout << sj.count << endl;
    for (unsigned i = 0; i < sj.count; ++i)
        print_student(sj.data[i]);
}


double middle_mark(Student &s) {
    int sum = 0;
    for (unsigned i = 0; i < s.mark_count; ++i)
        sum += s.marks[i];
    return (double)sum/s.mark_count;
}

int summary_mark(Student &s) {
    double mid = middle_mark(s);
    if (mid >= 4.5) return 5;
    if (mid >= 3.5) return 4;
    if (mid >= 2.5) return 3;
    return 2;
}

void add_mark(Student &s, int mark) {
    int *marks = new int [s.mark_count+1];
    for (unsigned i = 0; i < s.mark_count; ++i)
        marks[i] = s.marks[i];
    marks[s.mark_count] = mark;
    delete [] s.marks;
    s.marks = marks;
    s.mark_count++;
}


void solve(StudentJournal &sj) {
    for (unsigned i = 0; i < sj.count; ++i)
        add_mark(sj.data[i], summary_mark(sj.data[i]));
}

void cleanup(StudentJournal &sj) {
    for (int i = 0; i < 5; ++i)
        delete [] sj.data[i].marks;
    delete [] sj.data;
}

int main() {
    StudentJournal sj = read_journal();
    solve(sj);
    print_journal(sj);
    cleanup(sj);
    return 0;
}
