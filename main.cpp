#include <iostream>
#include "rectangle.hpp"
#include <cmath>

int main(){
    Rectangle circle1;
    std::cout << "perimeter: " << circle1.perimeter() << " square: " << circle1.square() << std::endl;

    Rectangle circle2(5, 10, 15, 15);
    std::cout << "perimeter: " << circle2.perimeter() << " square: " << circle2.square() << std::endl;
}
