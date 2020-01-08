#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class Student {
    char name[51];
    char surname[51];
    int hp;
    int energy;
    int iq;
    int sanity;
    int excitement;

    void change_field(int&, int);
public:
    void start_game();
    bool is_alive();
    void show();
    void eat();
    void wait();
    void study();
    void sleep();
    void watch_tv();
};

void Student::start_game() {
    cin >> name >> surname;
    hp = energy = sanity = 100;
    iq = 20;
    excitement = 50;
}

bool Student::is_alive() {
    return hp > 0;
}

void Student::show() {
    cout << name << ' ' << surname
         << ": HP = " << setw(3) << setfill('0') << hp
         << ", Energy = " << setw(3) << setfill('0') << energy
         << ", IQ = " << setw(3) << setfill('0') << iq
         << ", Sanity = " << setw(3) << setfill('0') << sanity
         << ", Excitement = " << setw(3) << setfill('0') << excitement
         << '.';
    if (!is_alive())
        cout << " Game over.";
    cout << endl;
}

void Student::change_field(int &field, int delta) {
    field += delta;
    if (field < 0) field = 0;
    if (field > 100) field = 100;
}

void Student::eat() {
    if (!is_alive()) return;
    change_field(hp, 1);
    change_field(energy, 7);
    change_field(iq, -1);
    change_field(excitement, -2);
}

void Student::wait() {
    if (!is_alive()) return;
    change_field(hp, 1);
    change_field(energy, -3);
    change_field(excitement, -3);
}

void Student::study() {
    if (!is_alive()) return;
    change_field(hp, -2);
    change_field(energy, -4);
    change_field(iq, 5);
    change_field(sanity, -5);
    change_field(excitement, -2);
}

void Student::sleep() {
    if (!is_alive()) return;
    change_field(hp, 2);
    change_field(energy, -2);
    change_field(sanity, 7);
}

void Student::watch_tv() {
    if (!is_alive()) return;
    change_field(hp, -2);
    change_field(energy, -3);
    change_field(iq, -3);
    change_field(sanity, 1);
    change_field(excitement, 5);
}

int main() {
    Student character;
    character.start_game();
    int m;
    char cmd[50];
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> cmd;
        if (!strcmp(cmd, "Wait"))
            character.wait();
        else if (!strcmp(cmd, "Eat"))
            character.eat();
        else if (!strcmp(cmd, "Study"))
            character.study();
        else if (!strcmp(cmd, "Sleep"))
            character.sleep();
        else if (!strcmp(cmd, "Watch")) {
            character.watch_tv();
            cin >> cmd;
        } else
            return 1;
        character.show();
    }
    return 0;
}
