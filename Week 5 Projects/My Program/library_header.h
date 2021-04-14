/**
 * @file library_header.h
 * @author Diptiman Senapati (diptiman.sen1999@gmail.com.com)
 * @brief 
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>


#define MAX_YR  9999
#define MIN_YR  1900
#define MAX_SIZE_USER_NAME 30
#define MAX_SIZE_PASSWORD  20
#define FILE_NAME  "LibraryBooksDetails.bin"

// Defined For Books
#define MAX_BOOK_NAME   50
#define MAX_AUTHOR_NAME 50
#define MAX_STUDENT_NAME 50
#define MAX_STUDENT_ADDRESS 300
#define FILE_HEADER_SIZE  sizeof(sFileHeader)

#ifndef _LIBRARY_HEADER_
#define _LIBRARY_HEADER_

/**
 * @brief For error Handling
 * 
 */
typedef enum error_t
{
    FILE_NOT_FOUND=-1,
	FAILURE=0,
    SUCCESS=1
	
}error_t;

/**
 * @brief Structure for Date
 * 
 */
typedef struct
{
    int yyyy;
    int mm;
    int dd;
} Date;

/**
 * @brief Username and Password for file
 * 
 */
typedef struct
{
    char username[MAX_SIZE_USER_NAME];
    char password[MAX_SIZE_PASSWORD];
} sFileHeader;

/**
 * @brief Structure for Book Informations
 * 
 */
typedef struct
{
    unsigned int books_id; 
    char bookName[MAX_BOOK_NAME];
    char authorName[MAX_AUTHOR_NAME];
    char studentName[MAX_STUDENT_NAME];
    char studentAddr[MAX_STUDENT_ADDRESS];
    Date bookIssueDate;
} s_BooksInfo;


/**
 * @brief  function creates the file if not exist and copies the default password (“diptiman”) in file header structure.
 * 
 * @return error_t 
 */
error_t initialise();


/**
 * @brief This function verifies that a file has been created or not. If the file exists, the function return SUCCESS otherwise returns FILE_NOT_FOUND.
 * 
 * @param path 
 * @return error_t 
 */
error_t isFileExist(const char *path);


/**
 * @brief This function prints the message in the middle of the head massage. I have passed the message in this function as per the operation.
 * 
 * @param message 
 * @return error_t 
 */
error_t printMessageCenter(const char* message);


/**
 * @brief It prints the message on the top of the console and prints the message as per operation.
 * 
 * @param message 
 * @return error_t 
 */
error_t headMessage(const char *message);

/**
 * @brief This function displays the first welcomes screen of the “Library management system project” and asks the user to press any key to access the library application.
 * 
 * @return error_t 
 */
error_t welcomeMessage();


/**
 * @brief It validates the user name, author name ..etc. I have permitted this function to take the space in names.
 * 
 * @param name 
 * @return error_t 
 */
error_t isNameValid(const char *name);



error_t isValidDate(Date *validDate);
error_t menu();
error_t addBookInDataBase();
error_t searchBooks();
error_t viewBooks();
error_t deleteBooks();
error_t updateCredential();
error_t login();
#endif
