#include<stdio.h>

float FindAvg(float a[100], int n)
{
 int i;
 float sum=0.0;
 for(i=0;i< n;i++)
 {
  sum = sum + a[i];
 }
 return(sum/n);
}

int main()
{
 float a[100], res;
 int i, n;
 printf("Enter array size:\n");
 scanf("%d", &n);
 printf("Enter numbers one by one:");
 for(i=0;i< n;i++)
 {
  scanf("%f", &a[i]);
 }

 res = FindAvg(a,n);
 printf(" The Average = %f", res);

 return 0;
}


