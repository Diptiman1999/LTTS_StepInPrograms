#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int (*func)(int ,int)=NULL;
    func=sum;//func=&sum;
    
    int result1=func(10,30);
    printf("result using func(a,b)= %d\n",result1);
    

    int result2=(*func)(10,30);
    printf("result using func(a,b)= %d\n",result2);
}