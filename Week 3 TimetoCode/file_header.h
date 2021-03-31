/**
 * @file file_header.h
 * @author Diptiman Senapati (you@domain.com)
 * @brief  
 * @version 0.1
 * @date 2021-03-30
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#ifndef _FILE_HEADER_
#define _FILE_HEADER_

/**
 * @brief Defining error
 * 
 */
typedef enum error_t
{
	FAILURE=-1,
    FILE_NOT_FOUND=0,
    SUCCESS=1
	
}error_t;

/**
 * @brief information of structure
 * 
 */
typedef struct info_t
{
	char name[100];
	char email_id[100];
	char git_link[100];
}info_t;

/**
 * @brief To check Whether able to open file or not
 * 
 * @param ptr 
 * @return error_t 
 */
error_t openfile(FILE *ptr);
error_t storedata(FILE *ptr,info_t *data,int *row);
error_t sortdata(info_t *data,int *row);
error_t displaydata(info_t *data,const int *row);
error_t closefile(FILE *ptr);

int test_main();
#endif