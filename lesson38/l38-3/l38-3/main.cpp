#include <iostream>
#include <iomanip>
#include <cstring>

using namespace std;

class Student{
private:
    char name[51];
    char surname[51];
    int hp;
    int energy;
    int iq;
public:
    void start_game();
    bool is_alive();
    void show();
    void change_field(int &field, int delta);
    void eat();
    void wait();
    void study();
};

void Student::start_game(){
    cin >> this->name >> this->surname;
    this->hp = this->energy = 100;
    this->iq = 20;
}

bool Student::is_alive(){
    return (this->hp > 0 ? true : false);
}

void Student::change_field(int &field, int delta){
    field += delta;
    if(field > 100){
        field = 100;
    }
    if(field < 0){
        field = 0;
    }
}

void Student::eat(){
    if(this->is_alive()){
        change_field(this->energy, 7);
        change_field(this->hp, 1);
        change_field(this->iq, -1);
    }
}

void Student::wait(){
    if(this->is_alive()){
        change_field(this->energy, -3);
        change_field(this->hp, 1);
        change_field(this->iq, 0);
    }
}

void Student::study(){
    if(this->is_alive()){
        change_field(this->energy, -4);
        change_field(this->hp, -2);
        change_field(this->iq, 5);
    }
}

void Student::show(){
    cout << this->name << " "
         << this->surname
         << ": HP = " << setfill('0') << setw(3) << this->hp
         << ", Energy = " << setfill('0') << setw(3) << this->energy
         << ", IQ = " << setfill('0') << setw(3) << this->iq << "." << (this->is_alive() ? "" : " Game over.") << endl;
}

int main()
{
    int count;
    char cmd[51];
    Student s;
    s.start_game();
    cin >> count;
    for(int i = 0; i < count; i++){
        cin >> cmd;
        if(!strcmp(cmd, "Wait")){
            s.wait();
        }else if(!strcmp(cmd, "Eat")){
            s.eat();
        }else if(!strcmp(cmd, "Study")){
            s.study();
        }else {
            return 1;
        }
        s.show();
    }
    return 0;
}
