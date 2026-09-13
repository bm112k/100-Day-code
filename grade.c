#include<stdio.h>
int main()
{
int grade;

printf("\n Enter the grade achieved from 0-100 in percentage : ");
scanf("%d",&grade);


if(grade >= 80 && grade < 89){
printf("\n The grade you entered is a B grade good work.");}
else if(grade > 100 || grade < 80){
printf("\n The grade you entered is invalid");}
else if(grade > 89 && grade < 100){
printf("\n The grade you entered is A");}


return 0;
}

