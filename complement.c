#include <stdio.h>

int main()
{
    int num, digit, complement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;

        if (digit == 0)
        {
            complement = complement + 1 * place;
        }
        else
        {
            complement = complement + 0 * place;
        }

        place = place * 10;
        num = num / 10;
    }

    printf("1's complement = %d", complement);

    return 0;
}
