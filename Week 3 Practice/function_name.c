#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}
int main()
{
    int (*func)(int ,int)=NULL;
    printf("Address of function using sum - %p \n",sum);
    printf("Address of function using &sum - %p \n",&sum);

    func=sum;
    printf("Address of function using func=sum - %p \n",func);

    func=NULL;
    func=&sum;
    printf("Address of function using fun=&sum - %p \n",func);

    

}