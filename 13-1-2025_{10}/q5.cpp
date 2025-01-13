// Print a Full Diamond Pattern with * and _

#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        for (int s = n; s > i; s--)
        {
            cout << "_";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int s = n; s > i; s--)
        {
            cout << "_";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = i - 1; j >= 1; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
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
