#include "rectangle.h"
#include <cmath>

Rectangle::Rectangle(const std::string &name, int width, int height, int x, int y,const std::string &color) :Figure(name,x,y,color) {
  _width = width;
  _height = height;

}

std::string Rectangle::Info() {
  return getName() + " at (" + std::to_string(getX()) + "," + std::to_string(getY()) + "), color: " + getColor() + " width = " + std::to_string(_width) + " height = " + std::to_string(_height);
}

double Rectangle::getPerimeter() {
  return (_width+_height)*2;
}

double Rectangle::getArea() {
  return _width*_height;
}

