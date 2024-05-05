#include "demo.h"

#include <cmath>

namespace demo
{

int fibonacci(int n)
{
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int is_prime(int n)
{
    if (n <= 1)
        return 0;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int is_palindrome(int n)
{
    int rev = 0, temp = n;
    while (temp)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    return n == rev;
}

int is_armstrong(int n)
{
    int sum = 0, temp = n;
    while (temp)
    {
        int rem = temp % 10;
        sum += rem * rem * rem;
        temp /= 10;
    }
    return n == sum;
}

int is_perfect(int n)
{
    int sum = 0;
    for (int i = 1; i <= n / 2; i++)
        if (n % i == 0)
            sum += i;
    return n == sum;
}

int is_strong(int n)
{
    int sum = 0, temp = n;
    while (temp)
    {
        int fact = 1, rem = temp % 10;
        for (int i = 1; i <= rem; i++)
            fact *= i;
        sum += fact;
        temp /= 10;
    }
    return n == sum;
}

int is_harshad(int n)
{
    int sum = 0, temp = n;
    while (temp)
    {
        sum += temp % 10;
        temp /= 10;
    }
    return n % sum == 0;
}

int is_disarium(int n)
{
    int sum = 0, temp = n, len = 0;
    while (temp)
    {
        len++;
        temp /= 10;
    }
    temp = n;
    while (temp)
    {
        int rem = temp % 10;
        sum += pow(rem, len--);
        temp /= 10;
    }
    return n == sum;
}

int is_neon(int n)
{
    int sum = 0, temp = n * n;
    while (temp)
    {
        sum += temp % 10;
        temp /= 10;
    }
    return n == sum;
}

int is_pronic(int n)
{
    for (int i = 0; i * (i + 1) <= n; i++)
        if (i * (i + 1) == n)
            return 1;
    return 0;
}

int is_automorphic(int n)
{
    int sq = n * n, temp = n, len = 0;
    while (temp)
    {
        len++;
        temp /= 10;
    }
    return sq % (int)pow(10, len) == n;
}

}
