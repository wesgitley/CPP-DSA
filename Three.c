#include <iostream>

double squareArea(double side);
double squarePerimeter(double side);

int main() {
    double side;

    std::cout << "Enter the side length of the square: ";
    std::cin >> side;

    double area = squareArea(side);
    double perimeter = squarePerimeter(side);

    std::cout << "Area of the square: " << area << std::endl;
    std::cout << "Perimeter of the square: " << perimeter << std::endl;

    return 0;
}

double squareArea(double side) {
    return side * side;
}

double squarePerimeter(double side) {
    return 4 * side;
}
