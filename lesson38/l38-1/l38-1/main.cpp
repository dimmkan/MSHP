#include <iostream>
#include <iomanip>

using namespace std;

class Student{
private:
    char name[51];
    char surname[51];
    int hp;
public:
    void start_game();
    bool is_alive();
    void show();
};

void Student::start_game(){
    cin >> this->name >> this->surname;
    this->hp = 100;
}

bool Student::is_alive(){
    return (this->hp > 0 ? true : false);
}

void Student::show(){
    cout << this->name << " " << this->surname << ": HP = " << setfill('0') << setw(3) << this->hp <<".";
}

int main()
{
    Student s;
    s.start_game();
    s.show();
    return 0;
}
