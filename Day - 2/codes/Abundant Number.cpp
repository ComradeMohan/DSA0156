#include <iostream>

bool isAbundantNumber(int num) {
    int sumOfDivisors = 0;

    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            sumOfDivisors += i;
        }
    }

    return (sumOfDivisors > num);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (isAbundantNumber(num)) {
        std::cout << num << " 
		is an abundant number." << std::endl;
    } else {
        std::cout << num << " is not an abundant number." << std::endl;
    }

    return 0;
}
