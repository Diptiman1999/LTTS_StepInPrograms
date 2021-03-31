#include "file_header.h"

error_t displaydata(info_t *data,const int* data_count)
{
    if(data==NULL)
    {
        return FAILURE;
    }
    printf("\nDisplaying The Data\n");
    for (int i = 0; i < *data_count; i++) {
        printf("Name = %s\n",(data+i)->name);
        printf("EmailID = %s\n",(data+i)->email_id);
        printf("Github Link = %s\n",(data+i)->git_link);
        printf("\n");
    }
    return SUCCESS;

}