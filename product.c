#include<stdio.h>
int main()
{
int num,prod = 1,i = 2;

printf("Enter the valeu of n");
scanf("%d",&num);

if(num % 2 == 0){
while(i != num+2){
prod = prod*i;
i += 2;
}
}
else{
printf("The number you entered is odd please enter an even number");
}

printf("The product of numbers is : %d",prod);

return 0;
}
