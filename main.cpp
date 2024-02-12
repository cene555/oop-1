#include <iostream>
#include "rectangle.hpp"
#include <cmath>

Rectangle::Rectangle(double newX1, double newY1, double newX2, double newY2){
        x1 = newX1;
        y1 = newY1;
        x2 = newX2;
        y2 = newY2;
    }

double Rectangle::perimeter(){
    return abs(x1 - x2) * 2 + abs(y1 - y2) * 2;
}

double Rectangle::square(){
        return abs(x1 - x2) * abs(y1 - y2);
} 

int main(){
    Rectangle circle1;
    std::cout << "perimeter: " << circle1.perimeter() << " square: " << circle1.square() << std::endl;

    Rectangle circle2(5, 10, 15, 15);
    std::cout << "perimeter: " << circle2.perimeter() << " square: " << circle2.square() << std::endl;
}
