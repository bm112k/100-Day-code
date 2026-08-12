#include<stdio.h>
int main()
{
float a,b,perimeter,area;

printf("Enter the lenght of the rectabgle :\n");
scanf("%f",&a);

printf("Enter the breadth of the rectabgle :\n");
scanf("%f",&b);

perimeter = 2*(a+b);
area = a*b;

printf("The perimeter of rectangle with lenght %f and breadth %f is : %f\n\n",a,b,perimeter);
printf("The area of rectangle with lenght %f and breadth %f is : %f\n\n",a,b,area);

return 0;

}

