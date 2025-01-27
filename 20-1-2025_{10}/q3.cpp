// printf reverse of a N digit number
// 1 2 3
// 4 5 6
// 7 8 9

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the number of rows and columns: ";
    cin >> row >> col;
    int A[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << "A[" << i << "][" << j << "] : ";
            cin >> A[i][j];
        }
    }
    int k = 2;
    for (int i = 0; i < row; i++)
    {
        for (int j = col - 1; j >= 0; j--)
        {
            if (j == 2)
            {
                cout << A[i][j] << " ";
            }

            if (i == j)
            {
                if (i == 1)
                {
                    cout << A[i][j] << " ";
                }
                else
                {
                    cout << "_ ";
                }
            }
            if (j == 0)
            {
                cout << A[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
