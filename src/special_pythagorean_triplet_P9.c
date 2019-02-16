#include <stdio.h>

/* There exists exactly one Pythagorean triplet for which a + b + c = 1000.
 * Find the product abc:
 * Note that I used Euclids formula here to make life easy */

int main()
{
    int a, b, c, m, n;

    for (n = 1; n <= 1000/3; n++)
    {
        for (m = n + 1; m <= 1002/3; m++)
        {
            a = m*m - n*n;
            b = 2*m*n;
            c = m*m + n*n;

            if (1000 - a - b == c)
            {
                printf("%d %d\n", m, n);
                printf("%d %d %d\n", a, b, c);
                printf("%d\n", a*b*c);
            }
        }
    }

    return 0;
}

