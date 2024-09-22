#include <stdio.h>
#include <math.h>

int main()
{
    printf("integer: %d\n", 111111111 * 11111111);
    printf("float: %f\n", 111111111.0 * 111111111.0);

    printf("integer: %d\n", sqrt(-10));
    printf("float: %f\n", sqrt(-10.0));

    printf("1.0 / 0.0: %f\n", 1.0/0.0);
    printf("0.0 / 0.0: %f\n", 0.0/0.0);
    printf("1 / 0: %d\n", 1/0);
}

