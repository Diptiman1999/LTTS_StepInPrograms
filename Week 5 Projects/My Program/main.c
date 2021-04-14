#include "library_header.h"
int main()
{
    error_t status_initialise = initialise();
    error_t status_welcome=welcomeMessage();
    error_t status_login=login();
    return 0;
}