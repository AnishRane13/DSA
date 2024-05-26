// // Maximum Product Subarray in an Array
// // Problem Statement: Given an array that contains both negative and positive integers,
// // find the maximum product subarray.

// Example 1:
// Input:
//  Nums = [1,2,3,4,5,0]
// Output:
//  120
// Explanation:
//  In the given array, we can see 1×2×3×4×5 gives maximum product value.

// Example 2:
// Input:
//  Nums = [1,2,-3,0,-4,-5]
// Output:
//  20
// Explanation:
//  In the given array, we can see (-4)×(-5) gives maximum product value.

// Brute Force
#include <bits/stdc++.h>
using namespace std;

int maxProductSubArray(vector<int> &nums)
{
    int n = nums.size();
    int result = INT_MIN;
    int product;

    for (int i = 0; i < n - 1; i++)
    {
        product = 1;
        for (int j = i + 1; j < n; j++)
        {
            result = max(product, result);
            product *= nums[j];
        }
        result = max(product, result);
    }

    return result;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 0};
    cout << "The maximum product subarray: " << maxProductSubArray(nums) << endl;
    cout << "Hello";
    return 0;
}
