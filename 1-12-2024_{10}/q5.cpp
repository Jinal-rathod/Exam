// write a program to check the person is eligible for senior citizen discout.

#include <iostream>
using namespace std;

int main()
{
    int age, income;
    cout << "Age : ";
    cin >> age;
    cout << "Income : ";
    cin >> income;
    if (age >= 60 && income < 50000)
    {
        cout << "Eligible for senior citizen discout";
    }
    else
    {
        cout << "Not Eligible for senior citizen discout";
    }
}