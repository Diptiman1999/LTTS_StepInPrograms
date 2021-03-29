#include "complex.h"

complex_t multiply(complex_t num1,complex_t num2)
{
    complex_t temp;

    temp.real = num1.real*num2.real - num1.complex*num2.complex;
    temp.complex= num1.complex*num2.real + num1.real*num2.complex;
    return temp;
}