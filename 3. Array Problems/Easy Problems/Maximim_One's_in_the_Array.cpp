// Count Maximum Consecutive One’s in the array
// Problem Statement: Given an array that contains only 1 and 0 
// return the count of maximum consecutive ones in the array.

// Input: prices = {1, 1, 0, 1, 1, 1}
// Output: 3
// Explanation: There are two consecutive 1’s and three consecutive 1’s in the array out of which maximum is 3.

// Input: prices = {1, 0, 1, 1, 0, 1} 
// Output: 2
// Explanation: There are two consecutive 1's in the array. 

#include <bits/stdc++.h>
using namespace std;

 int findMaxConsecutiveOnes(vector < int > & nums){
    int counter = 0;
    vector<int> v;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i]==1)
        {
           counter++;
             v.push_back(counter);
        }else
        {
            v.push_back(counter);
            counter=0;
        }
    }
    return *max_element(v.begin(), v.end());
}

int main(){
 vector < int > nums = { 1, 1, 0, 1, 1, 1 };
  int ans = findMaxConsecutiveOnes(nums);
  cout << "The maximum  consecutive 1's are " << ans;

    return 0;
}








