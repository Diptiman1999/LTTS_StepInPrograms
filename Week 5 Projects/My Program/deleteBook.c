#include "library_header.h"

error_t deleteBooks()
{
    error_t val;
    int found = 0;
    int bookDelete = 0;
    sFileHeader fileHeaderInfo = {0};
    char bookName[MAX_BOOK_NAME] = {0};
    s_BooksInfo addBookInfoInDataBase = {0};
    FILE *fp = NULL;
    FILE *tmpFp = NULL;
    int status = 0;
    error_t head_status=headMessage("Delete Books Details");
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
    printf("\n\t\t\tEnter Book ID NO. for delete:");
    scanf("%d",&bookDelete);
    while (fread (&addBookInfoInDataBase, sizeof(addBookInfoInDataBase), 1, fp))
    {
        if(addBookInfoInDataBase.books_id != bookDelete)
        {
            fwrite(&addBookInfoInDataBase,sizeof(addBookInfoInDataBase), 1, tmpFp);
        }
        else
        {
            found = 1;
        }
    }
    if(found)
    {
        printf("\n\t\t\tRecord deleted successfully.....");
        val= SUCCESS;
    }
    else    
    {
        printf("\n\t\t\tRecord not found");
        val= FAILURE;
    }
    
    fclose(fp);
    fclose(tmpFp);
    remove(FILE_NAME);
    rename("tmp.bin",FILE_NAME);
    return val;
}