#include "account.h"

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

