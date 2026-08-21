#include<stdio.h>
int main()
{
int units,bill;

printf("\nEnter the units of electricity consumed :");
scanf("%d",&units);

if(units < 100){
bill = units*5;
printf("\nThe electricity bill is : %d ",bill);
}
else if(units > 100 && units < 200){
bill = (units-100)*7 + 500;
printf("\nThe electricity bill is : %d ",bill);
}
else if(units > 200 && units < 300){
bill = (units-200)*10 + 1200;
printf("\nThe electricity bill is : %d ",bill);
}
else if(units > 300){
bill = (units-300)*12 + 2200;
printf("\nThe electricity bill is : %d ",bill);
}
return 0;
}
