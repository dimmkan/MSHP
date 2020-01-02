#include <iostream>
#include <cstring>
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

void cleanup(StudentJournal &sj) {
    for (int i = 0; i < sj.count; ++i)
        delete [] sj.data[i].marks;
    delete [] sj.data;
}

bool equal_students(Student &s1, Student &s2) {
    if (strncmp(s1.name, s2.name, strlen(s1.name))) return false;
    if (strncmp(s1.surname, s2.surname, strlen(s1.surname))) return false;
    if (s1.age != s2.age ||
        s1.grade != s2.grade ||
        s1.mark_count != s2.mark_count) return false;
    for (unsigned i = 0; i < s1.mark_count; ++i)
        if (s1.marks[i] != s2.marks[i])
            return false;
    return true;
}

void delete_from_journal(StudentJournal &sj, int index) {
    delete [] sj.data[index].marks;
    for (unsigned i = index+1; i < sj.count; ++i)
        sj.data[i-1] = sj.data[i];
    sj.count--;
}

void remove_duplicates(StudentJournal &sj) {
    for (unsigned i = 0; i < sj.count-1; ++i)
        for (unsigned j = i+1; j < sj.count; ++j)
            if (equal_students(sj.data[i], sj.data[j]))
                delete_from_journal(sj, j--);
}

int main() {
    StudentJournal sj = read_journal();
    remove_duplicates(sj);
    print_journal(sj);
    cleanup(sj);
    return 0;
}
