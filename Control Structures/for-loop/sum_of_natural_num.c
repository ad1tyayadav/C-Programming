// Sum of first ten natural numbers

#include <stdio.h>

int main()
{
    int sum = 0;
    for (int num = 1; num <= 10; num++)
    {
        sum += num;
    };
    printf("The sum of first ten natural numbers: %d\n", sum);
    return 0;
}