// print max element of each row of 2D array

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> A = {
        {1, 5, 9},
        {4, 2, 0},
        {7, 8, 3}};

    int row = A.size();
    int col = A[0].size();

    for (int i = 0; i < row; i++)
    {
        int max = A[i][0];
        for (int j = 1; j < col; j++)
        {
            if (A[i][j] > max)
            {
                max = A[i][j];
            }
        }
        cout << "Max element of row " << i << " is: " << max << endl;
    }
    return 0;
}