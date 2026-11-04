#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;

    /* Your original random number code goes here */

    if (n % 10 > 5)
    {
        printf("Last digit of %d is greater than 5\n", n);
    }
    else if (n % 10 == 0)
    {
        printf("Last digit of %d is 0\n", n);
    }
    else
    {
        printf("Last digit of %d is less than 6 and not 0\n", n);
    }

    return (0);
}
