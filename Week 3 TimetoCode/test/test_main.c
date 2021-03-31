#include "unity.h"
#include"file_header.h"

void setUp(){}
void tearDown(){}

void test_openfile(void)
{
    TEST_ASSERT_EQUAL(SUCCESS,openfile(fopen("data.csv","r")));
}
void test_closefile(void)
{
    FILE *ptr=fopen("data.csv","r");
    TEST_ASSERT_EQUAL(SUCCESS,closefile(ptr));

}
void test_storedata(void)
{
    FILE *fptr=fopen("data.csv","r");
    int data_count;
    info_t *data;
    data=(info_t*)(calloc(5,sizeof(info_t)));
    TEST_ASSERT_EQUAL(SUCCESS,storedata(fptr,data,&data_count));
    fclose(fptr);
}
int test_main()
{

    //Used to initiate the Unit Test Framework
    UNITY_BEGIN();

    //Run test Function
    RUN_TEST(test_openfile); 
    RUN_TEST(test_storedata); 
    RUN_TEST(test_closefile);
  
    //Closed the Unity Test Framework
    return UNITY_END();
    
    
}