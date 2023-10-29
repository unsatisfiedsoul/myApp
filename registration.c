#include <conio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include"registration.h"

int registration(){
    char userName[100],passWord[50];
    int check;
    getchar();
        printf("Enter Username: ");
        scanf("%[^\n]s",userName);
        getchar();
        printf("Enter Password: ");
        scanf("%[^\n]s",passWord);
        getchar();

        char* dirname = "C:\\geeksforgeeks";
	
    
	    check = mkdir(dirname);

        FILE* file;
        file = fopen("C:\\geeksforgeeks\\data.txt","w");
        if(file!=NULL){
            // printf("File has opened\n");
            fputs(userName,file);
            fprintf(file,"\n");
            fputs(passWord,file);
            fclose(file);
        }else{
            printf("File is not opened\n");
        }






    return 0;
}