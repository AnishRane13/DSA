// Problem Statement:
// Given a non-empty array of integers arr,
// every element appears twice except for one. Find that single one.

// Example 1:
// Input Format: arr[] = {2,2,1}
// Result: 1
// Explanation: In this array, only the element 1 appear once and so it is the answer.

// Example 2:
// Input Format: arr[] = {4,1,2,1,2}
// Result: 4
// Explanation: In this array, only element 4 appear once and the other elements appear twice. So, 4 is the answer.

// Brute Force
//  #include <bits/stdc++.h>
//  using namespace std;

// int getSingleElement(vector<int> &arr) {
//     int size = arr.size();
//     int counter;
//     int num = 0;
//     //  sort(arr.begin(), arr.end());
//     for (int i = 0; i < size; i++)
//     {
//          num = arr[i];
//          counter=0;
//         for (int j = 0; j < size; j++)
//         {
//             if (arr[j]==num)
//             {
//                 counter++;
//             }
//         }
//         if (counter == 1)
//         {
//             return num;
//         }
//     }
//     return -1;
// }

// int main()
// {
//     vector<int> arr = {4, 1, 2, 1, 2};
//     // vector<int> arr = {2,2,1};
//     int ans = getSingleElement(arr);
//     cout << "The single element is: " << ans << endl;
// }

// Time Complexity = O(n^2)

// Optimal ------------------------------
// xorr
#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr)
{
    int xorr = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        xorr = xorr^arr[i];
    }
    return xorr;
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    // vector<int> arr = {2,2,1};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
}