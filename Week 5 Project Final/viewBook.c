#include "library_header.h"

error_t viewBooks(const char* FILE_NAME)
{
    int found = 0;
    char bookName[MAX_BOOK_NAME] = {0};
    
    s_BooksInfo Books = {0};
    
    FILE *fp = NULL;
    int status = 0;
    
    unsigned int countBook = 1;

    fp = fopen(FILE_NAME,"rb");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        return FILE_NOT_FOUND;
    }
    if (fseek(fp,FILE_HEADER_SIZE,SEEK_SET) != 0)
    {
        fclose(fp);
        printf("Facing issue while reading file\n");
        return FILE_NOT_FOUND;
    }
    while (fread (&Books, sizeof(Books), 1, fp))
    {
        printf("\n----------------------------------------------------");
        printf("\nBook Count = %d",countBook);
        printf("\nBook id = %u",Books.books_id);
        printf("\nBook name = %s",Books.bookName);
        printf("\nBook authorName = %s",Books.authorName);
        printf("\nStudent Name = %s",Books.studentName);
        printf("\nBook issue date(day/month/year) =  (%d/%d/%d)",Books.bookIssueDate.dd,Books.bookIssueDate.mm, Books.bookIssueDate.yyyy);
        printf("\nBook return date(day/month/year) =  (%d/%d/%d)",Books.returnDate.dd,Books.returnDate.mm, Books.returnDate.yyyy);
        printf("\n----------------------------------------------------");
    
        found = 1;
        ++countBook;
    }
    fclose(fp);
    if(!found)
    {
        printf("\nNo Record\n");
        return FAILURE;
    }
    printf("\nPress any key to go to main menu.....");
    fflush(stdin);
    getchar();
    return SUCCESS;
}