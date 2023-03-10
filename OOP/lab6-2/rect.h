#include <string>
#include <iostream>
#include "shape.h"
using namespace std;


// class rectangle

class Rect
{
private:
    point ul;
    point lr;

public:

    Rect(); //: ul() , lr() //constructor
    Rect(int x1, int y1, int x2, int y2);// : ul(int x1, int y1), lr(int x2, int y2)
    void draw(); //built in function for Rect drawing

    //destructor
    ~Rect();
};
