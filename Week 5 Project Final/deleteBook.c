#include "library_header.h"

error_t deleteBooks(const char *FILE_NAME)
{

    error_t val;
    error_t found_status = FAILURE;
    int bookDelete = 0;
    
    sFileHeader fileHeaderInfo = {0};
    s_BooksInfo Books = {0};
    
    FILE *fp = NULL; ///Permanent pointer
    FILE *tmpFp = NULL;///Temporary pointer
    
    fp = fopen(FILE_NAME,"rb");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        return FILE_NOT_FOUND;
    }
    tmpFp = fopen("tmp.bin","wb");
    if(tmpFp == NULL)
    {
        fclose(fp);
        printf("File is not opened\n");
        return FILE_NOT_FOUND;
    }

    fread (&fileHeaderInfo,FILE_HEADER_SIZE, 1, fp);
    fwrite(&fileHeaderInfo,FILE_HEADER_SIZE, 1, tmpFp);

    printf("\nEnter Book ID NO. for delete:");
    scanf("%d",&bookDelete);
    while (fread (&Books, sizeof(Books), 1, fp))
    {
        if(Books.books_id != bookDelete)
        {
            fwrite(&Books,sizeof(Books), 1, tmpFp);
        }
        else
        {
            found_status = SUCCESS;
        }
    }
    if(found_status)
    {
        printf("\nRecord deleted successfully.....");
        val= SUCCESS;
    }
    else    
    {
        printf("\nRecord not found");
        val= FAILURE;
    }
    
    fclose(fp);
    fclose(tmpFp);
    remove(FILE_NAME);
    rename("tmp.bin",FILE_NAME);
    return val;
}