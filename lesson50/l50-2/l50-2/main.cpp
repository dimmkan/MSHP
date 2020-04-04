#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

class Figure {
public:
    virtual double area() = 0;
    virtual double perimeter() = 0;
    virtual void draw() = 0;
    virtual ~Figure(){}
};

class Rectangle: public Figure{
protected:
    int x;
    int y;
public:
    Rectangle(int x, int y):x(x), y(y){}
    double area(){return x*y;}
    double perimeter(){return (x+y)*2;}
    void draw();
    ~Rectangle(){}
};

void Rectangle::draw()
{
    for(int i = 0; i < y; i++){
        for(int j = 0; j < x; j++){
            cout << "#";
        }
        cout << endl;
    }
    cout << endl;
}

class Circle: public Figure{
protected:
    int r;
public:
    Circle(int r): r(r){}
    double area(){return (2*asin(1)) * r * r;}
    double perimeter(){return 2*(2*asin(1))*r;}
    void draw();
    ~Circle(){}
};

void Circle::draw()
{
    for(int i = 0; i < 2*r + 1; i++){
        for(int j = 0; j < 2*r + 1; j++){
            bool usl = ((j-r)*(j-r)) + ((i-r)*(i-r)) <= r*r;
            if(usl){
                cout << "#";
            }else {
                cout << ".";
            }
        }
        cout << endl;
    }
    cout << endl;
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
    for(int i = 0; i < n; i++){
        figures[i]->draw();
    }
    return 0;
}
