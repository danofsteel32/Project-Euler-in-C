#include <stdio.h>

/* Find the sum of all the primes below two million */

/* brute force approach, took 5m42.466s */

int is_prime(int);

int main()
{
    long sum = 2;
    int i;
   
    for (i = 3; i <= 2000*1000; i++)
    {
        if (is_prime(i))
        {
            sum += i;
        }
    }

    printf("%ld\n", sum);

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
}
