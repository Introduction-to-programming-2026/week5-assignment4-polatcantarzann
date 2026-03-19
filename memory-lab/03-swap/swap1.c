#include <stdio.h>

// TODO: Update the signature — parameters should be int* (pointers to int)
void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);

    // TODO: Pass the addresses of x and y using &
    // We send the memory locations of x and y to the function
    swap(&x, &y);

    printf("x is %i, y is %i\n", x, y);

    return 0;
}

// TODO: Update the signature and body to use pointers
void swap(int *a, int *b)
{
    // TODO: Use *a and *b to swap the actual values in memory
    // Go to the address stored in 'a', take the value, and put it in 'tmp'
    int tmp = *a;
    
    // Take the value at address 'b' and put it into address 'a'
    *a = *b;
    
    // Put the value in 'tmp' into the address 'b'
    *b = tmp;
}