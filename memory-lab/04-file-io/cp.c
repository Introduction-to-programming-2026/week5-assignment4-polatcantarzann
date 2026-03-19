#include <stdio.h>

// Using unsigned char to represent a single byte (0-255)
typedef unsigned char BYTE;

int main(int argc, char *argv[])
{
    // Ensure the user provided exactly 2 file names (source and destination)
    if (argc != 3)
    {
        printf("Usage: ./cp source destination\n");
        return 1;
    }

    // TODO: Open argv[1] for reading in binary mode "rb"
    FILE *src = fopen(argv[1], "rb");
    if (src == NULL)
    {
        printf("Could not open source file.\n");
        return 1;
    }

    // TODO: Open argv[2] for writing in binary mode "wb"
    FILE *dst = fopen(argv[2], "wb");
    if (dst == NULL)
    {
        printf("Could not open destination file.\n");
        fclose(src); // Always close open files before exiting
        return 1;
    }

    BYTE b;

    // TODO: Loop — read one BYTE from src, write it to dst, until src is empty
    // fread returns the number of items successfully read (1 in this case)
    while (fread(&b, sizeof(b), 1, src) == 1)
    {
        fwrite(&b, sizeof(b), 1, dst);
    }

    // TODO: Close both files to save changes and free system resources
    fclose(src);
    fclose(dst);

    return 0;
}