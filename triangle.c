#include<stdio.h>
int main()
{
float a,b,c;

printf("Enter the valeu of the three sides of triangle :\n");
scanf("%f%f%f",&a,&b,&c);

if(a == b && a == c){
printf("According to the valeus you entered %f %f and %f the triangle is equilateral",a,b,c);}
else if(a == b && a != c){
printf("According to the valeus you entered %f %f and %f the triangle is Isocelese",a,b,c);}
else{
printf("According to the valeus you entered %f %f and %f the triangle is Scalene",a,b,c);}

return 0;
}
