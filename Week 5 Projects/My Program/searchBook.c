#include "library_header.h"


error_t searchBooks()
{
    error_t found_status = SUCCESS;
    char bookName[MAX_BOOK_NAME] = {0};
    s_BooksInfo addBookInfoInDataBase = {0};
    FILE *fp = NULL;
    int status = 0;
    fp = fopen(FILE_NAME,"rb");
    if(fp == NULL)
    {
        printf("\n\t\t\tFile is not opened\n");
        return FILE_NOT_FOUND;
    }
    error_t head_status=headMessage("SEARCH BOOKS");
    //put the control on books detail
    if (fseek(fp,FILE_HEADER_SIZE,SEEK_SET) != 0)
    {
        fclose(fp);
        printf("\n\t\t\tFacing issue while reading file\n");
        return FAILURE;
    }
    printf("\n\n\t\t\tEnter Book Name to search:");
    fflush(stdin);
    fgets(bookName,MAX_BOOK_NAME,stdin);
    while (fread (&addBookInfoInDataBase, sizeof(addBookInfoInDataBase), 1, fp))
    {
        if(!strcmp(addBookInfoInDataBase.bookName, bookName))
        {
            found_status = SUCCESS;
            break;
        }
    }
    if(found_status)
    {
        printf("\n\t\t\tBook id = %u\n",addBookInfoInDataBase.books_id);
        printf("\t\t\tBook name = %s",addBookInfoInDataBase.bookName);
        printf("\t\t\tBook authorName = %s",addBookInfoInDataBase.authorName);
        printf("\t\t\tBook issue date(day/month/year) =  (%d/%d/%d)",addBookInfoInDataBase.bookIssueDate.dd,
               addBookInfoInDataBase.bookIssueDate.mm, addBookInfoInDataBase.bookIssueDate.yyyy);
        //return SUCCESS;
    }
    else
    {
        printf("\n\t\t\tNo Record");
        found_status= FAILURE;
    }
    fclose(fp);
    printf("\n\n\n\t\t\tPress any key to go to main menu.....");
    getchar();
    return found_status;
}