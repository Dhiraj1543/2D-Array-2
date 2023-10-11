1. Write a program to print the elements of both the diagonals in a square matrix.
#include <iostream>
    using namespace std;
int main()
{
    int n;
    cout << "Enter the rows of matrix:";
    cin >> n;
    int m;
    cout << "Enter the column of  matrix:";
    cin >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i + j == n - 1) or (i == j))
                cout << arr[i][j] << " ";
            else
                cout << " ";
        }
    }
}

2.Write a program to rotate the matrix by 90 degrees anti - clockwise.
#include <iostream>
                                                            using namespace std;
int main()
{
    int n;
    cout << "Enter the rows of matrix:";
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for (int k = 0; k < n; k++)
    {
        int i = 0;
        int j = n - 1;
        while (i <= j)
        {
            int temp = arr[i][k];
            arr[i][k] = arr[j][k];
            arr[j][k] = temp;
            i++;
            j--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
}

3.Write a program to print the matrix in wave form.
#include <iostream>
    using namespace std;
int main()
{
    int n;
    cout << "Enter the rows of matrix:";
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int i = n - 1; i >= 0; i--)
            {
                cout << arr[i][j] << " ";
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i][j] << " ";
            }
        }
    }
}

Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.
#include <iostream>
                            using namespace std;
int main()
{
    int n;
    cout << "Enter the rows and columns of the matrix:";
    cin >> n;
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int minr = 0;
    int maxr = n - 1;
    int minc = 0;
    int maxc = n - 1;
    int tne = n * n;
    int count = 0;
    int a = 1;
    while (count < tne)
    {
        for (int j = minc; j <= maxc && count < tne; j++)
        {
            matrix[minr][j] = a++;
            count++;
        }
        minr++;
        for (int i = minr; i <= maxr && count < tne; i++)
        {
            matrix[i][maxc] = a++;
            count++;
        }
        maxc--;
        for (int j = maxc; j >= minc && count < tne; j--)
        {
            matrix[maxr][j] = a++;
            count++;
        }
        maxr--;
        for (int i = maxr; i >= minr && count < tne; i--)
        {
            matrix[i][minc] = a++;
            count++;
        }

        minc++;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
    }
}

5.Predict the output :
#include <iostream>
    using namespace std;
int main()
{
    int a[][2] = {{1, 2}, {3, 4}};
    int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            cout << a[i][j];
    return 0;
}
// Output:-1234