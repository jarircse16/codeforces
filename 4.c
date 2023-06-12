#include<stdio.h>

void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("\nNumbers after swapping: a=%d b=%d\n",*a,*b);
}


void main( )
{
    int a,b;
    printf("Enter the two numbers a and b to be swapped:\n");
    scanf("%d%d",&a,&b);
    printf("\nNumbers before swapping: a=%d b=%d\n",a,b);
    swap(&a,&b);
}

