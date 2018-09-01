#include <cstdio>

long long Finbonacci_Solution(unsigned int n)
{
    if (n < = 0)
        return 0;
    if (n == 1)
        return 1;
    return Fibonacci_Solution(n-1) + Fibonacci_Solution(n-1);
}

long long Fibonacci_Solution(unsigned n)
{
    int result[2] = {0, 1};
    if (n < 2)
        return result[n];
    long long fibNMinusOne = 1;
    long long fibNMinusTwo = 0;
    long long fibN = 0;

    for (unsigned int i = 2;i <= n; ++i)
    {
        fibN = fibNMinusOne + fibNMinusTwo;
        fibNMinusOne = fibN;
    }

    return fibN;
}


