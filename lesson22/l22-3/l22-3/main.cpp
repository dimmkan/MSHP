#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
void swap_solve(double *a, double *b){
    double tmp;
    if(*a > *b){
        tmp = *a;
        *a = *b;
        *b = tmp;
    }
}
int quadratic_solve(double a, double b, double c, double *x1, double *x2){
    int res = 0;
    double discr;
    discr = pow(b, 2) - 4 * a * c;
    if(discr < 0){
        return res;
    }
    if(discr == 0){
        res = 1;
        *x1 = (-b) / (2 * a);
    }else{
        res = 2;
        *x1 = (-b - sqrt(discr)) / (2 * a);
        *x2 = (-b + sqrt(discr)) / (2 * a);
        swap_solve(&*x1, &*x2);
    }
    return res;
}

int main()
{
    double a, b, c, x1, x2;
    int solve;
    cin >> a >> b >> c;
    solve = quadratic_solve(a, b, c, &x1, &x2);
    cout.precision(6);
    if(solve != 0){
        if(solve == 1){
            cout << fixed << x1;
        }else{
            cout << fixed << x1 << " " << x2;
        }
    }
    return 0;
}
