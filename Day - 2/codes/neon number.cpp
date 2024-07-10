#include <iostream>

bool isNeonNumber(int num) {
    int square = num * num;
    int sumOfDigits = 0;

    while (square > 0) {
        sumOfDigits += square % 10;
        square /= 10;
    }

    return (sumOfDigits == num);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isNeonNumber(num)) {
        std::cout << num << " is a neon number." << std::endl;
    } else {
        std::cout << num << " is not a neon number." << std::endl;
    }

    return 0;
}
