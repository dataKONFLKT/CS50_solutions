/******************************
 * 
 *  caesar.c
 *  
 *  DataKonflkt
 *  Harvard Computer Science 50
 *  Week two Problem Set
 *
 *	Shifts each letter by some number of places, creathing a ciphertext.
 *
 ******************************/
#include <cs50.h>
#include <string.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // Check if argc is correct (2) and if argv[1] is a number, otherwise show proper input
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
    for (int n = 0; n < strlen(argv[1]); n++)
    {
        if (!(atoi(argv[1]) > '9' || atoi(argv[1]) < '0'))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    // Cast argv1 to int and intialize int 'key' with it,
    // Get string text from user to encipher
    int key = atoi(argv[1]);
    string text = get_string("plaintext: ");
    
    // Start with 'ciphertext'
    printf("ciphertext: ");
    
    // Iterate throught text
    for (int i = 0, lenght = strlen(text); i < lenght; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            text[i] = (text[i] + key - 'a') % 26 + 'a';
            printf("%c", text[i]);
        }
        else if (text[i] >= 'A' && text[i] <= 'Z')
        {
            text[i] = (text[i] + key - 'A') % 26 + 'A';
            printf("%c", text[i]);
        }
        else {printf("%c", text[i]);}
    }
    // Print next row and return 0
    printf("\n");
    return 0;
}