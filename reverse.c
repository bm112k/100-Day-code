#include<stdio.h>
int main()
{
int d1,d2,d3,num;

printf("/nEnter a three digit number :");
scanf("%d",&num);

d1 = num/100;
d2 = (num/10)%10;
d3 = num%10;

printf("The number you entered in reverse is %d%d%d",d3,d2,d1);

return 0;

}
