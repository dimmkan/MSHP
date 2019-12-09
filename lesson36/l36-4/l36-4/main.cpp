#include <iostream>
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

Point get_point(){
    Point p;
    cin >> p.x >> p.y;
    return p;
}

Rectangle get_rectangle(){
    Rectangle r;
    r.p1 = get_point();
    r.p2 = get_point();
    return r;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

double min(double a, double b) {
    return (a < b) ? a : b;
}

void normalize_rect(Rectangle *r) {
    Point pmin, pmax;
    pmin.x = min(r->p1.x, r->p2.x);
    pmin.y = min(r->p1.y, r->p2.y);
    pmax.x = max(r->p1.x, r->p2.x);
    pmax.y = max(r->p1.y, r->p2.y);
    r->p1 = pmin;
    r->p2 = pmax;
}

bool point_in_rectangle(Point p, Rectangle r){
    normalize_rect(&r);
    return ((p.x > r.p1.x&&p.x<r.p2.x)&&(p.y>r.p1.y&&p.y<r.p2.y));
}

int main()
{
    Rectangle r = get_rectangle();
    Point p = get_point();
    cout << (point_in_rectangle(p, r)?"YES":"NO");
    return 0;
}
