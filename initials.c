/*
    Запрашивает имя пльзователя
    Выводит первые буквы имени и фамилии в верхнем регистре без пробелов, точек и прочих знаков.
    Результат:
    Zamyla Chan
    ZC
*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int c = 0;
int spaces = 0;

 int main(void)
{
    string name = get_string("");
    int n = strlen(name);

   // prints the first letter
    printf("%c", toupper(name[0]));

    // iterate through 'name' looking for spaces + print the first
    // letter after a space
    for (int j = 0; j < n; j++)
    {
        if (name[j] == ' ')
        {
            printf("%c", toupper(name[j+1]));
        }
    }

   printf("\n");
}
