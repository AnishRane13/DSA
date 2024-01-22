// Next_permutation : find next lexicographically greater permutation
// Problem Statement: Given an array Arr[] of integers, 
// rearrange the numbers of the given array into the lexicographically next greater permutation of numbers.

// If such an arrangement is not possible, it must rearrange to the lowest possible order (i.e., sorted in ascending order).

// Example 1 :
// Input format: Arr[] = {1,3,2}
// Output: Arr[] = {2,1,3}
// Explanation: All permutations of {1,2,3} are {{1,2,3} , {1,3,2}, {2,13} , {2,3,1} , {3,1,2} , {3,2,1}}. So, the next permutation just after {1,3,2} is {2,1,3}.

// Example 2:
// Input format: Arr[] = {3,2,1}
// Output: Arr[] = {1,2,3}
// Explanation: As we see all permutations of {1,2,3}, we find {3,2,1} at the last position. So, we have to return the topmost permutation.



//Better Force
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> nextGreaterPermutation(vector<int> &A) {
//     next_permutation(A.begin(),A.end());   // In built in c++ STL
//     return A;
// }

// int main()
// {
//     vector<int> A = {2, 1, 5, 4, 3, 0, 0};
//     vector<int> ans = nextGreaterPermutation(A);

//     cout << "The next permutation is: [";
//     for (auto it : ans) {
//         cout << it << " ";
//     }
//     cout << "]n";
//     return 0;
// }





//Optimal Approach

#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterPermutation(vector<int> &A) {
    
    
}

int main()
{
    vector<int> A = {2, 1, 5, 4, 3, 0, 0};
    vector<int> ans = nextGreaterPermutation(A);

    cout << "The next permutation is: [";
    for (auto it : ans) {
        cout << it << " ";
    }
    cout << "]n";
    return 0;
}
