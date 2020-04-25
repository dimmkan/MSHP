// Баржа

#include<iostream>
#include<vector>

using std::cin;
using std::cout;
using std::vector;

typedef vector<int> v_int;
typedef vector<v_int> vv_int;

class Barge {
    vv_int data;      // содержимое
    int n;            // количество действий
    int k;            // количество грузовых отсеков
    int p;            // максимальная вместимость баржи (в бочках)
    int barrel_count; // текущее количество бочек
    int max_barrel_count;
    bool cruise_status; // состояние рейса
public:
    Barge();
    bool get_barrel(int bay, int expected);
    bool set_barrel(int bay, int fuel_type);
    bool route();
    int get_max_barrel_count() { return this->max_barrel_count; }
};

Barge::Barge()
{
    cin >> this->n >> this->k >> this->p;
    data.resize(k);
    barrel_count = max_barrel_count = 0;
    cruise_status = true;
}

// действие по получению бочки: проверить, что отсек не пуст, что тип топлива тот, который нам нужен
bool Barge::get_barrel(int bay, int expected)
{
    if(data[bay].size() > 0 && expected == data[bay].back()) {
        data[bay].pop_back();
        --barrel_count;
        return true;
    } else {
        return false;
    }
}

// действие по добавлению новой бочки: проверяем, что мы можем загрузить новую бочку, а потом загружаем
bool Barge::set_barrel(int bay, int fuel_type) {
    if (barrel_count == p) {
        return false;
    }
    data[bay].push_back(fuel_type);
    ++barrel_count;
    if(barrel_count > max_barrel_count) {
        max_barrel_count = barrel_count;
    }
    return true;
}

// прохождение маршрута: проверяем, что на маршруте не возникает проблем
// если возникают - то прерываемся
// если в конце маршрута не 0 бочек - это проблема
bool Barge::route() {
    for (int i = 0; cruise_status && (i < n); i++) {
        char action;
        int a, b;
        cin >> action >> a >> b;
        if (action == '+') {
            cruise_status &= set_barrel(a-1, b) ;
        } else if (action == '-') {
            cruise_status &= get_barrel(a-1, b);
        }
    }
    cruise_status &= !barrel_count;
    return cruise_status;
}

int main() {
    Barge b;
    if (b.route()) {
        cout << b.get_max_barrel_count();
    } else {
        cout << "Error";
    }
}
