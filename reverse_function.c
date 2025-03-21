/*
   (ENG) A very useful and simple string reversing function, with no use of any function from headers.
   (POR) Uma função bem simples e útil para inverter caracteres de uma cadeia de caracteres (string), sem uso de funções externas.

   OBS:
       (ENG) This can also be used to reverse a string of characters, depending on your situation.
       (POR) Essa função pode ser usada também para reverter uma cadeia de caracteres, dependendo da sua situação.
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
       (POR) Conta as posições da cadeia de caracteres */
    for (q=0; s[q] != '\0'; q++) {
        ;
    }
    /* (ENG) Decrements q by 1 so the function does not reverse the null character (\0)
       (POR) Subtrai q em 1 para que a função nao inverta o caractere nulo (\0) */
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
