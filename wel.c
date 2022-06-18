#include<stdio.h>

int main()
{
    int value;

    printf("Enter your ID number : ");
    scanf("%d", &value);

    if(value == 5){
        printf("Welcome to BAUST!\n");
    }

    else{
        printf("Enter a valid ID.\n");
    }

    return 0;
}