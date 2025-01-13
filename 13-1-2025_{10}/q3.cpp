// print 1 to n number

#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << i << endl;
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