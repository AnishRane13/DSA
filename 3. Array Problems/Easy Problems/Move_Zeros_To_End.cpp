
#include <bits/stdc++.h>
using namespace std;

void moveZeros(int arr[],int n){
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]==0)
        {
            j = i;
            break;
        }
    }

    for (int i = j+1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main(){
int n = 7;
int d = 2;
int arr[n] = {1,0,3,0,0,6,7};
moveZeros(arr,n);

for (int i = 0; i < n; i++)
{
    cout<<arr[i]<<" ";
}
    return 0;
}


