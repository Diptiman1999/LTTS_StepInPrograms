
#include<stdio.h>

const int ga=10;
int main() {
  
    // const int a=10;
    // printf("a=%d\n",a);
    // //a++; is wrong because a is constant variable

    // int *p=&a;
    // *p=5;
    // printf("\n(*p)++ changed a=%d\n",a);

    // p=&ga;
    // printf("\nga=%d\n",a);
    // *p=90;
    // printf("*p=90 changed ga=%d\n",a);

    // Pointer to a constant integer
    const int a1 = 10;
    const int* ptr1 = &a1;  
   // *ptr1 = 5; // wrong
    ptr1++;    // right 
    int *temp=&a1;
    *temp=100;
    printf("a1=%d\n",a1);

    // // Constant Pointer to an integer
    // int a2 = 10;
    // int *const ptr2 = &a2;  
    // *ptr2 = 5; // right
    // //ptr2++;    // wrong as it ptr2 is constant pointer it can't change to other location

    // // Constant Pointer to a constant integer
    // int a2 = 10;
    // const int *const ptr2 = &a2;  
    // *ptr2 = 5; // wrong
    // ptr2++;    // wrong


  return 0;
}
