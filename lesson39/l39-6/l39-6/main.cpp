#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

class Bar {
    int value;
public:
    Bar(int value = 100);
    void set(int);
    int get();
    void add(int);
    void show();
};

Bar::Bar(int value): value(value) {}

void Bar::set(int value) {
    this->value = value;
}

int Bar::get() {
    return value;
}

void Bar::add(int value) {
    this->value += value;
    if (this->value < 0) this->value = 0;
    if (this->value > 100) this->value = 100;
}

void Bar::show() {
    cout << '[';
    for (int i = 0; i < value; ++i)
        cout << '=';
    for (int i = value; i < 100; ++i)
        cout << ' ';
    cout << "] " << setw(3) << setfill('0') << value
         << "/100" << endl;
}

class Student {
    char name[51];
    char surname[51];
    Bar hp;
    Bar energy;
    Bar iq;
    Bar sanity;
    Bar excitement;

    void change_params(int, int, int, int, int);
    void apply_effects();
public:
    Student(int hp = 100, int energy = 100, int iq = 20, int sanity = 100, int excitement = 50);
    Student(char *name, char *surname,
        int hp = 100, int energy = 100, int iq = 20, int sanity = 100, int excitement = 50);
    bool is_alive();
    void show();
    void eat();
    void wait();
    void study();
    void sleep();
    void watch_tv();
};

Student::Student(int hp, int energy, int iq, int sanity, int excitement):
    hp(hp), energy(energy), iq(iq), sanity(sanity), excitement(excitement)
{
    cin >> name >> surname;
}

Student::Student(char *name, char *surname, int hp, int energy, int iq, int sanity, int excitement):
    hp(hp), energy(energy), iq(iq), sanity(sanity), excitement(excitement)
{
    strcpy(this->name, name);
    strcpy(this->surname, surname);
}

bool Student::is_alive() {
    return hp.get() > 0;
}

void Student::show() {
    cout << name << ' ' << surname << endl;
    cout << "        HP: "; hp.show();
    cout << "    Energy: "; energy.show();
    cout << "        IQ: "; iq.show();
    cout << "    Sanity: "; sanity.show();
    cout << "Excitement: "; excitement.show();
}

void Student::eat() {
    if (!is_alive()) return;
    change_params(1, 7, -1, 0, -2);
}

void Student::wait() {
    if (!is_alive()) return;
    change_params(1, -3, 0, 0, -3);
}

void Student::study() {
    if (!is_alive()) return;
    change_params(-2, -4, 5, -5, -2);
}

void Student::sleep() {
    if (!is_alive()) return;
    change_params(2, -2, 0, 7, 0);
}

void Student::watch_tv() {
    if (!is_alive()) return;
    change_params(-2, -3, -3, 1, 5);
}

void Student::change_params(int hp, int energy, int iq, int sanity, int excitement) {
    this->hp.add(hp);
    this->energy.add(energy);
    this->iq.add(iq);
    this->sanity.add(sanity);
    this->excitement.add(excitement);
    apply_effects();
}

void Student::apply_effects() {
    if (energy.get() == 0)
        hp.add(-25);
    if (energy.get() == 100)
        hp.add(-10);
    if (sanity.get() <= 10)
        hp.add(-15 + sanity.get());
    if (excitement.get() < 25)
        sanity.add(-5);
}

int main() {
    char name[51];
    char surname[51];
    int hp, energy, iq, sanity, excitement;
    cin >> name >> surname >> hp >> energy >> iq >> sanity >> excitement;
    Student character(name, surname, hp, energy, iq, sanity, excitement);
    character.show();
    return 0;
}
