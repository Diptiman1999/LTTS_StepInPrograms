#include "file_header.h"

error_t openfile(FILE *ptr)
{
    if(ptr==NULL)
        return FILE_NOT_FOUND;
    
    return SUCCESS;
}