#include <stdio.h>

int main()
{
    float radius;
    float area;

    printf("Enter radius of a circle : ");
    scanf("%f", &radius);
    area = (3.1416 * radius * radius);
    printf("Area of circle is : %0.3f\n", area);

    return 0;
}