#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle{
public:
    Rectangle() = default;
    Rectangle(double newX1, double newY1, double newX2, double newY2);
    double perimeter();
    double square();
private:
    double x1{0.0};
    double y1{0.0};
    double x2{1.0};
    double y2{1.0};
};

#endif
