#include <iostream>

using namespace std;

int main()
{
    int data[263000] = {};
    int n = 0;
    long long int sum = 0;
    do{
        cin >> data[n];
        n++;
    }while(data[n-1]);
    n -= 1;
    for(int i = 0; i < n; i++){
        sum += data[i];
    }
    double mid = (sum * 1.0) / n;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(data[i] > mid){
            count++;
        }
    }
    cout << count << endl;
    for(int i = 0; i < n; i++){
        if(data[i] > mid){
            cout << data[i] << " ";
        }
    }
    return 0;
}
