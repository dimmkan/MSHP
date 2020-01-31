#ifndef BANK_H
#define BANK_H

#include "account.h"
#include "order.h"
#include <string>
using namespace std;

class Bank {
    Account database[1000];       // Общее хранилище данных клиента
    unsigned count;               // Количество пользователей в банке
public:
    Bank();                       // Создание пустого банка
    int add_user(char *name, char *address, int balance);    // Добавление нового пользователя. Если добавление возможно, то пользователь добавляется и в качестве результата добавляется его индекс в массив database. В ином случае (если места нет) - возвращается -1
    Account &get_user_data(const char *name);  //  Получение данных пользователя
    bool process_order(Order o);  // Обработка исполнительного листа
    void show_all();              // Вывод всех пользователей в формате, предоставляемом классом Account
    void manager_menu();          // Основная функция, вызываемая из основной программы
    string& trim(string& str, const string& chars);
    string& ltrim(string& str, const string& chars);
    string& rtrim(string& str, const string& chars);
};

#endif // BANK_H
