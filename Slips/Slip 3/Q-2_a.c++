#include <bits/stdc++.h>
using namespace std;

class Shapes {

    public:
        virtual void area(int l=0, int b=0) = 0;
        virtual void volume(int l=0, int b=0, int h=0) = 0;
};

class Rectangle : public Shapes {

    void area(int l, int b) {
        cout<< "The area of rectangle :- "<< l*b<< endl;
    }

    void volume(int l, int b, int h) {
        cout<< "The volume of rectangle :- "<< l*b*h<< endl;
    }
};

class Circle : public Shapes {
    int r;

    void area(int l, int b) {
        r = l;
        cout<< "The area of circle :- "<< 3.14*r*r<< endl;
    }
    void volume(int l, int b, int h) {}
};

class Cylinder : public Shapes {
    int r, h;

    void area(int l, int b) {// 2πrh+2πr2
        r = l;
        h = b;
        cout<< "The area of cylinder :- "<< 2*3.14*r*h + 2*3.14*r*r << endl;
    }

    void volume(int l, int b, int h) {
        r = l;
        cout<< "The area of cylinder :- "<< 3.14*r*r<< endl;
    }
};
    
    
int main() {

    Shapes *base;

    Rectangle rec;
    base = &rec;
    base->area(10, 5);
    base->volume(10, 5, 15);

    Circle cir;
    base = &cir;
    base->area(3);

    Cylinder cyl;
    base = &cyl;
    base->area(3, 5);
    base->volume(5, 4, 3);


    return 0;
}
