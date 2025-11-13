#ifndef TEST_SRC_FIGURES_IMPLS_RECTANGLE_H_
#define TEST_SRC_FIGURES_IMPLS_RECTANGLE_H_

#include "../abstract_figure.h"
class Rectangle : public Figure {
 public:
  Rectangle(const std::string &name, int width, int height,  int x, int y,const std::string &color);

  std::string Info() override;
  double getPerimeter() override;
  double getArea() override;

 private:
  int _width;
  int _height;

};

#endif //TEST_SRC_FIGURES_IMPLS_RECTANGLE_H_
