// Problem Statement:
// Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.

// Examples 1:

// Input: matrix=[[1,1,1],[1,0,1],[1,1,1]]

// Output: [[1,0,1],[0,0,0],[1,0,1]]

// Explanation: Since matrix[2][2]=0.Therfore the 2nd column and 2nd row wil be set to 0.

// Input: matrix=[[0,1,2,0],[3,4,5,2],[1,3,1,5]]

// Output:[[0,0,0,0],[0,4,5,0],[0,3,1,0]]

// Explanation:Since matrix[0][0]=0 and matrix[0][3]=0. Therefore 1st row, 1st column and 4th column will be set to 0

// Look for TakeuForward Article for this

// //Brute Force
// #include <bits/stdc++.h>
// using namespace std;

// void markRow(vector<vector<int>> &matrix, int n, int m, int i)
// {
//     for (int j = 0; j < m; j++)
//     {
//         if (matrix[i][j]!=0)
//         {
//             matrix[i][j] = -1;
//         }
//     }
// }

// void markCol(vector<vector<int>> &matrix, int n, int m, int j)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (matrix[i][j] != 0)
//         {
//             if (matrix[i][j]!=0)
//             {
//                 matrix[i][j] = -1;
//             }

//         }

//     }

// }

// vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (matrix[i][j]==0)
//             {
//                 markRow(matrix,n,m,i);
//                 markCol(matrix,n,m,j);
//             }
//         }
//     }

//       for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (matrix[i][j] == -1) {
//                 matrix[i][j] = 0;
//             }
//         }
//     }

//     return matrix;
// }

// int main()
// {
//     vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
//     int n = matrix.size();
//     int m = matrix[0].size();
//     vector<vector<int>> ans = zeroMatrix(matrix, n, m);

//     cout << "The Final matrix is: "<<endl;
//     for (auto it : ans)
//     {
//         for (auto ele : it)
//         {
//             cout << ele << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }









// Better Solution

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m)
{
    int col[m] = {0};
    int row[n] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (row[i] || col[j])
            {
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}

int main()
{
    vector<vector<int>> matrix = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans = zeroMatrix(matrix, n, m);

    cout << "The Final matrix is: "<<endl;
    for (auto it : ans)
    {
        for (auto ele : it)
        {
            cout << ele << " ";
        }
        cout << endl;
    }
    return 0;
}




//Opitmal Pending

