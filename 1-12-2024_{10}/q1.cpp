// write a program to check number is positive, negative or zero.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num > 0)
    {
        cout << "It's a positive";
    }
    else if (num < 0)
    {
        cout << "It's a negative";
    }
    else
    {
        cout << "It's a zero";
    }
}