#include<stdio.h>
int main()
{
int n,sum = 0,x = 0;

printf("Enter the valeu of number n :\n");
scanf("%d",&n);

while(n != 0 && x <= n){
sum = sum + x;
x++;
}

printf("\nThe sum of n numbers till %d is : %d",n,sum);

return 0;
}
