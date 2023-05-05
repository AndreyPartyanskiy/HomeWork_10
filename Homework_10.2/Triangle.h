#pragma once
#include "Figure.h"

class Triangle : public Figure
{
protected:

    int a;
    int b;
    int c; 
    int A; 
    int B; 
    int C;

public:

    Triangle(int a, int b, int c, int A, int B, int C);

    void print_info() override;
};
