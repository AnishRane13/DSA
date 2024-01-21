// Kadane’s Algorithm : Maximum Subarray Sum in an Array
// Problem Statement: Given an integer array arr, 
// find the contiguous subarray (containing at least one number) which
// has the largest sum and returns its sum and prints the subarray.

// Example 1:
// Input: arr = [-2,1,-3,4,-1,2,1,-5,4] 
// Output: 6 
// Explanation: [4,-1,2,1] has the largest sum = 6. 

// Examples 2: 
// Input: arr = [1] 
// Output: 1 
// Explanation: Array has only one element and which is giving positive sum of 1.


//Optimal ----------------------------------
#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int arr[], int n) {
    int sum = 0, maxi = INT_MIN;
    int start;
    int ansStart, ansEnd;
    for (int i = 0; i < n; i++)
    {
        if (sum == 0)
        {
            start = i;
        }
        sum = sum + arr[i];

        if (sum > maxi)
        {
            maxi = sum;
            ansStart = start, ansEnd = i;
        }
        if (sum < 0)
        {
            sum = 0;
        }   
    }
    return maxi, ansStart, ansEnd;
}

int main()
{   
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}

