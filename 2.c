#include <stdio.h>
int main() {

    int n;
    printf("Enter array size: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter array elements: ");
    for (int i = 0; i < 5; ++i)
        scanf("%d", array + i);

    printf("Array elements are: \n");
    for (int i = 0; i < 5; ++i)
        printf("%d\n", *(array + i));
    return 0;
}
