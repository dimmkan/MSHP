#include <iostream>

using namespace std;

class CandyBox{
    int cnt;
    int *candies;
public:
    CandyBox();
    ~CandyBox();

    void read();
    void print();
    int varieties();
};

bool in(int *data, int size, int value){
    for(int i = 0; i < size; i++){
        if(data[i] == value){
            return true;
        }
    }
    return false;
}

CandyBox::CandyBox(){
    this->candies = nullptr;
    this->cnt = 0;
}

CandyBox::~CandyBox(){
    delete [] this->candies;
}

void CandyBox::read(){
    cin >> this->cnt;
    if(this->candies){
        delete [] this->candies;
    }
    this->candies = new int[this->cnt];
    for(int i = 0; i < this->cnt; i++){
        cin >> this->candies[i];
    }
}

void CandyBox::print(){
    for(int i = 0; i < this->cnt; i++){
        cout << this-candies[i] << " ";
    }
}

int CandyBox::varieties(){
    int *data = new int[this->cnt];
    int count = 0;
    for(int i = 0; i < this->cnt; i++){
        if(!in(data, count, this->candies[i])){
            data[count++] = this->candies[i];
        }
    }
    delete [] data;
    return count;
}

int main()
{
    CandyBox c;
    c.read();
    cout << c.varieties();
    return 0;
}
