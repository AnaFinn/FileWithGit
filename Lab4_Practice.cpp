// Lab4_Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream> 
#include <sstream> 
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
        brand = br;
        material = mtr;
        color = clr;
        size = s;
        price = p;
    }
};



//PROTOTYPES
struct Details* inputValues(Details* p);
//struct Details* outputValues(Details* p);


int main()
{
    Details d[2];
    Details* ptr = d;
    inputValues(ptr);
   // outputValues(ptr);
   
    
}

struct Details* inputValues(Details* p)
{
    cout << "\nEnter the details of shoes: " << endl;
    fstream outFile("C:/Users/200856629/OneDrive - UP Education/Desktop/cs103/CS103/member_2/FileWithGit/shoe_detail.csv", ios::out);
 
    for (int i = 0; i < 2; i++)
    {
        cout << "\nThe shoe detail: " << endl;
        cin.ignore();
        cout << "\nWhat is the shoes brand?" << endl;
        getline(cin, p->brand);
        cout << "\nWhat is the shoes material?" << endl;
        cin >> p->material;
        cout << "\nWhat is the shoes color?" << endl;
        cin >> p->color;
        cout << "\nWhat is the shoes size?" << endl;
        cin >> p->size;
        cout << "\nWhat is the shoes price?" << endl;
        cin >> p->price;
        outFile << p->brand <<","<< p->material << "," << p->color << "," << p->size << "," << p->price << endl;
        p++;
    }
    outFile.close();
    return (p);
}

//struct Details* outputValues(Details* p)
//{
//    for (int i = 0; i < 2; i++)
//    {
//        cout << (i + 1);
//        cout << "\nThe shoes brand " << p->brand << endl;
//        cout << "\nThe shoes material " << p->material << endl;
//        cout << "\nThe shoes color " << p->color << endl;
//        cout << "\nThe shoes size " << p->size << endl;
//        cout << "\nThe shoes price " << p->price << endl;
//        p++;
//    }
//    return(p);
//}