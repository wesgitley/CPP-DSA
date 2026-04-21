#include <iostream>
#include <iomanip>

int main() {
    double x = 0.0;
    double y = 20.0;

    do {
        y -= 4;
        x += 2.0 / y;
    } while (!(y < 6));

    std::cout << std::fixed << std::setprecision(5);
    std::cout << "x = " << x << std::endl;

    return 0;
}



