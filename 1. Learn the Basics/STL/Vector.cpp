#include <bits/stdc++.h>
using namespace std;

int main(){
    
    vector<int> v;
    v.push_back(3);
    v.push_back(2);
    v.push_back(1);

    v.erase(v.begin()+1, v.begin()+5); // Deleting multiple elements
    for(auto it: v){
        cout<<it<<" ";
    }

 
    return 0;
}
