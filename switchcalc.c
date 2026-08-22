#include<stdio.h>
int main()
{

int n1,n2;
char ch;

printf("\nEnter the valeus you want to operate on ");
scanf("%d%d",&n1,&n2);

printf("\nEnter the operation you want to perform (+,-,*,/,%% ): ");
scanf(" %c",&ch);

switch(ch){
case  '+':
printf("\nThe sum of the two number is %d ",n1 + n2);
break;
case '-':
printf("\nThe difference of the two number is %d ",n1 - n2);
break;
case  '*':
printf("\nThe product of the two number is %d ",n1*n2);
break;
case  '/':
printf("\nThe quotient of the two number is %d ",n1/n2);
break;
case  '%':
printf("\nThe sum of the two number is %d ",n1%n2);
break;
default:
printf("Invalid operator");
}

return 0;
}
