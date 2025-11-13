#include "cmath"
#include "circle.h"
Circle::Circle(const std::string &name, int x, int y, int radius,const std::string &color) : Figure(name,x,y,color) {
    this-> radius = radius;
}
std::string Circle::Info() {
    return getName() + " at (" + std::to_string(getX()) + "," + std::to_string(getY()) + "), color: " + getColor() + " radius = " + std::to_string(radius);
}
double Circle::getPerimeter() {
    return M_PI*2*radius;
}
double Circle::getArea() {
    return M_PI*radius*radius;
}