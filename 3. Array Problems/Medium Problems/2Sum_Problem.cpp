// Two Sum : Check if a pair with given sum exists in Array
// Problem Statement: Given an array of integers arr[] and 
// an integer target.

// 1st variant: Return YES if there exist two numbers such that their sum is equal to the target. 
// Otherwise, return NO.

// 2nd variant: Return indices of the two numbers such that their sum is equal to the target. 
// Otherwise, we will return {-1, -1}.


// Example 1:
// Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 14
// Result: YES (for 1st variant)
//        [1, 3] (for 2nd variant)
// Explanation: arr[1] + arr[3] = 14. So, the answer is “YES” for the first variant and [1, 3] for 2nd variant.

// Example 2:
// Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 15
// Result: NO (for 1st variant)
// 	[-1, -1] (for 2nd variant)
// Explanation: There exist no such two numbers whose sum is equal to the target.



//Brute Force
// #include <bits/stdc++.h>
// using namespace std;

// string twoSum(int n, vector<int> &arr, int target) {
//     int sum = 0;
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[i]+arr[j]==target)
//             {
//                 return "YES";
//             }
//         }
//     }
//     return "NO";
// }

// int main(){
//  int n = 5;
//     vector<int> arr = {2, 6, 5, 8, 11};
//     int target = 14;
//     string ans = twoSum(n, arr, target);
//     cout << "This is the answer for variant 1: " << ans << endl;

//     return 0;
// }



//Optimal Way
#include <bits/stdc++.h>
using namespace std;

string twoSum(int n, vector<int> &arr, int target) {
    sort(arr.begin(),arr.end());
    int left = 0, right = n-1;
    while (left < right)
    {
        int sum = arr[left] + arr[right];
        if (sum == target)
        {
            return "YES";
        }else if (sum < target)
        {
            left++;
        }else
        {
            right--;
        }
    }
    return "NO";
}

int main(){
 int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;

    return 0;
}