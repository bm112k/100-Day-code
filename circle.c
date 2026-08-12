#include <stdio.h>

int main()
{
    float r, circumference, area;

    printf("Enter the value of the radius :\n");
    scanf("%f", &r);

    circumference = 2 * 3.1415 * r;
    area = 3.1415 * r * r;

    printf("\nThe circumference of the circle with radius %f is : %f\n", r, circumference);
    printf("\nThe area of the circle with radius %f is : %f\n", r, area);

    return 0;
}
