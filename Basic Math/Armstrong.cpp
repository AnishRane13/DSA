#include <iostream>
#include <cmath>

bool isArmstrong(int num) {
    int digits = 0;
    int temp = num;
    int sum = 0;

    // count number of digits
    while (temp > 0) {
        temp = temp / 10;
        digits++;
    }

    temp = num;

    // calculate the sum of cubes of each digit
    while (temp > 0) {
        int remainder = temp % 10;
        sum += pow(remainder, digits);
        temp = temp / 10;
    }

    // check if number is Armstrong
    if (sum == num)
        return true;
    else
        return false;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isArmstrong(num))
        std::cout << num << " is an Armstrong number." << std::endl;
    else
        std::cout << num << " is not an Armstrong number." << std::endl;

    return 0;
}