#include<stdio.h>
#include "unity.h"

#include "calculator.h"


void setUp(){}
void tearDown(){}

void test_div(void)
{
    TEST_ASSERT_EQUAL(0,divide(10,0));
    TEST_ASSERT_EQUAL(7,divide(56,8));
    TEST_ASSERT_EQUAL(1,divide(13,13));
}
int main()
{

    //Used to initiate the Unit Test Framework
    UNITY_BEGIN();

    //Run test Function
    RUN_TEST(test_div);
    RUN_TEST(test_div); 
    //Closed the Unity Test Framework
    return UNITY_END();
}