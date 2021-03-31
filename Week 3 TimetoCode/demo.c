#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include "temp.h"
info_t* arr;
int read_arr(char *file_name)
{
   arr=calloc(5,sizeof(info_t));
   FILE *ft=fopen(file_name,"r");
    if(!ft)
    {
        printf("error");
        return 0;
    } 
    char buff[1024];
    
    int field_count=0;
    int i=0;
    while(fgets(buff,1024,ft))
    {
        field_count=0;
        row_count++;

        char * token = strtok(buff, ",");
        int j=0;
        while( token != NULL ) {
        if(j==0)
        {
            strcpy((arr+i)->name,token);
        }
        if(j==1)
        {
           strcpy((arr+i)->mail_id,token);
           
        }
        if(j==2)
        {   strcpy((arr+i)->git_link,token);
          
        }
        j++;
        //printf("%s",token);
        token = strtok(NULL, ",");
        }

      
        
        i=i+1;
        
      }
   
   
    fclose(ft);
   
    

   return 1;
   
    
}