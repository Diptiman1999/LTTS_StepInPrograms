#include<stdio.h>

int main() {

    // int val=100; 
    // int *ptr;
    // ptr=&val;         //Make a note of value
    // printf("Integer Operation\nptr value is %p \n",ptr);
    // printf("sizeof %d \n",sizeof(ptr));
    // int *p1, *p2, t;
    // p1 = ptr + 5;
    // printf("p1 value is %p \n",p1);
    // p2 = ptr - 10;
    // printf("p2 value is %p \n",p2);
    // ++p1;
    // printf("++p1 value is %p \n",p1);
    // --p2;
    // printf("--p2 value is %p \n",p2);
    // t = p1 - p2;
    // printf("t=p1-p2 value is %d \n\n",t);
    

    
    // double v=100.0; 
    // double *ptrd;
    // ptrd=&v;         //Make a note of value
    // printf("Double Operation\nptrd value is %p \n",ptrd);
    // printf("sizeof %d \n",sizeof(ptrd));
    // double *pd1, *pd2, td;
    // pd1 = ptrd + 5;
    // printf("pd1 value is %p \n",pd1);
    // pd2 = ptrd - 10;
    // printf("pd2 value is %p \n",pd2);
    // ++pd1;
    // printf("++pd1 value is %p \n",pd1);
    // --pd2;
    // printf("--pd2 value is %p \n",pd2);
    // td = pd1 - pd2;
    // printf("td=pd1-pd2 value is %lf \n\n",td);

    char a=(char)97; 
    char *ptrc;
    ptrc=&a;         //Make a note of value
    printf("\nChar Operation\nptrc value is %p \n",ptrc);
    printf("sizeof %d \n",sizeof(ptrc));
    char *pc1, *pc2;
    int tc;
    pc1 = ptrc + 5;
    printf("pc1 value is %p \n",pc1);
    pc2 = ptrc - 10;
    printf("pc2 value is %p \n",pc2);
    ++pc1;
    printf("++pc1 value is %p \n",pc1);
    --pc2;
    printf("--pc2 value is %p \n",pc2);
    tc = pc1 - pc2;
    printf("td=pd1-pd2 value is %d \n\n",tc);


    return 0;
}
