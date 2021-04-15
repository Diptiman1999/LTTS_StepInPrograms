#include "library_header.h"

error_t initialise(const char *FILE_NAME)
{
    FILE *fp = NULL;
    error_t status;
    const char defaultUsername[] ="diptiman\n";
    const char defaultPassword[] ="diptiman\n";
    sFileHeader fileHeaderInfo = {0};
    status = isFileExists(FILE_NAME);
    if(status==-1)
    {
        //Creating the binary file
        fp = fopen(FILE_NAME,"wb");
        if(fp != NULL)
        {
            //Copy default password
            strncpy(fileHeaderInfo.username,defaultUsername,sizeof(defaultUsername));
            strncpy(fileHeaderInfo.password,defaultPassword,sizeof(defaultPassword));
            fwrite(&fileHeaderInfo,FILE_HEADER_SIZE, 1, fp);
            fclose(fp);
        }
    }
    return SUCCESS;
}