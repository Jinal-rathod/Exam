// write a program to check marks and give a grands.

#include <iostream>
using namespace std;

int main()
{
    int marks;
    cin >> marks;
    if (marks >= 90)
    {
        cout << "Grand A";
    }
    else if (75 <= marks && marks <= 89)
    {
        cout << "Grand B";
    }
    else if (50 <= marks && marks <= 74)
    {
        cout << "Grand C";
    }
    else
    {
        cout << "Fail";
    }
}