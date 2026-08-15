#include<stdio.h>
int main()
{
int x;

printf("Enter an integer to check if its positive negetive or zero");
scanf("%d",&x);

if(x > 0){
printf("The number entered %d is positive",x);}

else if(x < 0){
printf("The entered number %d is negetive",x);
}

else {printf("The enetred number %d is zero ",x);}

return 0;
}

