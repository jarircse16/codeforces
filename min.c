#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int min = INT_MAX;
    int max = INT_MIN;
    int a;

    FILE * file = NULL;
    if( NULL == (file = fopen ("test.txt", "r") ) )
    {
        perror( "fopen for test.txt failed" );
        exit( EXIT_FAILURE );
    }


    while( fscanf(file, "%d,", &a) )
    {
        if( a < min ) min = a;
        if( a > max ) max = a;
    }

    printf("Minimum: %d\n", min);

    fclose (file);
    return 0;
}
