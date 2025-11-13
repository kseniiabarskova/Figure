#include <iostream>

#include <vector>
#include "src/figures/abstract_figure.h"
#include "src/figures/impls/rectangle.h"
#include "src/figures/impls/circle.h"

void test();

int main() {
  std::vector<Figure *> figures;

  figures.push_back( new Rectangle("Rectangle1", 10, 15, 0, 0, "red"));
  figures.push_back( new Rectangle("Rectangle2", 9, 26, 2, 15, "green"));
  figures.push_back( new Rectangle("Rectangle3", 65, 12, 4, 4, "blue"));
  figures.push_back(new Circle("Circle1", 10, 10, 5, "yellow"));
  figures.push_back(new Circle("Circle2", 20, 30, 8, "purple"));

  for (int i = 0; i < figures.size(); ++i) {
    std::cout << "#" << (i+1) << "\t" << figures[i]->Info() << std::endl;
  }
  return 0;
}

void test(){

  std::cout << "Hello, World!" << std::endl;
}
