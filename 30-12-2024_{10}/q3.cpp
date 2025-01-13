// Write a program to reverse a given array. The program should take an array as input and output the array in reverse order.

#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i];
        if (i > 0)
            cout << " ";
    }
    cout << endl;
}
int main()
{
    int tc;
    cin >> tc;

    while (tc-- > 0)
    {
        solve();
    }
    return 0;
}

