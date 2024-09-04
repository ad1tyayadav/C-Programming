// Table of 2 using for loop

#include <stdio.h>

int main()
{
    int num = 2;
    printf("Table of 2 : \n");
    for (int i = 1; i <= 10; i++)
    {
        int result = num * i;
        printf("%d * %d = %d\n", num, i, result);
    }
    return 0;
}