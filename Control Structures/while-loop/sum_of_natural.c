// Sum of first ten natural numbers

#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    while (i <= 10)
    {
        sum += i;
        i++;
    };
    printf("Sum of the first ten natural numbers: %d\n", sum);
    return 0;
};
// Output = 55