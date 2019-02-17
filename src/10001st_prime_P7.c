#include <stdio.h>

/* By listing the first six prime numbers:
 * 2, 3, 5, 7, 11, and 13, 
 * we can see that the 6th prime is 13.
 * What is the 10 001st prime number? */

int is_prime(int);

int main()
{
    int n, count;
    
    n = 2;
    count = 0;

    while (1)
    {
        if (is_prime(n))
            count++;
        if (count == 10001)
            break;
        n++;
    }

    printf("10,001st prime is: %d\n", n);

    return 0;
}

int is_prime(int n)
{
    int i;

    for (i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
            return 0;
    }
    if (i == n)
        return 1;
    else
        return 0;
}
