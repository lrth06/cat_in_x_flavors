#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("\033[31m");
        printf("ERROR: no filename entered! Please enter a filename to read!\n");
    }
    if (argc == 2)
    {
        char *filename = argv[1];
        FILE *fp = fopen(filename, "r");

        if (fp == NULL)
        {
            printf("\033[31m");
            printf("Error: could not open file %s\n", filename);
            return 1;
        }

        char ch;
        while ((ch = fgetc(fp)) != EOF)
            putchar(ch);

        fclose(fp);
    }

    return 0;
}