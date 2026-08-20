#include<stdio.h>
int main()
{

int cp,sp,pl;
float percent;

printf("Enter the valeus of cost price and selling price");
scanf("%d%d",&cp,&sp);

pl = (sp - cp);

percent = (pl*100)/cp;

printf("\nAcording to the cp %d and sp %d the profit is %d and profit percent is %f ",cp,sp,pl,percent);

return 0;
}
