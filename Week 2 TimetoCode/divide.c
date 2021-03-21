#include "complex.h"

complex_t divide(complex_t num1,complex_t num2)
{
    complex_t temp;
    if(num2.real==0 && num2.complex==0)
    {
        temp.real=0;
        temp.complex=0;
        return temp;
    }
    temp.real = (num1.real * num2.real + num1.complex * num2.complex) / ( num2.real * num2.real + num2.complex * num2.complex);
    temp.complex = (num1.complex* num2.real - num1.real * num2.complex) / (num2.real * num2.real + num2.complex * num2.complex);
    return temp;
}