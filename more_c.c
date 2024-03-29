// C program to show contents of a file with breaks
#include <stdio.h>

// This function displays a given file with breaks of
// given line numbers.
void show(char *fname, int n)
{
    // Open given file
    FILE *fp = fopen(fname, "r");
    int curr_lines = 0, ch;

    // If not able to open file
    if (fp == NULL)
    {
        printf("File doesn't exist\n");
        return;
    }

    // Read contents of file
    while ((ch = fgetc(fp)) != EOF)
    {
        // print current character
        putchar(ch);

        // If current character is a new line character,
        // then increment count of current lines
        if (ch == '\n')
        {
            curr_lines++;

            // If count of current lines reaches limit, then
            // wait for user to enter a key
            if (curr_lines == n)
            {
                curr_lines = 0;
                getchar();
            }
        }
    }

    fclose(fp);
}

// Driver program to test above function
int main()
{
    char nom[150];
    printf("entrer le nom de fichier � consulter : ");
    gets(nom);
    int n = 25;
    show(nom, n);
    return 0;
}
