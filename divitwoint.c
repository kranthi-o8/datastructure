/*
LeetCode - Divide Two Integers
*/

#include <limits.h>

int divide(int dividend, int divisor)
{
    /* Overflow case */
    if(dividend == INT_MIN && divisor == -1)
    {
        return INT_MAX;
    }

    long long dvd = labs((long long)dividend);
    long long dvs = labs((long long)divisor);

    int result = 0;

    while(dvd >= dvs)
    {
        long long temp = dvs;
        int multiple = 1;

        /* Double divisor until greater than dividend */
        while(dvd >= (temp << 1))
        {
            temp <<= 1;
            multiple <<= 1;
        }

        dvd -= temp;
        result += multiple;
    }

    /* Apply sign */
    if((dividend < 0) ^ (divisor < 0))
    {
        result = -result;
    }

    return result;
}
