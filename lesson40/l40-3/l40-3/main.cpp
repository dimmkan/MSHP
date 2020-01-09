#include <iostream>

using namespace std;

class CandyBox{
    int cnt;
    int *candies;
public:
    CandyBox();
    CandyBox(const CandyBox &tmp);
    CandyBox &operator=(CandyBox);
    ~CandyBox();

    void read();
    void print();
    int varieties();
    int size();
    int& at(int index);
    int count(int x);
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

CandyBox::CandyBox(const CandyBox &tmp){
    this->cnt = tmp.cnt;
    this->candies = new int[this->cnt];
    for(int i = 0; i < this->cnt; i++){
        this->candies[i] = tmp.candies[i];
    }
}

CandyBox &CandyBox::operator=(CandyBox tmp){
    this->cnt = tmp.cnt;
    this->candies = new int[this->cnt];
    for(int i = 0; i < this->cnt; i++){
        this->candies[i] = tmp.candies[i];
    }
    return *this;
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
        cout << this->candies[i] << " ";
    }
    cout << endl;
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

int CandyBox::size(){
    return this->cnt;
}

int& CandyBox::at(int index){
    return this->candies[index];
}

int CandyBox::count(int x){
    int count = 0;
    for(int i = 0; i < this->size(); i++){
        count += (this->candies[i] == x ? 1 : 0);
    }
    return count;
}

CandyBox Arcady_process(CandyBox b){
    CandyBox c = b;
    int *data = new int[c.size()];
    int count = 0;
    bool flag = false;
    for(int i = 0; i < c.size(); i++){
        if(c.at(i)%2 == 0){
            if(flag){
                c.at(i) = 0;
                flag = false;
            }else{
                data[count++] = c.at(i);
                c.at(i) = 0;
                flag = true;
            }
        }
    }
    for(int i = 0; i < count; i++){
        for(int j = 0; j < c.size(); j++){
            if(c.at(j) == 0){
                c.at(j) = data[i];
                break;
            }
        }
    }
    return c;
}

CandyBox Alice_process(CandyBox b){
    CandyBox c = b;
    int *data = new int[c.size()-c.size()/2];
    int count = 0;
    for(int i = c.size()/2; i < c.size(); i++){
        data[count++] = c.at(i);
    }
    for(int i = 0; i < c.size(); i++){
        c.at(i) = 0;
    }
    count = 0;
    for(int i = 0; i < c.size(); i+=2){
        c.at(i) = data[count++];
    }
    return c;
}

int count_afterwards(CandyBox b, int x){
    return b.count(x);
}

int main()
{
    CandyBox a, b, c;
    c.read();
    int x;
    cin >> x;
    a = Arcady_process(c);
    b = Alice_process(c);
    cout << count_afterwards(a, x) + count_afterwards(b, x);
    return 0;
}
