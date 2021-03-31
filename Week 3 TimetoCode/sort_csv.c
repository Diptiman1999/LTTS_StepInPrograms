#include "file_header.h"
int comparator(const void* p, const void* q)
{
    return strcmp(((info_t*)p)->name,
                  ((info_t*)q)->name);
}
error_t sortdata(info_t *data,int* row)
{
    if(data==NULL)
    {
        return FAILURE;
    }
    qsort(data, *row, sizeof(info_t), comparator);
    printf("Sorted\n");
    return SUCCESS;

}