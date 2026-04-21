#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    const double PI = 3.14159265358979323846;


    std::cout << "Enter the radius of the sphere: ";
    double radius;
    std::cin >> radius;


    double r_cubed = std::pow(radius, 3.0);

    double volume = (4.0 / 3.0) * PI * r_cubed;

    std::cout << std::fixed << std::setprecision(3);
    std::cout << "Volume of sphere with radius " << radius << " is: " << volume << std::endl;

    return 0;
}
