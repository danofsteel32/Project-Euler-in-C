#include <stdio.h>

/* Find the sum of all the multiples of 3 or 5 below 1000 */

int main()
{
    int i, sum = 0;

    for (i = 0; i < 1000; ++i)
    {
        if (i % 3 == 0 || i % 5 == 0)
            sum = sum + i;
        else
            ;
    }

    printf("Sum = %d\n", sum);

    return 0;
}

