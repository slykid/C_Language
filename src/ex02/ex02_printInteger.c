#include <stdio.h>

int main()
{
    int number1 = 10;
    int number2 = 0;

    printf("number1 = %d\n", number1);
    printf("number2 = %d\n\n", number2);

    number2 = number1 - 5;
    printf("number1 = %d\n", number1);
    printf("number2 = %d\n", number2);

    return 0;
}