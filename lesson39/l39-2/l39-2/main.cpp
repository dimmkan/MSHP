#include<iostream>
#include<iomanip>
#include<cmath>
#include<cstring>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;
using std::setprecision;

struct Point {
    int x;
    int y;
};

Point read_ptr() {
    Point p;
    cin >> p.x >> p.y;
    return p;
}

double distance_ptr(Point a, Point b) {
    double dx = fabs(a.x - b.x);
    double dy = fabs(a.y - b.y);
    return sqrt(dx*dx + dy*dy);
}

void show_point(Point a) {
    cout << "("
         << fixed << setprecision(2) << a.x << ", "
         << fixed << setprecision(2) << a.y
         << ")";
}

class Line {
    private:
        int n; // количество точек
        Point *pts; // массив точек ломанной линии
    public:
        Line(Point a, Point b);
        Line(Point a, Point b, Point c);
        Line(int n, Point *pts);
        ~Line();
        void app_point(Point p);
        double get_length();
        void print();
};

Line::Line(Point a, Point b) {
    this->n = 2;
    this->pts = new Point[2];
    this->pts[0] = a;
    this->pts[1] = b;
}

Line::Line(Point a, Point b, Point c) {
    this->n = 3;
    this->pts = new Point[3];
    this->pts[0] = a;
    this->pts[1] = b;
    this->pts[2] = c;
}

Line::Line(int n, Point *pts) {
    this->n = n;
    this->pts = pts;
}

Line::~Line() {
    delete [] pts;
}

void Line::app_point(Point p) {
    Point *tmp = new Point[this->n+1];
    for (int i = 0; i < n; i++) {
        tmp[i] = this->pts[i];
    }
    tmp[n] = p;
    delete [] this->pts;
    this->pts = tmp;
    this->n++;
}

double Line::get_length() {
    if (n < 2) {
        return 0;
    }
    double l = 0;
    for (int i = 0; i < n-1; i++) {
        l += distance_ptr(pts[i], pts[i+1]);
    }
    return l;
}

void Line::print() {
    for (int i = 0; i < n; i++) {
        show_point(pts[i]);
        cout << " ";
    }
}

Line read_line() {
    int n;
    cin >> n;
    Point a, b, c;
    switch(n) {
        case 2:
            a = read_ptr(), b = read_ptr();
            return Line(a, b);
        case 3:
            a = read_ptr(), b = read_ptr(), c = read_ptr();
            return Line(a, b, c);
            break;
        default:
            Point *data = new Point[n];
            for (int i = 0; i < n; i++) {
                data[i] = read_ptr();
            }
            return Line(n, data);
    }
}

void actions(Line &l) {
    int m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        char cmd[20] = {};
        cin >> cmd;
        if (!strncmp(cmd, "Print", 5)) {
            l.print();
            cout << endl;
        }
        if (!strncmp(cmd, "Length", 6)) {
            cout << fixed << setprecision(2) << l.get_length();
            cout << endl;
        }
        if (!strncmp(cmd, "AddPoint", 8)) {
            int a, b;
            cin >> a >> b;
            Point p = {a, b};
            l.app_point(p);
        }
    }
}

int main() {
    Line l = read_line();
    actions(l);
    return 0;
}
