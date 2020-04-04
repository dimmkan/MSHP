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

class HollowRectangle: public Rectangle{
public:
    HollowRectangle(int a, int b): Rectangle(a, b){}
    void draw();
    ~HollowRectangle(){}
};

void HollowRectangle::draw()
{
    for(int i = 0; i < y; i++){
        for(int j = 0; j < x; j++){
            if(i == 0 || j == 0 || i == y-1 || j == x-1){
                cout << "#";
            }else {
                cout << ".";
            }
        }
        cout << endl;
    }
    cout << endl;
}

class HollowCircle: public Circle{
public:
    HollowCircle(int a): Circle(a){}
    void draw();
    ~HollowCircle(){}
};

void HollowCircle::draw()
{
    for(int i = 0; i < 2*r + 1; i++){
        for(int j = 0; j < 2*r + 1; j++){
            bool usl = ((j-r)*(j-r)) + ((i-r)*(i-r)) <= r*r;
            if(usl){
                bool usl2 = (i == 0 || j == 0 || i == 2*r || j == 2*r);
                if(usl2){
                    cout << "#";
                }else {
                    bool un = ((j-r)*(j-r)) + ((i-1-r)*(i-1-r)) <= r*r; // up neighborhood
                    bool dn = ((j-r)*(j-r)) + ((i+1-r)*(i+1-r)) <= r*r; // down neighborhood
                    bool ln = ((j-1-r)*(j-1-r)) + ((i-r)*(i-r)) <= r*r; // left neighborhood
                    bool rn = ((j+1-r)*(j+1-r)) + ((i-r)*(i-r)) <= r*r; // rigth neighborhood
                    bool usl3 = (un && dn && ln && rn);
                    if(!usl3){
                      cout << "#";
                    }else{
                      cout << ".";
                    }
                }
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
        char cmd[51] = {};
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
        else if(!strcmp(cmd, "HollowRectangle")){
            int a, b;
            cin >> a >> b;
            figures[i] = (Figure*)new HollowRectangle(a, b);
        }else if(!strcmp(cmd, "HollowCircle")){
            int r;
            cin >> r;
            figures[i] = (Figure*)new HollowCircle(r);
        }
    }
    for(int i = 0; i < n; i++){
        figures[i]->draw();
    }
    return 0;
}



