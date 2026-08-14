#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t;
    float si, ci, amount;

    printf("Enter the principal amount: ");
    scanf("%f", &p);

    printf("Enter the rate of interest: ");
    scanf("%f", &r);

    printf("Enter the time in years: ");
    scanf("%f", &t);

    // Simple Interest
    si = (p * r * t) / 100;

    // Compound Interest
    amount = p * pow((1 + r / 100), t);
    ci = amount - p;

    printf("\nSimple Interest = %.2f", si);
    printf("\nCompound Interest = %.2f", ci);

    return 0;
}
