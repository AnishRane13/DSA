// Count Subarray sum Equals K
// Problem Statement: Given an array of integers and an integer k, return the total number of subarrays whose sum equals k.

// A subarray is a contiguous non-empty sequence of elements within an array.



// Example 1:
// Input Format: N = 4, array[] = {3, 1, 2, 4}, k = 6
// Result: 2
// Explanation: The subarrays that sum up to 6 are [3, 1, 2] and [2, 4].

// Example 2:
// Input Format: N = 3, array[] = {1,2,3}, k = 3
// Result: 2
// Explanation: The subarrays that sum up to 3 are [1, 2], and [3].




//Brute Force ----------------------
// #include <bits/stdc++.h>
// using namespace std;

// int findAllSubarraysWithGivenSum(vector < int > & arr, int k) {
//     int n = arr.size(); // size of the given array.
//     int cnt = 0; // Number of subarrays:
//     int sum =0;
//     for (int i = 0; i < n; i++)
//     {
//         sum =0;
//         for (int j = i; j < n; j++)
//         {
//             sum += arr[j];
//             if (sum == k)
//             {
//                 cnt++;
//             }
//         }
//     }
//     return cnt;
// }

// int main()
// {
//     vector<int>arr = {3, 1, 2};
//     int k = 3;
//     int cnt = findAllSubarraysWithGivenSum(arr, k);
//     cout << "The number of subarrays is: " << cnt << "\n";
//     return 0;
// }






//Optimal ------------------------------------

/// Pending ---------------