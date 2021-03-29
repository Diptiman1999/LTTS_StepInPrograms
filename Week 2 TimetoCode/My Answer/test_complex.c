#include "complex_h.h"
#include "unity.h"



void setUp(){}
void tearDown(){}

void test_arithmetic(void)
{

    // complex_t sum_ans=sum(num1,num2);
    // complex_t mul_ans=multiply(num1,num2);
    
    // complex_t div_ans=divide(num1,num2);
    //TEST_ASSERT_EQUAL_PTR_MESSAGE(0,sum(10,0));
    //TEST_ASSERT_EQUAL_PTR_MESSAGE(7,difference(56,8));
    // complex_t num1={20,30};
    // complex_t num2={10,15};
    // complex_t* ans;
    // ans->real=-250;
    // ans->complex=600;
    // TEST_ASSERT_EQUAL_PTR_MESSAGE(ans,multiply(num1,num2));
    //TEST_ASSERT_EQUAL_PTR_MESSAGE(1,divide(13,13));

}

int main()
{
    
    complex_t num1={20,30};
    complex_t num2={10,15};

    complex_t diff_ans=difference(num1,num2);
    
    complex_t sum_ans=sum(num1,num2);
    complex_t mul_ans=multiply(num1,num2);
    
    complex_t div_ans=divide(num1,num2);

    printf("Difference is %f %f\n",diff_ans.real,diff_ans.complex);
    printf("Sum is %f %f\n",sum_ans.real,sum_ans.complex);
    printf("Multiply is %f %f\n",mul_ans.real,mul_ans.complex);
    printf("Divide is %f %f\n",div_ans.real,div_ans.complex);
    
        
    // //Used to initiate the Unit Test Framework
    // UNITY_BEGIN();

    // //Run test Function
    // RUN_TEST(test_arithmetic);
    // RUN_TEST(test_arithmetic); 
    
    // //Closed the Unity Test Framework
    // return UNITY_END();
    
    
}