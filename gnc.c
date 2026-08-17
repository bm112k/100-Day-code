# include<stdio.h>
int main()
{
    int x,y,z;

    printf("Enter the first number");
    scanf("%d",&x);
    printf("Enter the Second number");
    scanf("%d",&y);
    printf("Enter the Third number");
    scanf("%d",&z);

    if (x > y && x > z){
        printf("The first number %d is the greatest",x);
    }
    else if (y > x && y > z){
        printf("The second number %d is the gretest",y);
    }
    else {printf("The third number %d is the greatest",z);}
    


}
