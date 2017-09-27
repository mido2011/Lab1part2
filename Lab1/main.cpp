/*
Name: Mwanandeke Kindembo
Student no: B00092297
Lab: part 1 SDQ (using the GIT-BATCH
Date: 27/9/2017
*/

#include <iostream>

using namespace std;
// Base class
class Shape
{

public:

// pure virtual function providing interface framework.
    virtual int getArea() = 0;
    void setWidth(int w)
    {
        width = w;
    }
    void setHeight(int h)
    {
        height = h;
    }
protected:

    int width;
    int height;
};
class Triangle: public Shape
{
public:
    int getArea()
    {
        return (width * height)/2;
    }
};
int main(void)
{
    Triangle Tri;
    Tri.setWidth(5);
    Tri.setHeight(7);
// Print the area of the object.
    cout << "Total Triangle area: " << Tri.getArea() << endl;
    return 0;
}
