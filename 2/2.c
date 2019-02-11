#include <stdio.h>

/* Find the sum of the even valued terms in the Fibonacci
    sequence whose values < 4 mil */

int main()
{
    int a = 0, b = 1, c, i, sum = 0;

    c = a + b;
    while (c <= 4000*1000)
    {
       a = b;
       b = c;
       c = a + b;

       if (c % 2 == 0)
           sum = sum + c;
       else
           ;
    }

    printf("Sum = %d\n", sum);

    return 0;
}
