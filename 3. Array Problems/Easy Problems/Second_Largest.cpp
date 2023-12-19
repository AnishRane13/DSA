
#include <bits/stdc++.h>
using namespace std;

// vector<int> secondLargest(int n, vector<int> a) {
//     // Write your code here.
//     int largest = a[0];
//     int slargest = -1;

//     for(int i=1;i<n;i++){
//         if(a[i]>largest){
//             slargest = largest;
//             largest = a[i];
//         }
//         else if(a[i]<largest && a[i]>slargest){
//             slargest = a[i];
//         }
//     }
//     return slargest;
// }

int secondLargest(int arr[],int n){
    int largest = arr[0];
    int slargest = 1;

    for (int i = 0; i < n; i++)
    {
        if (arr[i]>largest)
        {
            slargest = largest;
            largest = arr[i];
        } else if(arr[i]<largest && arr[i]>slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}

int main(){
int n = 6;
int arr[n] = {3,4,5,4,1,2};
cout<<"Second Largest element is: "<<secondLargest(arr,n);

    return 0;
}