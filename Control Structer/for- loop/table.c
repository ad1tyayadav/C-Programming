// Write a table of number given by user

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number :");
    scanf("%d", &num);

    printf("Table of %d:\n", num);

    for (int i = 1; i <= 10; i++)
    {
        int table = i * num;
        printf("%d x %d = %d\n", num, i, table);
    };
    return 0;
};