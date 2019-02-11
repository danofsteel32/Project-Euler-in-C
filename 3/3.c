#include <stdio.h>

/* The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600,851,475,143 ? 
 * HINT: fundamental theorem of arithmetic:
 *      every integer > 1 can be represented as a product of primes */

int main()
{
    const long long big_num = 600851475143;
    long new_big_num = big_num;
    long lpf;                               

    int n = 2;                              
    while (n * n <= new_big_num)            
    {
        if (new_big_num % n == 0)
        {
            new_big_num = new_big_num / n;
            lpf = n;
        }
        else
            ++n;
    }
    if (new_big_num > lpf)
        lpf  = new_big_num;
    
    printf("Largest Prime Factor = %d\n", lpf);

    return 0;
}   
