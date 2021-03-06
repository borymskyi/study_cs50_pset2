/**
 *
   1.   Ввести ключ для шифровки (на вход один аргумент из командной строки, состоящее изи англ букв = k).
   .    если ввели больше одного аргумента или в аргументе нету входящих в алфавит символов = exit(1).
   2.   Ввести текст для шифровки = p.
   3.   Зашифровать текст p используя ключ k.
   .    вывести зашифрованный текст.
   4.   Вернуть(0).
   
   ./vigenere ohai
    This is CS50
    Hoia wz CA50
*
**/

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[])
{

    // ensure proper usage
    if (argc != 2)
    {
        printf("Usage: ./vigenere <keyword>\n");
        return 1;
    }
    int m = strlen(argv[1]);

    // check if one command-line argument contains any non-alphabetical character
    for (int i = 0; i < m; i++)
    {
        if (isalpha( argv[1][i]) == false)
        {
            printf("Keyword must only contain letters A-Z and a-z\n");
            return 1;
        }
    }

    // get the message from the user
    string text = get_string("");
    for (int i = 0, j = 0, result = 0, n = strlen(text); i < n; i++)
    {
        char letter = text[i];

        // if the letter proves to be a non-alphabetical character, wait to apply that jth character
        // of key to the next alphabetical character in text not yet advance to the next character in key
        char key = argv[1][(j) % m];

        // as for the characters in key, treat A and a as 0, B and b as 1, … , and Z and z as 25
        if (isupper(key))
        {
           key -= 65;
        }
        else if (islower(key))
        {
           key -= 97;
        }
        if (isupper(letter))
        {
            result = (letter + key - 65) % 26 + 65;
            j++;
        }
        else if (islower(letter))
        {
           result = (letter  + key - 97) % 26 + 97;
           j++;
        }

        // if the character in text is not a letter, output this character unchanged
        else
        {
           result = letter;
        }
           printf("%c", result);
    }
    printf("\n");
}
