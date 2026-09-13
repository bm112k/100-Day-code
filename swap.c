#include <stdio.h>

int main()
{
    int num, first, last, digits, power, middle, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    last = num % 10;

    digits = num;
    power = 1;

    while (digits >= 10)
    {
        digits = digits / 10;
        power = power * 10;
    }

    first = digits;

    middle = (num % power) / 10;

    result = last * power + middle * 10 + first;

    printf("Number after swapping = %d", result);

    return 0;
}
