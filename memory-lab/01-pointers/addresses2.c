
#include <stdio.h>

int main(void)
{
    int n = 50;

    // Declare a pointer p that stores the address of n
    int *p = &n;

    // Print the address stored in p
    printf("%p\n", p);
}
