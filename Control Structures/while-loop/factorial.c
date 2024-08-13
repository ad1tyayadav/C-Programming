// Write a program to calculate the factorial of a given number using a while loop.

#include <stdio.h>

int main()
{
    int i = 1;
    int product = 1;
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    while (i <= n)
    {
        product *= i;
        i++;
    };
    printf("Factorial of %d = %d\n", n, product);
    return 0;
}