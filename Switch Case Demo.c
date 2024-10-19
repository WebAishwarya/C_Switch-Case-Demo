/*
    CONDITIONAL STATEMENT - SWITCH CASE
*/

#include<stdio.h>

int main()
{
    //  Program 1 : For Integers
    
    // int choice;
    
    // printf("1. Fan \n2. AC \n3. Fridge \n4. Exit \n");
    
    // printf("\nEnter your preference : ");
    // scanf("%d", &choice);
    
    // switch(choice)
    // {
    //     case 1 :
    //     printf("Fan is ON");
    //     break;
        
    //     case 2 :
    //     printf("AC is ON");
    //     break;
        
    //     case 3 :
    //     printf("Fridge is ON");
    //     break;
        
    //     default :
    //     printf("EXIT");
    //     break;
    // }
    
    //  Program 2 : For Characters
    
    char choice;
    printf("A. Fan \nB. AC \nC. Fridge \nD. Exit \n");
    
    printf("\nEnter your preference : ");
    scanf("%c", &choice);
    
    switch(choice)
    {
        case 'A' :
        printf("Fan is ON");
        break;
        
        case 'B' :
        printf("AC is ON");
        break;
        
        case 'C' :
        printf("Fridge is ON");
        break;
        
        default :
        printf("EXIT");
        break;
    }
    
    return 0;
}
