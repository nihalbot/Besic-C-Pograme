#include<stdio.h>

int main()
{
    int area;
    int side;

    printf("Enter side of a sqare : ");
    scanf("%d", &side);

    area = (side*side);

    printf("Area of sqare is : %d\n", area);

    return 0;
}