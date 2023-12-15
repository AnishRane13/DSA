#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int maxElement = INT_MIN;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        maxElement = max(maxElement, arr[i]);
    }

    // Precompute
    int hash[maxElement + 1] = {0};
    for (int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while (q--) {
        int number;
        cin >> number;

        // Fetch
        if (number >= 0 && number <= maxElement) {
            cout <<number <<" is present in the array: "<< hash[number] <<" times."<< endl;
        } else {
            cout << "Number out of range." << endl;
        }
    }

    return 0;
}
