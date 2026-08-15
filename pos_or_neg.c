
# include <stdio.h>
int main()
{
    int a;
    printf("Enter the integer :");
    scanf("%d",&a);

    if (a > 0){
        printf("The given integer is positive %d",a);
    }
    else if (a < 0){
        printf("The given integer is negetive %d",a);
    }
    else {
        printf("The given integer is neither positive nor negetive %d",a);
    }
    
    return 0;
}
