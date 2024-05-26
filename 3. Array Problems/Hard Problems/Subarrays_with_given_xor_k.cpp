// // Count the number of subarrays with given xor K
// // Problem Statement: Given an array of integers A and an integer B.
// // Find the total number of subarrays having bitwise XOR of all elements equal to k.

// Example 1:
// Input Format: A = [4, 2, 2, 6, 4] , k = 6
// Result: 4
// Explanation: The subarrays having XOR of their elements as 6 are  [4, 2], [4, 2, 2, 6, 4], [2, 2, 6], [6]

// Example 2:
// Input Format: A = [5, 6, 7, 8, 9], k = 5
// Result: 2
// Explanation: The subarrays having XOR of their elements as 5 are [5] and [5, 6, 7, 8, 9]

#include <bits/stdc++.h>
using namespace std;

int subarraysWithXorK(vector<int> a, int k)
{
    int n = a.size(); // size of the given array.
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int xorr = 0;
        for (int j = i; j < n; j++)
        {
            xorr = xorr ^ a[j];
            if (xorr == k)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    vector<int> a = {5, 6, 7, 8, 9};
    int k = 5;
    int ans = subarraysWithXorK(a, k);
    cout << "The number of subarrays with XOR k is: "
         << ans << "\n";
    return 0;
}
