#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_WORDS 5

int main(void)
{
    // TODO: Declare an array of NUM_WORDS char* pointers
    char *words[NUM_WORDS];

    // -------------------------------------------------------
    // STEP 1 & 2: Read words and store copies in memory
    // -------------------------------------------------------
    for (int i = 0; i < NUM_WORDS; i++)
    {
        char input[100];
        printf("Enter word %i: ", i + 1);
        scanf("%99s", input);

        // TODO: Allocate memory for a copy of input (+1 for null terminator)
        words[i] = malloc(strlen(input) + 1);

        // TODO: Check if malloc returned NULL (Memory safety)
        if (words[i] == NULL)
        {
            printf("Memory error!\n");
            return 1;
        }

        // TODO: Copy input into words[i]
        strcpy(words[i], input);

        // TODO: Capitalize the first letter of words[i]
        if (strlen(words[i]) > 0)
        {
            words[i][0] = toupper(words[i][0]);
        }
    }

    // -------------------------------------------------------
    // STEP 3: Save all words to log.txt
    // -------------------------------------------------------

    // TODO: Open "log.txt" in write mode "w"
    FILE *file = fopen("log.txt", "w");

    // TODO: Check if fopen returned NULL
    if (file == NULL)
    {
        printf("Could not open file!\n");
        return 1;
    }

    // TODO: Write each word to the file followed by "\n"
    for (int i = 0; i < NUM_WORDS; i++)
    {
        fprintf(file, "%s\n", words[i]);
    }

    // TODO: Close the file to save changes
    fclose(file);

    printf("\nWords saved to log.txt!\n");

    // -------------------------------------------------------
    // STEP 4: Free all allocated memory (Prevent memory leaks)
    // -------------------------------------------------------

    // TODO: Free each word that was allocated with malloc
    for (int i = 0; i < NUM_WORDS; i++)
    {
        free(words[i]);
    }

    return 0;
}