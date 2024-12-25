// ----*
// ---**
// --***
// -****
// *****
// -****
// --***
// ---**
// ----*

#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int k = n; k > i; k--)
        {
            cout << "-";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n - 1; i >= 1; i--)
    {
        for (int k = n; k > i; k--)
        {
            cout << "-";
        }
        for (int j = 1; j <= i; j++)
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