#include<stdio.h>

int main()
{
    int user_input;

    printf("Enter a number you want to cheek : ");
    scanf("%d", &user_input);

    printf("0 for divisible, 1 for not divisible\n");
    printf("\n");
    printf("ans is : %d\n", user_input % 2);

    return 0;
}
