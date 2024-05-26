// Count Reverse Pairs
// Problem Statement: Given an array of numbers, you need to return the count of reverse pairs. 
// Reverse Pairs are those pairs where i<j and arr[i]>2*arr[j].


// Example 1:
// Input: N = 5, array[] = {1,3,2,3,1)
// Output: 2 
// Explanation: The pairs are (3, 1) and (3, 1) as from both the pairs the condition arr[i] > 2*arr[j] is satisfied.

// Example 2:
// Input: N = 4, array[] = {3,2,1,4}
// Output: 1
// Explaination: There is only 1 pair  ( 3 , 1 ) that satisfy the condition arr[i] > 2*arr[j]



//Brute Force
#include <bits/stdc++.h>
using namespace std;

int countPairs(vector<int>&a, int n) {

    // Count the number of pairs:
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > 2 * a[j]) cnt++;
        }
    }
    return cnt;
}

int team(vector <int> & skill, int n) {
    return countPairs(skill, n);
}

int main()
{
    vector<int> a = {4, 1, 2, 3, 1};
    int n = 5;
    int cnt = team(a, n);
    cout << "The number of reverse pair is: "
         << cnt << endl;
    return 0;
}
