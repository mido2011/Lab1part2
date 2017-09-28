/*
Name: Mwanandeke Kindembo
Student no: B00092297
Lab no: 1
Date: 28/9/2017
Program: to calculate the length and are of the rectangle.
Module: Software Design and Quality.
*/

#include <iostream>

using namespace std;


class Area
{

    public:
        int base,breadth;
        int height, length;
        int r, pi = 3.14;

};

int main()
{
    Area a1,a3;
    float area;

    cout << "Area of Rctangle. \n";
    cout <<"\nPlease enter the length of rectangle: "
    cin >> a1.length;

    cout <<"\nPlease enter the breadth of rectangle: " <<endl();
    cin >> a1.breadth;

    cout <<"\nArea of Circle. \n";
    cout<<"\nEnter the value of radius: ";
    cin >> pi.r;

    cout <<"\n\nArea of triangle. \n";
    cout <<"\nEnter the base of triangle: ";
    cin >>a3.base;

    cout <<"\nEnter the height of triangle: ";
    cin >> a3.height;

    area=a1.length*a1.breadth;
    cout <<"\n\nArea of retangle is =
    "<<area<<units" ;

    area =pi*r^2;
    cout <<"\nArea of Circle is =
    "<<area<<units";

    area=(1/2)*a3.base*a3.height;
    cout <<"\nArea of triangle is =
    "<<area<<units";


    return 0;
}
