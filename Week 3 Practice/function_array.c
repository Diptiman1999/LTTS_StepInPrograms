#include<stdio.h>

int sum(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int product(int a,int b)
{
    return a*b;
}
int divide(int a,int b)
{
    return a/b;
}
int main()
{
    int (*func[4])(int ,int);

    func[0]=divide;
    func[1]=product;
    func[2]=sub;
    func[3]=sum;

    int i=0;
    for(i=0;i<4;i++)
    {
        printf("Results are %d\n",func[i](20,10)); //(*func[i])(a,b)
    }
    return 0;
}