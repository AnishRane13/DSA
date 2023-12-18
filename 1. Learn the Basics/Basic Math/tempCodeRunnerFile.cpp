#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
 
 int number;
 cin>>number;

 vector<int> ls;
for (int i = 0; i*i <= number; i++)
{
   if (number%i==0)
   {
    ls.push_back(i);
    if ((number/i)!=i)
    {
        ls.push_back(number/i);
    }
   }
}

sort(ls.begin(),ls.end());
for(auto it: ls){
    cout<<it<<" ";
}

    return 0;
}