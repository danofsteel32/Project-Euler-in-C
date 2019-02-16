#include <stdio.h>

/* Find the difference between the sum of the squares of the first 
 * one hundred natural numbers and the square of the sum. */


int main()
{
    int i, sum_sqrs, sqr_sum;
    
    sum_sqrs = sqr_sum = 0;
    for (i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
        sum_sqrs = sum_sqrs + i*i;
        sqr_sum  = sqr_sum + i;
    }

    printf("Sum of squares = %d\n", sum_sqrs);
    printf("Square of sum = %d\n", sqr_sum*sqr_sum);
    printf("Difference = %d\n", sqr_sum*sqr_sum - sum_sqrs);

    return 0;
}
