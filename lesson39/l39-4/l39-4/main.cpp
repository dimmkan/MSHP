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
    void change_params(int hp, int energy, int iq, int sanity, int excitement);
    void apply_effects();
public:
    Student();
    Student(char* name, char* surname);
    bool is_alive();
    void show();
    void eat();
    void wait();
    void study();
    void sleep();
    void watch_tv();
};

Student::Student(){
    cin >> name >> surname;
    hp = energy = sanity = 100;
    iq = 20;
    excitement = 50;
}

Student::Student(char* name, char* surname):Student()
{
    if(!(name == nullptr)){
        strcpy(this->name, name);
    }
    if(!(surname == nullptr)){
        strcpy(this->surname, surname);
    }
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

void Student::change_params(int hp, int energy, int iq, int sanity, int excitement){
    change_field(this->hp, hp);
    change_field(this->energy, energy);
    change_field(this->iq, iq);
    change_field(this->sanity, sanity);
    change_field(this->excitement, excitement);
}

void Student::apply_effects(){
    hp -= (energy == 0 ? 25 : 0);
    hp -= (energy == 100 ? 10 : 0);
    hp -= (sanity <= 10 ? 15-sanity : 0);
    sanity -= (excitement < 25 ? 5 : 0);
    change_params(0, 0, 0, 0, 0);
}

void Student::eat() {
    if (!is_alive()) return;
    change_params(1, 7, -1, 0, -2);
    apply_effects();
}

void Student::wait() {
    if (!is_alive()) return;
    change_params(1, -3, 0, 0, -3);
    apply_effects();
}

void Student::study() {
    if (!is_alive()) return;
    change_params(-2, -4, 5, -5, -2);
    apply_effects();
}

void Student::sleep() {
    if (!is_alive()) return;
    change_params(2, -2, 0, 7, 0);
    apply_effects();
}

void Student::watch_tv() {
    if (!is_alive()) return;
    change_params(-2, -3, -3, 1, 5);
    apply_effects();
}

int main() {
    Student character;
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
