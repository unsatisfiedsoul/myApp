#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"login.h"
#include"app.h"


int login(){
    int flag=1;
        while(flag){
    char inputUsername[100],inputPassword[50];
    getchar();
    printf("Enter Username: ");
    scanf("%[^\n]s",inputUsername);
    getchar();
    printf("Enter Password: ");
    scanf("%[^\n]s",inputPassword);
    getchar();

    char storedUsername[100],storedPassword[50];

    FILE* file;
    file = fopen("C:\\geeksforgeeks\\data.txt","r");
    if(file!=NULL){
        fgets(storedUsername,100,file);
        storedUsername[strcspn(storedUsername,"\n")]='\0';
        printf("%s\n",storedUsername);
        fgets(storedPassword,100,file);
        storedPassword[strcspn(storedPassword,"\n")]='\0';
        printf("%s\n",storedPassword);
        
        if(strcmp(inputUsername,storedUsername)==0 && strcmp(inputPassword,storedPassword)==0){
            
            printf("Login success %s.\n",storedUsername);
            app();
            flag=0;
        }else{
            printf("Unknown Credentials.\n");
        }
        
        fclose(file);
        
    }else{
        printf("File couldn't be opened");
    }
    }
    return 0;
}
