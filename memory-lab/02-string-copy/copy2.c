#include <ctype.h>
#include <stdio.h>
#include <stdlib.h> // Required for malloc and free
#include <string.h>

int main(void)
{
    // Reserve space for the input string
    char s[50];
    printf("s: ");
    scanf("%s", s);

    // TODO: Allocate memory for t — same length as s, plus 1 for the '\0'
    // We request a new block of memory from the heap
    char *t = malloc(strlen(s) + 1);

    // Safety check: Ensure malloc didn't return NULL (out of memory)
    if (t == NULL)
    {
        return 1;
    }

    // TODO: Copy each character from s into t, including the null terminator '\0'
    for (int i = 0, n = strlen(s); i <= n; i++)
    {
        t[i] = s[i];
    }

    // TODO: Capitalize the first letter of t only
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print both — now only t should be capitalized
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // IMPORTANT: Free the allocated memory to prevent memory leaks
    free(t);

    return 0;
}