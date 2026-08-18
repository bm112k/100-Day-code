#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;

double d,root1,root2;

printf("\n Enter the three constants of x^2 , x and c");
scanf("%d%d%d",&a,&b,&c);

d = sqrt((b*b)-4*a*c);

if(d > 0){
root1 = (-b+d)/(2*a);
root2 = (-b-d)/(2*a);
printf("\nThe equation has 2 real roots : %f and %f",root1,root2);}
else if(d == 0){
root1 = (-b+d)/(2*a);
printf("\nThe equation has 1 real root : %f",root1);}
else{
root1 = (-b+d)/(2*a);
root2 = (-b-d)/(2*a);
printf("\nThe equation has two complex answers ; %f and %f",root1,root2);}

return 0;
}

