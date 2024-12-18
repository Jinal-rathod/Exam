// if i+j is divisible by 3 and 5, count and print the number.

#include <iostream>
using namespace std;

int main()
{
    int n, sum, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            sum = i + j;
        }
        if (sum % 3 == 0 && sum % 5 == 0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}
