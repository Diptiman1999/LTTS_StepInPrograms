#include<stdio.h>
int main()
{
    FILE *ptr=fopen("trial.txt","r");
    if(ptr==NULL)
    {
        printf("Not able to open the file\n");
        fclose(ptr);
        return 0;
    }
    char arr[1024];int i=0;
    while(fgets(arr,1024,ptr)!=NULL)
    {
        printf("%d->%s\n",i,arr);
        i+=1;
    }
    printf("%d->%s\n",i,arr);
    return 0;
}