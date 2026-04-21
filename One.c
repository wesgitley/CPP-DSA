#include <iostream>

int main() {

    const long long SECONDS_PER_DAY = 24LL * 60 * 60;  // Constant for seconds in one day


    std::cout << "Enter the number of days: ";
    long long days;
    std::cin >> days;

    long long total_seconds = days * SECONDS_PER_DAY;

    std::cout << days << " day(s) = " << total_seconds << " seconds\n";

    return 0;
}
