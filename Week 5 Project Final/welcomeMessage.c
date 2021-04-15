#include "library_header.h"

error_t welcomeMessage()
{
    system(CLS);
    printf("\n  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n  =                 LIBRARY                   =");
    printf("\n  =               MANAGEMENT                  =");
    printf("\n  =                 SYSTEM                    =");
    printf("\n  =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\n\n Enter any key to continue.....");
    getchar();

    return SUCCESS;
}