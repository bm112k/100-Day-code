#include<stdio.h>
int main()
{
int days,fine1,fine2,fine3;

printf("\nEnter the amount of days the book has been overdue for :");
scanf("%d",&days);

if(days < 5){
fine1 = days*2;
printf("\nThe fine to be paid for book overdue is : %d ",fine1);
}
else if(days > 5 && days < 10){
fine1 = (days-5)*4 + 10;
printf("\nThe fine to be paid for book overdue is : %d ",fine1);
}
else if(days > 10 && days < 20){
fine1 = (days-10)*6 + 30;
printf("\nThe fine to be paid for book overdue is : %d ",fine1);
}
else{printf("\n Scince the book has been iverdue for more than a month your membership has been canceled");
}
return 0;
}

