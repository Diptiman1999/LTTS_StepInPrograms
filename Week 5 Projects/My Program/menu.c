#include "library_header.h"

error_t menu()
{
    error_t status;
    int choice = 0;
    do
    {
        error_t head_status=headMessage("MAIN MENU");
        printf("\n\n\n\t\t\t1.Add Books");
        printf("\n\t\t\t2.Search Books");
        printf("\n\t\t\t3.View Books");
        printf("\n\t\t\t4.Delete Book");
        printf("\n\t\t\t5.Update Password");
        printf("\n\t\t\t0.Exit");
        printf("\n\n\n\t\t\tEnter choice => ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            status= addBookInDataBase();
            break;
        case 2:
            status=searchBooks();
            break;
        case 3:
            status=viewBooks();
            break;
        case 4:
            status=deleteBooks();
            break;
        case 5:
            status=updateCredential();
            break;
        case 0:
            printf("\n\n\n\t\t\t\tThank you!!!\n\n\n\n\n");
            exit(1);
            break;
        default:
            printf("\n\n\n\t\t\tINVALID INPUT!!! Try again...");
        }                                            //Switch Ended
    }
    while(choice!=0);                                    

    return SUCCESS;
}