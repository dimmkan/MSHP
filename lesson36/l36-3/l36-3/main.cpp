#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

struct Point{
    double x;
    double y;
};

struct Rectangle{
    Point p1;
    Point p2;
};

double rectangle_square(Rectangle *x);
double rectangle_perimetr(Rectangle *x);
void getPoint(Point *p);

int main()
{
    Point p1, p2;
    getPoint(&p1);
    getPoint(&p2);
    Rectangle r;
    r.p1 = p1;
    r.p2 = p2;
    cout.precision(6);
    cout << fixed << rectangle_square(&r) << endl << rectangle_perimetr(&r);
    return 0;
}

double rectangle_square(Rectangle *x){
    double dx = abs(x->p2.x - x->p1.x);
    double dy = abs(x->p2.y - x->p1.y);
    return dx*dy;
}

double rectangle_perimetr(Rectangle *x){
    double dx = abs(x->p2.x - x->p1.x);
    double dy = abs(x->p2.y - x->p1.y);
    return 2*(dx+dy);
}

void getPoint(Point *p){
    cin >> p->x >> p->y;
}
