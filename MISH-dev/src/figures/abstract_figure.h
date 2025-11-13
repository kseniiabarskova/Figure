#ifndef TEST_SRC_FIGURES_ABSTRACT_FIGURE_H_
#define TEST_SRC_FIGURES_ABSTRACT_FIGURE_H_

#include <string>


class Figure {
public:
    Figure (const std::string &name,const int x,const int y,const std::string &color)
    {
        this->name = name;
        this->x = x;
        this->y = y;
        this->color = color;

    }
    virtual std::string Info() = 0;
    virtual double getPerimeter() = 0;
    virtual double  getArea() = 0;

    std::string getName()
    {
        return name;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
    std::string getColor()
    {
        return color;
    }


private:
    std::string name;
    int x;
    int y;
    std::string color;
};
#endif


