// // Problem Statement: 
// // Given a matrix, your task is to rotate the matrix 90 degrees clockwise.


// Example 1:
// Input: [[1,2,3],[4,5,6],[7,8,9]]

// Output: [[7,4,1],[8,5,2],[9,6,3]]

// Explanation: Rotate the matrix simply by 90 degree clockwise and return the matrix.


// Example 2:
// Input: [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]

// Output:[[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]

// Explanation: Rotate the matrix simply by 90 degree clockwise and return the matrix





//Brute Force
// #include<bits/stdc++.h>
// using namespace std;

// vector < vector < int >> rotate(vector < vector < int >> & matrix) {
//     int n = matrix.size();
//     vector < vector < int >> rotated(n, vector < int > (n, 0));
//     for (int i = 0; i < n; i++) {
//     for (int j = 0; j < n; j++) {
//         rotated[j][n - i - 1] = matrix[i][j];
//     }
//     }
//     return rotated;
// }

// int main() {
//     vector < vector < int >> arr;
//     arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     vector < vector < int >> rotated = rotate(arr);
//     cout << "Rotated Image" << endl;
//     for (int i = 0; i < rotated.size(); i++) {
//     for (int j = 0; j < rotated[0].size(); j++) {
//         cout << rotated[i][j] << " ";
//     }
//     cout << endl;
//     }

// }




//Optimal
// Step 1: Transpose the matrix. (transposing means changing columns to rows and rows to columns)

// Step 2: Reverse each row of the matrix.


#include<bits/stdc++.h>

using namespace std;
void rotate(vector < vector < int >> & matrix) {
    int n = matrix.size();
    //transposing the matrix
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
        swap(matrix[i][j], matrix[j][i]);
    }
    }
    //reversing each row of the matrix
    for (int i = 0; i < n; i++) {
    reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    vector < vector < int >> arr;
    arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(arr);
    cout << "Rotated Image" << endl;
    for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
    }

}

