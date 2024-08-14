// Write a program to determine whether a student has passed or failed. To pass, a student requires a total of 40% and at least 33% in each subject. (math + chemistry + physics / totalMarks) * 100;

#include <stdio.h>

int main()
{
    int math;
    int chemistry;
    int physics;
    printf("Please enter your maths mark = ");
    scanf("%d", &math);
    printf("Please enter your chemistry mark = ");
    scanf("%d", &chemistry);
    printf("Please enter your physics mark = ");
    scanf("%d", &physics);

    int obtainedMarks = math + chemistry + physics;
    int totalMarks = 300;
    float totalPercentage = (obtainedMarks / (float)totalMarks) * 100;

    if (math >= 33 && chemistry >= 33 && physics >= 33 && totalPercentage >= 40)
    {
        printf("Congrats! You passed the exam. Your total marks are %d and you got %.2f%%.\n", obtainedMarks, totalPercentage);
    }
    else
    {
        printf("Sorry, you failed the exam. Your total marks are %d and you got %.2f%%.\n", obtainedMarks, totalPercentage);
    };
    return 0;
}