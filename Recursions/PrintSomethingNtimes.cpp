#include <bits/stdc++.h>
using namespace std;

int counter = 0;
void print(){

if (counter ==4)   // Base Condition
{                 // If counter = 0, function will
    return;        // return nothing.
}
cout<<"Printed"<<endl;
counter++;
print();
}

int main(){

print();

    return 0;
}
