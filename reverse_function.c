/*
   (ENG) A very useful and simple string reversing function, with no use of any function from headers.
   (POR) Uma fun��o bem simples e �til para inverter caracteres de uma cadeia de caracteres (string), sem uso de fun��es externas.

   OBS:
       (ENG) This can also be used to reverse a string of characters, depending on your situation.
       (POR) Essa fun��o pode ser usada tamb�m para reverter uma cadeia de caracteres, dependendo da sua situa��o.
*/

#include <stdio.h>

void invert(char s[]);

int main()
{
    char s[] = "Hello World!";

    printf(" (ENG) Original string: %s\n", s);
    printf(" (POR) Cadeia original: %s\n\n", s);

    invert(s);

    printf(" (ENG) Inverted string: %s\n", s);
    printf(" (POR) Cadeia invertida: %s\n", s);

    return 0;
}

void invert(char s[])
{
    int q;
    /* (ENG) Counts the positions of the string s
       (POR) Conta as posi��es da cadeia de caracteres */
    for (q=0; s[q] != '\0'; q++) {
        ;
    }
    /* (ENG) Decrements q by 1 so the function does not reverse the null character (\0)
       (POR) Subtrai q em 1 para que a fun��o nao inverta o caractere nulo (\0) */
    --q;

    int i;
    char temp;
    /* (ENG) Inverts the string s
       (POR) Inverte a cadeia de caracteres s */
    for (i=0; i <= (q/2); i++) {
        temp = s[i];
        s[i] = s[q-i];
        s[q-i] = temp;
    }
}
