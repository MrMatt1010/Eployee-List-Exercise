// Eployee-Lisrt.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

class employee {

public:
    string name;
    int age;
    void getdata(void)
    {

        cout << "\nEnter employee name:\n";
        getline(cin, name); //reades a line of string, allowing for white space
        cout << "\nEnter employee age:\n";
        cin >> age;
        cin.ignore(); //clears buffer
    }
    void putdata()
    {

        cout << "\nEmployee name is: " << name;
        cout << ":\nEmployee age is: " << age;

    }
};

int main()
{
    int i;

    employee e[5];
    for (i = 0; i < 5; i++)
    {
        e[i].getdata();
    }
    for (i = 0; i < 5; i++)
    {
        e[i].putdata();
    }
    return 0;
}

