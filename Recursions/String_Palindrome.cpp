#include<bits/stdc++.h>
using namespace std;

bool rev(int i, string s, int size) {
    // Base case: if i exceeds or equals half of the string length, it's a palindrome
    if (i >= size / 2) {
        return true;
    }
    
    // Recursive case: check if the characters at symmetric positions are equal
    if (s[i] != s[size - i - 1]) {
        return false;
    }
    
    // Recursive call: check the next pair of characters
    return rev(i + 1, s, size);
}

int main() {
    string s = "MADAM";
    int size = s.size();
    
    // Output the result of the palindrome check
    cout << (rev(0, s, size) ? "Palindrome" : "Not Palindrome");

    return 0;
}
