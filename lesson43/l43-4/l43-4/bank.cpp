#include "bank.h"

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
    return this->get_user_data(o.get_name()).update_balance(-o.get_fine());

}

void Bank::show_all()
{
    for(int i = 0; i < count; i++){
        database[i].show();
    }
}

Account &Bank::get_user_data(const char* name){
    static Account a;
    for(int i = 0; i < count; i++){
        if(!strcmp(name, database[i].get_name())){
            return database[i];
        }
    }
    return a;
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
            string n = name, a = address, b = balance;
            trim(n, "\"");
            trim(a, "\"");
            trim(b, "\"");
            for(int i = 0; i < 101; i++){
                name[i] = 0;
                address[i] = 0;
            }
            strcpy(name, n.c_str());
            strcpy(address, a.c_str());
            if(this->add_user(name, address, atoi(b.c_str())) != -1){
                cout << "OK" << endl;
            }else {
                cout << "ERROR" << endl;
            }
        }else if(s.find("SHOW ALL") != -1){
            this->show_all();
        }else if(s.find("SHOW ACCOUNT") != -1){
            char res[501] = {};
            strncpy(res, s.c_str(), s.length());
            char name[101] = {};
            strtok(res, " ");
            strtok(nullptr, " ");
            strcpy(name, strtok(nullptr, " "));
            string n = name;
            trim(n, "\"");
            for(int i = 0; i < 101; i++){
                name[i] = 0;
            }
            strcpy(name, n.c_str());
            Account a = this->get_user_data(name);
            if(!strcmp(a.get_name(), "User")){
                cout << "ERR" << endl;
            }else{
                a.show();
            }
        }else if(s.find("CREATE ORDER") != -1){
            char res[501] = {};
            strncpy(res, s.c_str(), s.length());
            char name[101] = {}, balance[101] = {};
            strtok(res, " ");
            strtok(nullptr, " ");
            strcpy(name, strtok(nullptr, " "));
            strcpy(balance, strtok(nullptr, " "));
            string n = name, b = balance;
            trim(n, "\"");
            trim(b, "\"");
            for(int i = 0; i < 101; i++){
                name[i] = 0;
            }
            strcpy(name, n.c_str());
            Order o(name, atoi(b.c_str()));
            if(this->process_order(o)){
                cout << "OK" << endl;
            }else{
                cout << "ERROR" << endl;
            }
        }else if(s.find("EXIT") != -1){
            cout << "GOOD BYE";
            break;
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
