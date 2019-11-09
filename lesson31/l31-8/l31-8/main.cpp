#include <iostream>
#include <cctype>
using namespace std;

bool is_vowel(char c);

int main()
{
    char ch;
    int count = 0;
    do{
        cin.get(ch);
        count += is_vowel(ch) ? 1 : 0;
    }while(ch != '.');
    cout << count;
    return 0;
}

bool is_vowel(char c){
    char vowel_arr[6] = {'A', 'E', 'I', 'O', 'U', 'Y'};
    c = char(toupper(c));
    bool flag = false;
    for(int i = 0; i < 6; i++){
        if(c == vowel_arr[i]){
            flag = true;
        }
    }
    return flag;
}
