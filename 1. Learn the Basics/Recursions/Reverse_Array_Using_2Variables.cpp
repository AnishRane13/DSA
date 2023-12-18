#include<bits/stdc++.h>
using namespace std;

void rev(int f, int r,int arr[]){
    if (f >= r)
    {
        return;
    }
    swap(arr[f],arr[r]);
    rev(f+1,r-1,arr);
}

int main(){

int arr[] = {5,4,3,2,1};
int size = sizeof(arr)/sizeof(arr[0]);
rev(0,size-1,arr);
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}


    return 0;
}