#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("missing command-line argument\n");
        return 1;
    }
    int key = atoi(argv[1]);


    string text = get_string("plaintext: ");

    int length = strlen(text);
    
    printf("cipher Text: ");

    for (int i = 0; i < length; i++)
    {
        int scramble = text[i] + key;
        printf("%c", scramble);

    }
    printf("\n");







    return 0;
}
