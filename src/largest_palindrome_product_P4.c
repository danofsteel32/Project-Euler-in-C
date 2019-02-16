#include <stdio.h>

/* Find the largest palindrome number made from the
 * product of two 3 digit numbers */

int is_palindrome(int test_num);

int main()
{
    int i, n, num = 0, largest_pal = 0;

    for (i = 100; i < 1000; ++i)
    {
        for (n = 100; n < 1000; ++n)
        {
            num = i * n;
            if (is_palindrome(num) == 1 && num > largest_pal)
                largest_pal = num;
        }
    }
    printf("Largest Palindrome = %d\n", largest_pal);

    return 0;    

}

int is_palindrome(int test_num)
{
    int num, rev_num = 0;

    num = test_num;

    while (num != 0)
    {
        rev_num = rev_num * 10;
        rev_num = rev_num + num % 10;
        num = num / 10;
    }

    if (test_num == rev_num)
        return 1;
    else
        return 0;
}
