// print diagonal and antidiagobal of 2D array

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}};

    int row = A.size();
    int col = A[0].size();

    cout << "Diagonal elements are: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == j)
            {
                cout << A[i][j] << " ";
            }
            else
            {
                cout << "_ ";
            }
        }
        cout << endl;
    }
    cout << "Anti-diagonal elements are: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i + j == row - 1)
            {
                cout << A[i][j] << " ";
            }
            else
            {
                cout << "_ ";
            }
        }
        cout << endl;
    }
    return 0;
}