#include <stdio.h>
#include <math.h>

/* What is the value of the first triangle number to have over five hundred divisors?
 * After some googling I discovered that the nth triangle number can be 
 * formed by the formula x_n = n(n+1)/2. 
 * Runs in 0.152s */

int getDivisors(int num);

int main()
{
    int divisors, n = 1;

    while (1)
    {
         divisors = getDivisors((n * (n + 1)) / 2);
         if (divisors >= 500)
         {
            printf("%d\n", tri_num);
            break;
         }
         n++;
    }
} 

int getDivisors(int num)
{
    /* finding pairs of divisors */
    int n = num;
    int num_divisors = 0, i;

    for (i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            if (n / i == i) // special case where divisor pair is equal
                num_divisors++;
            else
                num_divisors += 2; // found divisor pair
        }
    }
    return num_divisors;
}

