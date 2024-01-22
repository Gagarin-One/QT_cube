#ifndef CALC_H
#define CALC_H

#include <stdexcept>

///  класс куб
class Cube{
    float a;        // сторона куба

public:

    Cube(); // конструктор (инициализирует поля)
    Cube(float a1);    // конструктор с параметрами

    float getA() const;
    void setA(float newA);

    float v_kub(); // объёма куба
    float s_kub(); // площадь боковой поверхности куба
};

#endif
