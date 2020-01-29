#include <iostream>
#include <cstring>
#include <string>

using namespace std;

class Account {
    char name[101];
    char address[101];
    int balance;
public:
    Account(const char *name = "User", const char *address = "Place", int balance = 0);  // Создание пустого аккаунта пользователя
    int get_balance();        // Получение баланса пользователя
    bool update_balance(int); // Изменение баланса пользователя (увеличение или уменьшение). Если операция прошла успешно, возвращается true. Если же изменить невозможно (например, после изменения получится отрицательное число), тогда изменение не происходит и возвращается false.
    const char *get_name();         // Получение имени пользователя. Полученный указатель не должен предоставлять возможности изменять имя .
    const char *get_address();      // Получение адреса пользователя. Полученный указатель не должен предоставлять возможности изменять адрес.
    void show();              // Вывод всех данных в формате: "name; Address: balance"
};

Account::Account(const char *name, const char *address, int balance){
    strncpy(this->name, name, 101);
    strncpy(this->address, address, 101);
    this->balance = balance;
}

int Account::get_balance()
{
    return balance;
}

bool Account::update_balance(int x)
{
    if(balance + x < 0){
        return false;
    }else{
        balance += x;
        return true;
    }
}

const char *Account::get_name()
{
    return name;
}

const char *Account::get_address()
{
    return address;
}

void Account::show()
{
    cout << name << "; " << address << ": " << balance << endl;
}

class Order {
    char name[101];       // Имя пользователя
    unsigned fine;        // Размер штрафа
public:
    Order(const char *name = "User", int fine = 100);
    const char *get_name();     // Получение имени пользователя. Полученный указатель не должен предоставлять возможности изменять имя .
    unsigned get_fine();       // Получение размера штрафа
    void show();          // Вывод всех данных в формате: "name: fine"
};

Order::Order(const char *name, int fine)
{
    strncpy(this->name, name, 101);
}

const char *Order::get_name()
{
    return name;
}

unsigned Order::get_fine()
{
    return fine;
}

void Order::show()
{
    cout << name << ": " << fine;
}


class Bank {
    Account database[1000];       // Общее хранилище данных клиента
    unsigned count;               // Количество пользователей в банке
public:
    Bank();                       // Создание пустого банка
    int add_user(char *name, char *address, int balance);    // Добавление нового пользователя. Если добавление возможно, то пользователь добавляется и в качестве результата добавляется его индекс в массив database. В ином случае (если места нет) - возвращается -1
    Account get_user_data(char *name);  //  Получение данных пользователя
    bool process_order(Order o);  // Обработка исполнительного листа
    void show_all();              // Вывод всех пользователей в формате, предоставляемом классом Account
    void manager_menu();          // Основная функция, вызываемая из основной программы
    string& trim(string& str, const string& chars);
    string& ltrim(string& str, const string& chars);
    string& rtrim(string& str, const string& chars);
};

Bank::Bank()
{
    count = 0;
}

int Bank::add_user(char *name, char *address, int balance)
{
    if(count + 1 > 1000) return -1;
    Account a(name, address, balance);
    this->database[count++] = a;
    return count;
}

bool Bank::process_order(Order o)
{

}

void Bank::show_all()
{
    for(int i = 0; i < count; i++){
        database[i].show();
    }
}

void Bank::manager_menu()
{
    string s;
    do{
        getline(cin, s);
        if(s.find("ADD USER") != -1){
            char res[501] = {};
            strncpy(res, s.c_str(), s.length());
            char name[101] = {}, address[101] = {}, balance[101] = {};
            strtok(res, " ");
            strtok(nullptr, " ");
            strcpy(name, strtok(nullptr, " "));
            strcpy(address, strtok(nullptr, " "));
            strcpy(balance, strtok(nullptr, " "));
            string n, a, b;
            n = name;
            a = address;
            b = balance;
            trim(n, "\"");
            trim(a, "\"");
            trim(b, "\"");
            for(int i = 0; i < 101; i++){
                name[i] = 0;
                address[i] = 0;
            }
            strcpy(name, n.c_str());
            strcpy(address, a.c_str());
            this->add_user(name, address, atoi(b.c_str()));
        }else if(s.find("SHOW ALL") != -1){
            this->show_all();
        }else if(s.find("SHOW ACCOUNT") != -1){

        }else if(s.find("CREATE ORDER") != -1){

        }else if(s.find("EXIT") != -1){
            cout << "GOOD BYE";
        }
    }while(s.length());
}

string& Bank::ltrim(std::string& str, const std::string& chars = "\t\n\v\f\r ")
{
    str.erase(0, str.find_first_not_of(chars));
    return str;
}

string& Bank::rtrim(std::string& str, const std::string& chars = "\t\n\v\f\r ")
{
    str.erase(str.find_last_not_of(chars) + 1);
    return str;
}

string& Bank::trim(std::string& str, const std::string& chars = "\t\n\v\f\r ")
{
    return ltrim(rtrim(str, chars), chars);
}

int main()
{
    Bank b;
    b.manager_menu();
    return 0;
}
