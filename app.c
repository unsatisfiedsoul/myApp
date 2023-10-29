#include<stdio.h>
#include<string.h>

#include"app.h"


int app(){
    char command[200];
    int flag;
    printf("Welcome To The Soul\n");
    while(flag){
    scanf("%[^\n]s",command);
    getchar();
    
    printf("%s\n",command);
    command[strcspn(command,"\n")]='\0';

    if(strcmp(command,"exit")==0){
        printf("Exit\n");
        return 0;        
    }
    }

    return 0;
}