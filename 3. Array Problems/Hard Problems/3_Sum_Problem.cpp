// 3 Sum : Find triplets that add up to a zero
// Problem Statement: Given an array of N integers, 
// your task is to find unique triplets that add up to give a sum of zero. 
// In short, you need to return an array of all the unique triplets [arr[a], arr[b], arr[c]] such that i!=j, j!=k, k!=i, and their sum is equal to zero.


// Example 1: 
// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation: Out of all possible unique triplets possible, [-1,-1,2] and [-1,0,1] satisfy the condition of summing up to zero with i!=j!=k


// Example 2:
// Input: nums=[-1,0,1,0]
// Output: Output: [[-1,0,1],[-1,1,0]]
// Explanation: Out of all possible unique triplets possible, [-1,0,1] and [-1,1,0] satisfy the condition of summing up to zero with i!=j!=k




// Brute Force
// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> triplet(int n, vector<int> &arr) {
//     set<vector<int>> st;

//     // check all possible triplets:
//     for (int i = 0; i < n; i++) {
//         for (int j = i + 1; j < n; j++) {
//             for (int k = j + 1; k < n; k++) {
//                 if (arr[i] + arr[j] + arr[k] == 0) {
//                     vector<int> temp = {arr[i], arr[j], arr[k]};
//                     sort(temp.begin(), temp.end());
//                     st.insert(temp);
//                 }
//             }
//         }
//     }

//     //store the set elements in the answer:
//     vector<vector<int>> ans(st.begin(), st.end());
//     return ans;
// }


// int main()
// {
//     vector<int> arr = { -1, 0, 1, 2, -1, -4};
//     int n = arr.size();
//     vector<vector<int>> ans = triplet(n, arr);
//     for (auto it : ans) {
//         cout << "[";
//         for (auto i : it) {
//             cout << i << " ";
//         }
//         cout << "] ";
//     }
//     cout << "\n";
//     return 0;
// }






//Better Approach
// #include <bits/stdc++.h>
// using namespace std;

// vector<vector<int>> triplet(int n, vector<int> &arr) {
    
//      set<vector<int>> st;

//     for (int i = 0; i < n; i++) {
//         set<int> hashset;
//         for (int j = i + 1; j < n; j++) {
//             //Calculate the 3rd element:
//             int third = -(arr[i] + arr[j]);

//             //Find the element in the set:
//             if (hashset.find(third) != hashset.end()) {
//                 vector<int> temp = {arr[i], arr[j], third};
//                 sort(temp.begin(), temp.end());
//                 st.insert(temp);
//             }
//             hashset.insert(arr[j]);
//         }
//     }

//     //store the set in the answer:
//     vector<vector<int>> ans(st.begin(), st.end());

//     return ans;
// }


// int main()
// {
//     vector<int> arr = { -1, 0, 1, 2, -1, -4};
//     int n = arr.size();
//     vector<vector<int>> ans = triplet(n, arr);
//     for (auto it : ans) {
//         cout << "[";
//         for (auto i : it) {
//             cout << i << " ";
//         }
//         cout << "] ";
//     }
//     cout << "\n";
//     return 0;
// }



