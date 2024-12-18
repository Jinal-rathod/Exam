// (num % 2 != 0) == ture count the total number.

#include <iostream>
using namespace std;

int main()
{
    int a, b, count = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++)
    {
        if (i % 2 != 0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}