#include <stdio.h>

int main()
{
    int n;
    printf("\nEnter the value of n:");
    scanf("%d",&n);

     int i,j,prime_counter=0,prime_number_found=1;
    for(i=2; i>0; i++)
    {
        prime_number_found=1;
        for(j=2; j<i; j++)
        {
            if(i%j==0)
            {
                prime_number_found=0;
                break;
            }
        }
        if(prime_number_found==1)
        {
            prime_counter++;

        }
        if(prime_counter==n)
        {
            printf("\n%dth Prime Number is: %d\n",n,i);
            break;
        }

    }

    return 0;
}
