// Find the Majority Element that occurs more than N/2 times
// Problem Statement: Given an array of N integers, 
// write a program to return an element that occurs more than N/2 times in the given array. 
// You may consider that such an element always exists in the array.

// Example 1:
// Input Format: N = 3, nums[] = {3,2,3}
// Result: 3
// Explanation: When we just count the occurrences of each number and compare with half of the size of the array, you will get 3 for the above solution. 

// Example 2:
// Input Format:  N = 7, nums[] = {2,2,1,1,1,2,2}
// Result: 2
// Explanation: After counting the number of times each element appears and comparing it with half of array size, we get 2 as result.

// Example 3:
// Input Format:  N = 10, nums[] = {4,4,2,4,3,4,4,3,2,4}
// Result: 4


//Brute Force -----------------------------
// #include <bits/stdc++.h>
// using namespace std;

// int majorityElement(vector<int> v){
//     int n = v.size();
//     int counter = 0;
//     for (int i = 0; i < n; i++)
//     {
//         counter = 0;
//         for (int j = 0; j < n; j++)
//         {
//             if (v[i]==v[j])
//             {
//                 counter++;
//             } 
//         }
//         if (counter > (n/2))
//         {
//             return v[i];
//         }
//     }
//     return -1;
// }

// int main()
// {   
//     vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
//     int ans = majorityElement(arr);
//     cout << "The majority element is: " << ans << endl;
//     return 0;
// }

//Time Complexity = O(N^2)



//Better----------------------------------------
//Map
// #include <bits/stdc++.h>
// using namespace std;

// int majorityElement(vector<int> v){

//     int n = v.size();

//     map<int,int>mpp;

//     for (int i = 0; i < n; i++)
//     {
//       mpp[v[i]]++;
//     }
    
//     for(auto it: mpp){
//         if (it.second > (n/2))
//         {
//             return it.first;
//         }
//     }

//     return -1;
// }

// int main()
// {   
//     vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
//     int ans = majorityElement(arr);
//     cout << "The majority element is: " << ans << endl;
//     return 0;
// }

// Time Complexity: O(N*logN) + O(N)



//Optimal ----------------------------------------------
//Moore's Voting Algorithm
#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> v){
    int counter = 0;
    int el;

    for (int i = 0; i < v.size(); i++)
    {
        if (counter == 0)
        {
            counter = 1;
            el = v[i];
        }
        else if (v[i] == el)
        {
            counter++;
        }
        else
        {
            counter--;
        }
    }

    int counter1 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == el)
        {
            counter1++;
        }
    }

    if (counter1 > (v.size()/2))
    {
        return el;
    }
    return -1;
}

int main()
{   
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}

// Time Complexity = O(N) + O(N)