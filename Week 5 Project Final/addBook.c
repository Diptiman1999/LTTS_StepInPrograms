#include "library_header.h"

error_t addBookInDataBase(const char* FILE_NAME)
{
    int days;
    s_BooksInfo addBook = {0};
    FILE *fp = NULL;
    error_t status = FAILURE;
    fp = fopen(FILE_NAME,"ab+");
    if(fp == NULL)
    {
        printf("File is not opened\n");
        error_t FILE_NOT_FOUND;
    }

    printf("\nENTER YOUR DETAILS BELOW:");
    printf("\n---------------------------------------------------------------------------\n");
    printf("\nBook ID NO  = ");
    fflush(stdin);
    scanf("%u",&addBook.books_id);
    do
    {
        printf("\nBook Name  = ");
        fflush(stdin);
        fgets(addBook.bookName,MAX_BOOK_NAME,stdin);
        status = isNameValid(addBook.bookName);
        if (!status)
        {
            printf("Book name violated the types. Please enter again.");
        }
    }
    while(!status);

    do
    {
        printf("\nAuthor Name  = ");
        fflush(stdin);
        fgets(addBook.authorName,MAX_AUTHOR_NAME,stdin);
        status = isNameValid(addBook.authorName);
        if (!status)
        {
            printf("\nName contain invalid character. Please enter again.");
        }
    }
    while(!status);
    
    do
    {
        printf("\nStudent who Issued  = ");
        fflush(stdin);
        fgets(addBook.studentName,MAX_STUDENT_NAME,stdin);
        status = isNameValid(addBook.studentName);
        if (!status)
        {
            printf("\nName contain invalid character. Please enter again.");
        }
    }
    while(!status);
    do
    {
        //get date year,month and day from user
        printf("\nEnter date in format (day/month/year) when it was issue: ");
        scanf("%d/%d/%d",&addBook.bookIssueDate.dd,&addBook.bookIssueDate.mm,&addBook.bookIssueDate.yyyy);
        //check date validity
        status = isValidDate(&addBook.bookIssueDate);
        if (!status)
        {
            printf("\n\t\t\tPlease enter a valid date.\n");
        }
    }
    while(!status);
    Date d;
    d.dd=addBook.bookIssueDate.dd;
    d.mm=addBook.bookIssueDate.mm;
    d.yyyy=addBook.bookIssueDate.yyyy;
    addDate(&d);
    addBook.returnDate.dd=d.dd;
    addBook.returnDate.mm=d.mm;
    addBook.returnDate.yyyy=d.yyyy;
    
    fwrite(&addBook,sizeof(addBook), 1, fp);
    fclose(fp);
    return SUCCESS;
}