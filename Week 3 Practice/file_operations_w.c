#include<stdio.h>
int main()
{
    FILE *ptr=fopen("trial.txt","w");
    if(ptr==NULL)
    {
        printf("Not able to open the file\n");
        fclose(ptr);
        return 0;
    }
    fprintf(ptr,"It is working properly.\nCould have written more.\n Good Bye.\n");
    return 0;
}