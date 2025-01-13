// check array elements is positive or negative

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
    for (int i = 0; i < n; i++)
    {
        if (0 < arr[i])
        {
            cout << arr[i] << " Positive number" << endl;
        }
        else
        {
            cout << arr[i] << " Negative number" << endl;
        }
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
