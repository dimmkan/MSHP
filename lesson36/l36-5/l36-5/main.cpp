#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;


struct Point {
    double x;
    double y;
};

Point read_point() {
    Point p;
    cin >> p.x >> p.y;
    return p;
}

struct Rectangle {
    Point p1;
    Point p2;
};


Rectangle read_rect() {
    Rectangle r;
    r.p1 = read_point();
    r.p2 = read_point();
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


double rectangle_square(Rectangle r) {
    double dx = fabs(r.p1.x - r.p2.x);
    double dy = fabs(r.p1.y - r.p2.y);
    return dx*dy;
}


Rectangle intersect(Rectangle r1, Rectangle r2) {
    Rectangle r;
    r.p1.x = max(r1.p1.x, r2.p1.x);
    r.p1.y = max(r1.p1.y, r2.p1.y);
    r.p2.x = min(r1.p2.x, r2.p2.x);
    r.p2.y = min(r1.p2.y, r2.p2.y);
    return r;
}

double solve(Rectangle r1, Rectangle r2) {
    Rectangle r = intersect(r1, r2);
    if (r.p1.x > r.p2.x || r.p1.y > r.p2.y) {
        return 0;
    } else {
        return rectangle_square(r);
    }
}

int main() {
    Rectangle r1 = read_rect(),
              r2 = read_rect();
    normalize_rect(&r1);
    normalize_rect(&r2);
    cout << fixed << setprecision(6) << solve(r1, r2);
    return 0;
}
