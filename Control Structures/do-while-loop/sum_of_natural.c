// Sum of first ten natural numbers

#include <stdio.h>

int main()
{
    int num = 1;
    int sum = 0;
    do
    {
        sum += num;
        num++;
    } while (num <= 10);
    printf("The sum of firts ten natural number: %d\n", sum);
    return 0;
};