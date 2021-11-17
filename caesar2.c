/**
 *  Decrypt
 *
    [pset2, задание #2]
    1. Ввести ключ
    3. Расшифровать текст
    4. Вывести на экран расшифрованное сообщение
*
**/
#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

//1.Вводим ключ
int main(int argc, string argv[])
{
    //проверка введен ли ключ
    if (argc <= 1) {
        printf("don't work, please, give the key.ヽ(‵﹏′)ノ.\n");
        exit(0);
    }
    //проверка на валидность ключа (положительное ли это число)
    int k = atoi(argv[1]);
    if (k == 0 || k < 0)
    {
        printf("don't work, give the positive integer.ヽ(‵﹏′)ノ.\n");
        exit(0);
    }
    //2.Вводим текст который необходимо разшифровать
    string getstring = get_string("Please, give the text: ");
    //3.Разшифровали текст
    for (int i = 0, n = strlen(getstring); i < n; i++)
    {
        int letter = getstring[i];
        int result = letter - k;
        printf("Your text %c: %i | Encrypted %c: %i\n",letter, letter, result, result);
    }
    return printf("The work is done\n");
}
