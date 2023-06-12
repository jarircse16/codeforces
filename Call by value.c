
#include <stdio.h>

void swap_call_by_value(int number1, int number2)
{
    int temp;

    printf("Before swapping: number1=%d number2=%d\n", number1, number2);

    temp = number1;
    number1 = number2;
    number2 = temp;

    printf("After swapping: number1= %d number2=%d\n\n", number1, number2);
}


int main()
{
    int number1, number2;
    printf("Enter two numbers: ");
    scanf("%d%d", &number1, &number2);
    swap_call_by_value(number1, number2);

    return 0;
}
