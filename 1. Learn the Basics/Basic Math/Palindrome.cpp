#include<iostream>
using namespace std;

int main() {
    int number;
    cin >> number;

    int originalNumber = number;  // Store the original value

    int reverse = 0;

    while (number > 0) {
        int n = number % 10;
        number = number / 10;
        reverse = (reverse * 10) + n;
    }


    if (originalNumber == reverse) {  // Compare with the original value
        cout << "Palindrome" << endl;
    } else {
        cout << "Not Palindrome" << endl;
    }

    return 0;
}
