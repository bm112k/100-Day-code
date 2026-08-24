#include<stdio.h>
int main()
{
int n;
unsigned long long factorial = 1;
printf("Enter the valeu of n");
scanf("%d",&n);
if (n<0)
{
printf("The factorial for negetive number is not defined\n");
}
else
{
  for(int i = 1; i < n + 1; i++){
factorial*=i;}
printf("The factorial is %llu\n",factorial);
} 
return 0;
}
