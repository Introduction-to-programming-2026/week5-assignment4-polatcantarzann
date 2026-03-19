#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Reserve space for the input string
    char s[50];
    
    printf("s: ");
    scanf("%s", s);

    // This does NOT copy the string!
    // It only copies the address (pointer) — s and t now point to the same memory.
    // ANSWER: In C, a string is just a pointer to the first character. 
    // When we say 't = s', we are only copying the memory address, 
    // not the actual characters. Therefore, both variables point to 
    // the same location in RAM, and changing one affects the other.
    char *t = s;

    // Capitalize first letter of t (if it's a letter)
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    // Print both — you will see they are BOTH capitalized!
    printf("s: %s\n", s);
    printf("t: %s\n", t);

    return 0;
}