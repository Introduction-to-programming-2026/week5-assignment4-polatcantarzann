#include <stdio.h>

int main(void)
{
    int n = 50;
    int *p = &n;

    // Print the value of n by dereferencing p
    printf("%i\n", *p);
}