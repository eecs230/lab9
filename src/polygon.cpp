#include "eecs230.h"

class Polygon {
protected:
    int width_, height_;
public:
    Polygon() : width_(0), height_(0) {
        //cout << "constructor: Polygon()" << endl;
    }
    Polygon(int w, int h) {
        //cout << "constructor: Polygon(" << w << "," << h << ")" << endl;
        width_ = w;
        height_ = h;
    }
    void width(int w) {
        width_ = w;
    }
    void height(int h) {
        height_ = h;
    }
    virtual int area () { return 0; }
};

class Rectangle: public Polygon {
public:
    Rectangle() {
        //cout << "constructor: Rectangle()" << endl;
    }
    Rectangle(int w, int h) : Polygon(w,h) {
        //cout << "constructor: Rectangle(" << w << "," << h << ")" << endl;
    }
    // implement area function for Rectangle
};

// implement Triangle class derived from Polygon


int main() {
    Polygon p1, p2(2,3);
    cout << "area of p1: " << p1.area() << ", area of p2: " << p2.area() << endl;

    Rectangle r1, r2(2,3);
    r1.height(3);
    r1.width(4);
    cout << "area of r1: " << r1.area() << ", area of r2: " << r2.area() << endl;

//    Triangle t1, t2(2,3);
//    cout << "area or t1: " << t1.area() << ", area of t2: " << t2.area() << endl;

    Polygon* poly1 = &r1;
    poly1->height(5);
    poly1->width(6);
    cout << "area of poly1: " << poly1->area() << endl;

//    Polygon* poly2 = &t1;
//    poly2->height(7);
//    poly2->width(8);
//    cout << "area of poly2: " << poly2->area() << endl;

    return 0;
}

