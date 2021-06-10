#include <iostream>
using namespace std;
// Program to print the sum of elements in the Zigzag sequence in a given matrix is discussed here.
// Given a matrix, the sum of elements in the zigzag sequence is displayed as output.
//     1    2   3
//     4    5   6
//     7    8   9
//  Sum == 1+2+3+5+7+8+9;
// sum of elements in the zigzag sequence
// Algorithm to find the sum of elements in the zigzag sequence in a given matrix
//     Input the order of the matrix.
//     Input the matrix elements.
//     Find the sum of elements of the matrix in zigzag sequence.
//     Print the sum.

int main()
{
    int n;
    cin >> n;

    int mat[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }

    int sum = 0;
    int count = 2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == 0 || i == n - 1)
            {
                sum = sum + mat[i][j];
            }
            else
            {
                sum = sum + mat[i][(n - j) - count++];
                break;
            }
        }
    }
    cout << sum;
}