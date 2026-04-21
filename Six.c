#include <iostream>
#include <iomanip>

int main() {
    const int SIZE = 5;
    double numbers[SIZE];
    double sum = 0.0;

    std::cout << "Enter " << SIZE << " numbers:\n";
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "Value " << (i + 1) << ": ";
        std::cin >> numbers[i];
        sum += numbers[i];
    }

    double average = sum / SIZE;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\n  The average of the entered numbers is: " << average << std::endl;

    return 0;
}
