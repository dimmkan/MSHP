#include <cstdio>
int main()
{
    int n;
    int arr[10];
    char c = 'S';
    scanf("%d", &n);
    long long int p = 1;
    while(p*10 <= n){
        p *= 10;
    }
    int count = 0;
    do{
        arr[count++] = (int)n/p;
        n %= p;
        p /= 10;
    }while(p);
    for(int i = 0; i < 10-count; i++){
        printf("%c", c);
    }
    for(int i = 0; i < count; i++){
        printf("%d", arr[i]);
    }
    return 0;
}
