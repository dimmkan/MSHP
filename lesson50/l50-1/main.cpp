#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

class Figure {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual ~Figure(){}
};

class Rectangle: public Figure{
private:
    int x;
    int y;
public:
    Rectangle(int x, int y):x(x), y(y){}
    double area(){return x*y;}
    double perimeter(){return (x+y)*2;}
    ~Rectangle(){}
};

class Circle: public Figure{
private:
    int r;
public:
    Circle(int r): r(r){}
    double area(){return (2*asin(1)) * r * r;}
    double perimeter(){return 2*(2*asin(1))*r;}
    ~Circle(){}
};

double array_area(Figure** array, int n){
    double res = 0.0;
    for(int i = 0; i < n; i++){
        res += array[i]->area();
    }
    return res;
}

double array_perimeter(Figure** array, int n){
    double res = 0.0;
    for(int i = 0; i < n; i++){
        res += array[i]->perimeter();
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    Figure* figures[n];
    for(int i = 0; i < n; i++){
        char cmd[11] = {};
        cin >> cmd;
        if(!strcmp(cmd, "Rectangle")){
            int a, b;
            cin >> a >> b;
            figures[i] = (Figure*)new Rectangle(a, b);
        }else if(!strcmp(cmd, "Circle")){
            int r;
            cin >> r;
            figures[i] = (Figure*)new Circle(r);
        }
    }
    cout.precision(4);
    cout << fixed << array_area(figures, n) << " " << array_perimeter(figures, n);
    return 0;
}
