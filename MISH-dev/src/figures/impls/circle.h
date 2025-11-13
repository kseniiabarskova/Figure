
#ifndef TEST_CIRCLE_H
#define TEST_CIRCLE_H

#include "../abstract_figure.h"
class Circle : public Figure{
public:
    Circle (const std::string &name,int x, int y, int radius,const std::string &color);
    std::string Info() override;
    double  getPerimeter() override;
    double getArea() override;
private:
    int radius;

};


#endif //TEST_CIRCLE_H
