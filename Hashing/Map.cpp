#include<bits/stdc++.h>
using namespace std;

int main(){
   
   int n;
   cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //Precompute
    unordered_map<int,int>mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i]]++;
    }
    

    int q;
    cin>>q;
    while (q--)
    {
        int number;
        cin>>number;

        //fetch
        cout<<number<<" is present "<<mpp[number]<<" times"<<endl;
    }
    
    return 0;
}
