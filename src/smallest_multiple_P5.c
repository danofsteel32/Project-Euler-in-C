#include <stdio.h>

/* What is the smallest positive number that is evenly divisible by
 * all numbers 1 to 20? */

/* brute force approach, suprisingly quick at ~.04s 
int main()
{
    int n = 20, solution = 0;

    for (;;)
    {
        if ( n % 19 == 0 &&
             n % 18 == 0 &&
             n % 17 == 0 &&
             n % 16 == 0 &&
             n % 14 == 0 &&
             n % 13 == 0 &&
             n % 11 == 0 ) 
        {
            solution = n;
            break;
        }
        else
            n = n + 20;
    }

    printf("%d\n", solution);

    return 0;
} 
*/

/* intelligent way, find lowest common multiple of the prime factors 1-20 
 * much faster @ ~.002s */
int main()
{
    int solution;

    solution = 2*2*2*2*3*3*5*7*11*13*17*19;

    printf("%d\n", solution);

    return 0;
}
