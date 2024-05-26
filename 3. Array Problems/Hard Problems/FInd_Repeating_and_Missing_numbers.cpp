// Find the repeating and missing numbers
// Problem Statement: You are given a read-only array of N integers with values also in the range [1, N] both inclusive. 
// Each integer appears exactly once except A which appears twice and B which is missing. The task is to find the repeating and missing numbers A and B where A repeats twice and B is missing.


// Example 1:
// Input Format:  array[] = {3,1,2,5,3}
// Result: {3,4)
// Explanation: A = 3 , B = 4 
// Since 3 is appearing twice and 4 is missing

// Example 2:
// Input Format: array[] = {3,1,2,5,4,6,7,5}
// Result: {5,8)
// Explanation: A = 5 , B = 8 
// Since 5 is appearing twice and 8 is missing







#include <bits/stdc++.h>
using namespace std;

vector<int> findMissingRepeatingNumbers(vector<int> a) {
    int n = a.size(); // size of the array
    int sum = (n*(n+1))/2;
    int sumArray = 0;
    int repeating = 0, missing = 0;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        count =0;
        sumArray += a[i];
        for (int j = i; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
            }
            if (count == 2)
            {
              repeating = a[j];
              break;
            }
            
        }
    }

    missing = (sum-sumArray)+ repeating;

    return {repeating, missing};
}

int main()
{
    // vector<int> a = {3, 1, 2, 5, 4, 6, 7, 5};
    vector<int> a = {3,1,2,5,3};
    vector<int> ans = findMissingRepeatingNumbers(a);
    cout << "The repeating and missing numbers are: {"
         << ans[0] << ", " << ans[1] << "}\n";
    return 0;
}

