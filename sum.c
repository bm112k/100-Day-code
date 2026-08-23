#include<stdio.h>
int main()
{
int n,num,sum = 0,i = 1;

printf("Enter the valeu of n");
scanf("%d",&num);

if(num % 2 == 0){
printf("Please enter an odd number");}
else{
n = num + num - 1;
while(i != n + 2){
sum = sum + i;
i = i + 2;

}
}
printf("The sum of first n odd numbers is %d",sum);

return 0;
}
