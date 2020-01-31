#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <cstring>
#include <iostream>
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


#endif // ACCOUNT_H
