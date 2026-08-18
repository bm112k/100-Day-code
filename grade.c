#include<stdio.h>
int main()
{
int grade;

printf("\n Enter the grade achieved from 0-100 in percentage : ");
scanf("%d",&grade);

if(grade < 60){
printf("\n The grade you entered is a failing grade give your best next time");}
else if(grade > 60 && grade < 69){
printf("\n The grade you entered is a D grade try harder");}
else if(grade > 70 && grade < 79){
printf("\n The grade you entered is a C grade could do better");}
else if(grade > 80 && grade < 89){
printf("\n The grade you entered is a B grade good work.");}
else{
printf("\n The grade you entered is an A grade well done!");}

return 0;
}

