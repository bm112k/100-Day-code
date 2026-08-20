#include<stdio.h>
int main()
{

int month;

printf("Enter the number of the month ");
scanf("%d",&month);

switch(month){
case 1:
printf("The month is January with 31 Days");
break;
case 2:
printf("The month is February with 28 Days");
break;
case 3:
printf("The month is March with 31 Days");
break;
case 4:
printf("The month is April with 30 Days");
break;
case 5:
printf("The month is May with 30 Days");
break;
case 6:
printf("The month is June with 31 Days");
break;
case 7:
printf("The month is July with 30 Days");
break;
case 8:
printf("The month is August with 31 Days");
break;
case 9:
printf("The month is September with 30 Days");
break;
case 10:
printf("The month is October with 31 Days");
break;
case 11:
printf("The month is November with 30 Days");
break;
case 12:
printf("The month is December with 31 Days");
break;

}
return 0;

}
