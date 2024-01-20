// Longest Subarray with given Sum K(Positives)
// Problem Statement: Given an array and a sum k,
// we need to print the length of the longest subarray that sums to k.

// Example 1:
// Input Format: N = 3, k = 5, array[] = {2,3,5}
// Result: 2
// Explanation: The longest subarray with sum 5 is {2, 3}. And its length is 2.

// Example 2:
// Input Format: N = 5, k = 10, array[] = {2,3,5,1,9}
// Result: 3
// Explanation: The longest subarray with sum 10 is {2, 3, 5}. And its length is 3.




// Longest Subarray with sum K | [Postives and Negatives]
// Problem Statement: Given an array and a sum k, 
// we need to print the length of the longest subarray that sums to k.

// Example 1:
// Input Format: N = 3, k = 5, array[] = {2,3,5}
// Result: 2
// Explanation: The longest subarray with sum 5 is {2, 3}. And its length is 2.

// Example 2:
// Input Format: N = 3, k = 1, array[] = {-1, 1, 1}
// Result: 3
// Explanation: The longest subarray with sum 1 is {-1, 1, 1}. And its length is 3.


#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, long long k)
{
    int sum = 0;
    int maxi = 0;
    for (int i = 0; i < a.size(); i++) {
        sum = 0; // Reset sum for each starting point i
        for (int j = i; j < a.size(); j++) {
            sum += a[j];
            if (sum == k) {
                maxi = max(maxi, j - i + 1);
            } else if (sum > k) {
                break; // Exit inner loop if sum exceeds k
            }
        }
    }
    return maxi;
}

int main()
{
    vector<int> a = {-1, 1, 1};
    // vector<int> a = {2, 3, 5, 1, 9};
    long long k = 1;
    int len = getLongestSubarray(a, k);
     cout << "The length of the longest subarray is: " << len << "\n";
}