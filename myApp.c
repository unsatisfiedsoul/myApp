#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"registration.h"
#include"login.h"

int main(){
    int flag=1;
    while(flag){
    printf("My App Is Running\n");
    printf("Enter an option.\n1. Registration\n2. Login\n");
    int choise;
    
    
    printf("I choose ");
    scanf("%d",&choise);
    switch(choise){
        case 1:
        registration();flag=0;break;
        case 2:
        login();flag=0;break;
        default:
        printf("Not a valid options\n");break;
       
    }
    
    } 





    getchar();
    return 0;
}