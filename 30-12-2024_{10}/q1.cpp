// check target value exits or not

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
    int target;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        for (int j = i - 1; j > 0; j--)
        {
            if (arr[i] + arr[j] == target)
            {
                cout << "true";
                break;
            }
        }
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
