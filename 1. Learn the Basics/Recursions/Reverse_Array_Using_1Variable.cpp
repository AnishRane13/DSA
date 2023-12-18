#include<bits/stdc++.h>
using namespace std;

void rev(int i, int size,int arr[]){
    if (i >= size/2)
    {
        return;
    }
    swap(arr[i],arr[size-i-1]);
    rev(i+1,size,arr);
}

int main(){

int arr[] = {5,4,3,2,1};
int size = sizeof(arr)/sizeof(arr[0]);
rev(0,size,arr);
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}


    return 0;
}