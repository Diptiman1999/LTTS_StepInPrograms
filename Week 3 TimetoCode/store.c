#include "file_header.h"

error_t storedata( FILE *ptr, info_t *data,int *row_count)
{
    if(!openfile(ptr))
    {
        printf("\nNot Able to\n");
        return FAILURE;
    }

    char buffer[1024];
    int row=0;

    while(fgets(buffer,1024,ptr))
    {
       // printf("\nBuffer-%s\n",buffer);
        char *token=strtok(buffer,",");
        int column=0;
        while(token!=NULL)
        {
            if(column==0)
            {
                strcpy((data+row)->name,token);
            }
            if(column==1)
            {
                strcpy((data+row)->email_id,token);
            }
            if(column==2)
            {
                strcpy((data+row)->git_link,token);
            }
            column+=1;
        
            token = strtok(NULL, ",");
        }

        row++;
    
    }
    *row_count=row;
    
    return SUCCESS;

}