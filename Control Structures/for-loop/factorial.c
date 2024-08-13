// Write a program to calculate the factorial of a given number using a for loop.

#include <stdio.h>

int main()
{
    int product = 1;
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        product *= i;
    };
    printf("Factorial of %d = %d\n", n,product);
    return 0;
}