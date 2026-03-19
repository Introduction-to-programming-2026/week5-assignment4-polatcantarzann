#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    // Reserve space for input
    char input[100];
    printf("s: ");
    
    // Safety check for input reading
    if (scanf("%99s", input) != 1)
    {
        return 1;
    }

    char *s = input;

    // TODO: Check if s is NULL (In standard C, we check if input was successful)
    if (s == NULL)
    {
        return 1;
    }

    // TODO: Allocate memory for t
    char *t = malloc(strlen(s) + 1);

    // TODO: Check if t is NULL and return 1 if so (Memory safety)
    if (t == NULL)
    {
        return 1;
    }

    // TODO: Copy s into t using strcpy (The professional way)
    strcpy(t, s);

    // TODO: Capitalize t[0] only if the string is not empty
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print both strings
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // TODO: Free the memory you allocated to prevent memory leaks
    free(t);

    return 0;
}