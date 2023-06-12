
#include <stdio.h>

void swap_call_by_reference(int *number1, int *number2)
{
   int temp;

   temp = *number2;
   *number2 = *number1;
   *number1 = temp;
}

int main()
{
   int number1, number2;

   printf("Enter the value of two numbers:\n");
   scanf("%d%d",&number1,&number2);
   printf("Before Swapping\nx = %d\ny = %d\n", number1, number2);
   swap_call_by_reference(&number1, &number2);
   printf("After Swapping\nx = %d\ny = %d\n", number1, number2);

   return 0;
}


