#include "complex.h"

complex_t difference(complex_t num1,complex_t num2)
{
    complex_t temp;
    temp.real = num1.real-num2.real;
    temp.complex = num1.complex-num2.complex;
    return temp;
}