#include "file_header.h"

error_t closefile(FILE *ptr)
{
    if(ptr==NULL)
        return FILE_NOT_FOUND;
    
    fclose(ptr);
    return SUCCESS;
}