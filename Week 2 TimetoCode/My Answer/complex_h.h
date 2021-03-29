/**
 * @file complex_h.h
 * @author Diptiman (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-03-21
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "complex.h"
#ifndef _COMPLEXH_
#define _COMPLEXH_

/**
 * @brief 
 * 
 * @param num1 
 * @param num2 
 * @return complex_t 
 */
complex_t sum(complex_t num1,complex_t num2);

/**
 * @brief 
 * 
 * @param num1 
 * @param num2 
 * @return complex_t 
 */
complex_t difference(complex_t num1,complex_t num2);

/**
 * @brief 
 * 
 * @param num1 
 * @param num2 
 * @return complex_t 
 */
complex_t multiply(complex_t num1,complex_t num2);

/**
 * @brief 
 * 
 * @param num1 
 * @param num2 
 * @return complex_t 
 */
complex_t divide(complex_t num1,complex_t num2);
#endif