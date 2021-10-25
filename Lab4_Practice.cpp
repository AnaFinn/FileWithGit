// Lab4_Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include<fstream>
using namespace std;

//STRUCTURE
struct Details
{
    string brand;
    string material;
    string color;
    float size;
    float price;
    //constructure
    Details(string br = " ", string mtr = " ", string clr = " ", float s = 0, float p = 0)
    {
        br = brand;
        mtr = material;
        clr = color;
        s = size;
        p = price;
    }
};



//PROTOTYPES



int main()
{
    Details d[5];
}
