/*
Name: Mohamed Sheref
Student no: B00088131
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

        float width, length;
        float base,height;
        float r;

};

int main()
{
    Area a1,a2,a3;
    float area;

    cout << "Area of Rctangle. \n";
    cout <<"\nPlease enter the length of rectangle: " ;
    cin >> a1.length;

    cout <<"\nPlease enter the width of rectangle: " ;
    cin >> a1.width;

    cout <<"\nArea of Circle. \n";
    cout<<"\nEnter the value of radius: ";
    cin >> a2.r;

    cout <<"\n\nArea of triangle. \n";
    cout <<"\nEnter the base of triangle: ";
    cin >>a3.base;

    cout <<"\nEnter the height of triangle: ";
    cin >> a3.height;

    area= a1.length*a1.width;
    cout <<"\n\nArea of retangle is =" <<area ;

    area = 3.14 * (a2.r *2);
    cout <<"\nArea of Circle is ="<< area ;

    area=(a3.base * a3.height)/2;
    cout <<"\nArea of triangle is ="<< area ;


    return 0;
}
