#include "library_header.h"
int main()
{

    const char FILE_NAME[50]= "LibraryBooksDetails.bin";
    unsigned char userName[MAX_SIZE_USER_NAME] = {0};
    unsigned char password[MAX_SIZE_PASSWORD] = {0};
    
    int login_count=1;
    
    error_t status_login=SUCCESS;
    error_t status_initialise = initialise(FILE_NAME);
    error_t status_welcome=welcomeMessage();

    do
    { 
        printf("\nUsername:");
        fgets(userName,MAX_SIZE_USER_NAME,stdin);
        printf("\nPassword:");
        fgets(password,MAX_SIZE_PASSWORD,stdin);
        error_t status_login=login(FILE_NAME,userName,password);
        login_count+=1;
    }while(status_login==0 && login_count<=3);

    if(login_count>3)
    {
        printf("\nLogin Failed\n");
        printf("\t\t\t\tSorry,Unknown User.");
        getchar();
        system(CLS);
    }

    return 0;
}