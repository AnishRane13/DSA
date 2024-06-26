// Majority Elements(>N/3 times) | Find the elements that appears more than N/3 times in the array
// Problem Statement: Given an array of N integers.
// Find the elements that appear more than N/3 times in the array. If no such element exists, return an empty vector.

// Example 1:
// Input Format: N = 5, array[] = {1,2,2,3,2}
// Result: 2
// Explanation: Here we can see that the Count(1) = 1, Count(2) = 3 and Count(3) = 1.Therefore, the count of 2 is greater than N/3 times. Hence, 2 is the answer.

// Example 2:
// Input Format:  N = 6, array[] = {11,33,33,11,33,11}
// Result: 11 33
// Explanation: Here we can see that the Count(11) = 3 and Count(33) = 3. Therefore, the count of both 11 and 33 is greater than N/3 times. Hence, 11 and 33 is the answer.




//Brute Force
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> majorityElement(vector<int> v) {
//     int n = v.size(); //size of the array
//     vector<int> ls; // list of answers

//     for (int i = 0; i < n; i++) {
//         //selected element is v[i]:
//         // Checking if v[i] is not already
//         // a part of the answer:
//         if (ls.size() == 0 || ls[0] != v[i]) {
//             int cnt = 0;
//             for (int j = 0; j < n; j++) {
//                 // counting the frequency of v[i]
//                 if (v[j] == v[i]) {
//                     cnt++;
//                 }
//             }

//             // check if frquency is greater than n/3:
//             if (cnt > (n / 3))
//                 ls.push_back(v[i]);
//         }

//         if (ls.size() == 2) break;
//     }
//     return ls;
// }

// int main()
// {
//     vector<int> arr = {11, 33, 33, 11, 33, 11};
//     vector<int> ans = majorityElement(arr);
//     cout << "The majority elements are: ";
//     for (auto it : ans)
//         cout << it << " ";
//     cout << "\n";
//     return 0;
// }





//Better
// #include <bits/stdc++.h>
// using namespace std;

// vector<int> majorityElement(vector<int> v) {
//     int n = v.size(); //size of the array
//     vector<int> ls; // list of answers

//     //declaring a map:
//     map<int, int> mpp;

//     // least occurrence of the majority element:
//     int mini = int(n / 3) + 1;

//     //storing the elements with its occurnce:
//     for (int i = 0; i < n; i++) {
//         mpp[v[i]]++;

//         //checking if v[i] is
//         // the majority element:
//         if (mpp[v[i]] == mini) {
//             ls.push_back(v[i]);
//         }
//         if (ls.size() == 2) break;
//     }

//     return ls;
// }

// int main()
// {
//     vector<int> arr = {11, 33, 33, 11, 33, 11};
//     vector<int> ans = majorityElement(arr);
//     cout << "The majority elements are: ";
//     for (auto it : ans)
//         cout << it << " ";
//     cout << "\n";
//     return 0;
// }







