#include <stdio.h>

int main()
{
    int t, h, m, s;

    printf("\nEnter the value of time in seconds: ");
    scanf("%d", &t);

    h = t / 3600;
    m = (t % 3600) / 60;
    s = t % 60;

    printf("\nThe time according to the input %d is %d:%d:%d", t, h, m, s);

    return 0;
}
