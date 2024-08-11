// To convert Celsius to Fahrenheit

#include <stdio.h>

int main()
{
    int c;
    int f;
    printf("Enter a Celsius temperature to convert to Fahrenheit: ");
    scanf("%d", &c);
    f = (c * 9 / 5) + 32;
    printf("%d Celsius is converted to %d Fahrenheit\n", c, f);
    return 0;
};