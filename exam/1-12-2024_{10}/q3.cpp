// write a program to check number is divisible by 3 and 5.

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if (num % 3 == 0 && num % 5 == 0)
    {
        cout << "Divisible by 5 and 3.";
    }
    else if (num % 3 == 0)
    {
        cout << "Divisible by 3.";
    }
    else if (num % 5 == 0)
    {
        cout << "Divisible by 5.";
    }
    else
    {
        cout << "Not Divisible by 5 and 3.";
    }
}