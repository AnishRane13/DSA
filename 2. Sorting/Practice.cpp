#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n)
{
    // for (int i = 0; i < n-1; i++)
    // {
    //     for (int j = i; j < ; i++)
    //     {
    //         /* code */
    //     }
        
    // }
    
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubble_sort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
