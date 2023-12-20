
#include <bits/stdc++.h>
using namespace std;

int moveZeros(int arr[],int n, int num){
   for (int i = 0; i < n; i++)
   {
        if (arr[i]==num)
        {
            return i;
        }
   }
   return -1;
}

int main(){
int n = 7;
int num = 5; // Number to find
int arr[n] = {1,4,5,7,1,3};
cout<<moveZeros(arr,n,num);

    return 0;
}



