// two number(U) sum of odd number

#include <iostream>
    using namespace std;

int main()
{
    int num1, num2, sum = 0;
    cin >> num1 >> num2;
    for (int i = num1; i <= num2; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << sum << " ";
    return 0;
}