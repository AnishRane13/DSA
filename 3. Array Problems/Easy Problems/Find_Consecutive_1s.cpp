
#include <bits/stdc++.h>
using namespace std;

int consecutive1s(int arr[],int n){
    int maxi = 0;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
      if(arr[i] == 1 ){
        counter++;
        maxi = max(maxi,counter);
      }else
      {
        counter = 0;
      }
    }
    return maxi;
}

int main(){
int n= 15;
int arr[] = {1,1,0,1,1,1,0,1,1,0,1,1,1,1,1};
cout<<consecutive1s(arr,n);

    return 0;
}



