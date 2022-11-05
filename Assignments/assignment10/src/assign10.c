/*************************************************************************
*
*  FILE NAME    : assign10.c
*
*  DESCRIPTION  :  Accoring to the requriements 
*
*  DATE             NAME       REFERENCE          REASON
*-------------------------------------------------------------------------
*  05-nov-2022    Gowthami    CG material       2D char array initialization
*
*  Copyright 2010, Aricent Technologies (Holdings) Ltd
*
**************************************************************************/

/*************************************************************************
*                               HEADER FILES
*************************************************************************/
#include <common.h>
/*************************************************************************
*                               MACROS
*************************************************************************/
#define MAX_LEN 80
#define ROW 4
char first[ROW][MAX_LEN];
char last[ROW][MAX_LEN];
char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};

int* getFirstNames(char arr1[ ][MAX_LEN], int rowcount,char str1[ ][MAX_LEN])
{
    
    for(int i=0; i < ROW; i++)
    {
        const char s[2] = ":";
        char *token;
       
        //get the first token 

        token = strtok(arr1[i], s);
        strcpy(str1[i], token );
    }

    for(int i = 0; i < ROW; i++)
    {
        printf("%s\n", str1[i]);
    }
    
     return EXIT_SUCCESS;
}
char* getLastNames(char arr1[][MAX_LEN], int rowcount,char str2[][MAX_LEN])
{
     char* las;
 
    // save length of string

    char arr[ROW][MAX_LEN]={"Antony:Joseph","Lata:Mary","Rajesh:Kumar","Joly:Akbar"};
 
    for(int i=0; i < ROW; i++)
    {
          // Find the last character with

          las = strrchr(arr[i],':') ;
          las++;
          printf("%s\n",las);
    }

    return EXIT_SUCCESS;
}
int main()
{
    int rowcount=4;
    printf("FirstNames: \n");
    getFirstNames(arr,rowcount,first);
    printf("\n\n");
    printf("LastNames: \n");
    getLastNames(arr,rowcount,last);
    return EXIT_SUCCESS;
}
