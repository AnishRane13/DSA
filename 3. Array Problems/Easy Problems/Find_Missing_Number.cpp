// Find the missing number in an array
// Problem Statement: Given an integer N and an array of size N-1 containing
//  N-1 numbers between 1 to N. Find the number(between 1 to N), 
//  that is not present in the given array.

// Input Format: N = 5, array[] = {1,2,4,5}
// Result: 3
// Explanation: In the given array, number 3 is missing. So, 3 is the answer.



//Brute Force-----------------------------------
// 
// #include <bits/stdc++.h>
// using namespace std;

// int missingNumber(int arr[],int N){
//     for(int i=0; i<=N-1;i++){
//         if (arr[i] != i+1)
//         {
//             return i+1;
//         }
//     }
//     return -1;
// }

// int main(){
// int N = 5;

// int arr[] = {1,2,4,5};
// cout<<missingNumber(arr,N);

//     return 0;
// }


//Better ----------------------------------
//Hashing
// #include <bits/stdc++.h>
// using namespace std;

// int missingNumber(int arr[],int N){
//   int hash[N+1] = {0};

//      // storing the frequencies:
//   for (int i = 0; i < N-1; i++)
//   {
//     hash[arr[i]]++;
//   }

//   for (int i = 1; i <= N; i++)
//   {
//     if (hash[i]==0)
//     {
//         return i;
//     }
//   }
//     return -1;
// }

// int main(){
// int N = 5;

// int arr[] = {1,2,4,5};
// cout<<missingNumber(arr,N);

//     return 0;
// }
// Time complexity = O(2N);



//Optimal 1-------------------------
//Sum of all elements and then by subtracting
// #include <bits/stdc++.h>
// using namespace std;

// int missingNumber(int arr[],int N){
//     int sum = (N*(N+1))/2;
//     int value = 0;

//     for (int i = 0; i < N-1; i++)
//     {
//         value += arr[i];
//     }
//     return (sum - value);
// }

// int main(){
// int N = 5;

// int arr[] = {1,2,4,5};
// cout<<missingNumber(arr,N);

//     return 0;
// }
// Time Complexity = O(N);






//Optimal 2
//Xor --- a^a = 0; a^b = 1;
#include <bits/stdc++.h>
using namespace std;

int missingNumber(int arr[],int N){
  int hash[N+1] = {0};

     // storing the frequencies:
  for (int i = 0; i < N-1; i++)
  {
    hash[arr[i]]++;
  }

  for (int i = 1; i <= N; i++)
  {
    if (hash[i]==0)
    {
        return i;
    }
  }
    return -1;
}

int main(){
int N = 5;

int arr[] = {1,2,4,5};
cout<<missingNumber(arr,N);

    return 0;
}