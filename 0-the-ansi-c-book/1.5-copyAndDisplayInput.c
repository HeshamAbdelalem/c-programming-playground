#include <stdio.h>

int main()
{
    printf("HEY i copy everything you type and retype it, TRY ME\n");
    int c = getchar();

    while (c != EOF)
    // EOF is returned if the end of the file reached or an erro in encountered
    {
        // I tried to use printf function but it returned the ANSI not the letter itself
        putchar(c);
        c = getchar();
    }
}
