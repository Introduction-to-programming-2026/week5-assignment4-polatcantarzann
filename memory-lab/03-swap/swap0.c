#include <stdio.h>

// Function prototype
void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    
    // This call will fail to swap x and y in main
    swap(x, y);
    
    printf("x is %i, y is %i\n", x, y);

    return 0;
}

void swap(int a, int b)
{
    // TODO: Explain below why the swap doesn't work:
    // ANSWER: This swap fails because C uses "call by value". 
    // The function receives copies of x and y (named a and b), 
    // not the actual memory addresses of x and y. 
    // Any changes made to a and b only exist within the scope 
    // of the swap function and do not affect the original variables in main.

    int tmp = a;
    a = b;
    b = tmp;
}