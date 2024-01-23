// Longest Consecutive Sequence in an Array
// Problem Statement: You are given an array of ‘N’ integers. 
// You need to find the length of the longest sequence which contains the consecutive elements.


// Example 1:
// Input: [100, 200, 1, 3, 2, 4]
// Output: 4
// Explanation: The longest consecutive subsequence is 1, 2, 3, and 4.

// Input: [3, 8, 5, 7, 6]
// Output: 4
// Explanation: The longest consecutive subsequence is 5, 6, 7, and 8.




//Brute Force------------------------------

// #include <bits/stdc++.h>
// using namespace std;

// bool linearSearch(vector<int>&a, int num) {
//     int n = a.size(); //size of array
//     for (int i = 0; i < n; i++) {
//         if (a[i] == num)
//             return true;
//     }
//     return false;
// }
// int longestSuccessiveElements(vector<int>&a) {
//     int n = a.size(); //size of array
//     int longest = 1;
//     //pick a element and search for its
//     //consecutive numbers:
//     for (int i = 0; i < n; i++) {
//         int x = a[i];
//         int cnt = 1;
//         //search for consecutive numbers
//         //using linear search:
//         while (linearSearch(a, x + 1) == true) {
//             x += 1;
//             cnt += 1;
//         }

//         longest = max(longest, cnt);
//     }
//     return longest;
// }

// int main()
// {
//     vector<int> a = {100, 200, 1, 2, 3, 4};
//     int ans = longestSuccessiveElements(a);
//     cout << "The longest consecutive sequence is " << ans << "\n";
//     return 0;
// }





//Better---------------------------
// #include <bits/stdc++.h>
// using namespace std;

// int longestSuccessiveElements(vector<int>&a) {
   
//    if (a.size()==0) return 0;
//     sort(a.begin(),a.end());
//     int n = a.size();
//     int lastSmaller = INT_MIN;
//     int count = 0;
//     int longest = 1;

//     for (int i = 0; i < n; i++)
//     {
//         if (a[i] - 1 == lastSmaller)
//         {
//             count += 1;
//             lastSmaller = a[i];
//         }else if (lastSmaller != a[i])
//         {
//             count = 1;
//             lastSmaller = a[i];
//         }
//         longest = max(longest, count);
//     }
//     return longest;
// }

// int main()
// {
//     vector<int> a = {100, 200, 1, 2, 3, 4};
//     int ans = longestSuccessiveElements(a);
//     cout << "The longest consecutive sequence is " << ans << "\n";
//     return 0;
// }






//Optimal Approach --------------------------------
// Using unordered map



#include <bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int>&a) {
    int n = a.size();
    if (n == 0) return 0;

    int longest = 1;
    unordered_set<int> st;
    //put all the array elements into set:
    for (int i = 0; i < n; i++) {
        st.insert(a[i]);
    }

    //Find the longest sequence:
    for (auto it : st) {
        //if 'it' is a starting number:
        if (st.find(it - 1) == st.end()) {
            //find consecutive numbers:
            int cnt = 1;
            int x = it;
            while (st.find(x + 1) != st.end()) {
                x = x + 1;
                cnt = cnt + 1;
            }
            longest = max(longest, cnt);
        }
    }
    return longest;

}

int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}

