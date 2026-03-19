#include <stdio.h>
#include <string.h>

int main(void)
{
    // TODO: Open "phonebook.csv" in append mode "a"
    // "a" stands for append, which adds new data to the end of the file
    FILE *file = fopen("phonebook.csv", "a");

    // TODO: Check if fopen returned NULL and return 1 if so (Safety check)
    if (file == NULL)
    {
        return 1;
    }

    // Get name and number from the user using standard C
    char name[50];
    char number[50];

    printf("Name: ");
    scanf("%49s", name);
    printf("Number: ");
    scanf("%49s", number);

    // TODO: Write name and number to the file as "name,number\n"
    // This creates a Comma Separated Values (CSV) format
    fprintf(file, "%s,%s\n", name, number);

    // TODO: Close the file to ensure data is saved properly
    fclose(file);

    return 0;
}
