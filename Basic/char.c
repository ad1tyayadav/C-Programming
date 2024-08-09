// This is dynamic if you want to make this static then give initial value to a like this  "char value = 'f' " 
#include <stdio.h>

int main()
{
    char value;
    printf("Enter a letter: ");
    scanf(" %c", &value);  /* This line for take number from user */
    printf("You entered: %c", value);
    return 0;
}; 
// Output = value enter by user