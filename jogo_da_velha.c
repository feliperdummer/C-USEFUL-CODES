#include <stdio.h>
#include <string.h>

#define Q 3
#define tamN 100

char VELHA[Q][Q];

void jogada(int indice) // Indice indica em qual jogada esta (Ex: 0 a 8)
{
    int l=0, c=0;
    printf("\n------------------------------\n");
    printf("\n Digite a linha (0 a 2): ");
    scanf("%d",&l);

    while (l<0 || l>2) {
        printf("\n Linha inexistente. Tente novamente: ");
        scanf("%d", &l);
    }

    printf("\n Digite a coluna (0 a 2): ");
    scanf("%d", &c);

    while (c<0 || c>2) {
        printf("\n Coluna inexistente. Tente novamente: ");
        printf("%d", &c);
    }

    while (VELHA[l][c] != ' ') {
        printf("\n Movimento invalido. Tente novamente: ");
        printf("\n Digite a linha: ");
        scanf("%d",&l);
        while (l<0 || l>2) {
            printf("\n Linha inexistente. Tente novamente: ");
            scanf("%d", &l);
        }
        printf("\n Digite a coluna: ");
        scanf("%d",&c);
        while (c<0 || c>2) {
            printf("\n Coluna inexistente. Tente novamente: ");
            scanf("%d", &c);
        }
    }

    if (indice%2==0) {
        VELHA[l][c] = 'X';
    }
    else
        VELHA[l][c] = 'O';
}

void printar_jogo()
{
    int i, j;
    printf("\n");
    for (i=0; i < Q; i++) {
        for (j=0; j < Q; j++) {
            printf(" %c ", VELHA[i][j]);
        }
        printf("\n\n");
    }
}

int ganhador()
{
    int i, j, ganhador=0;
    for (i=0; i < Q; i++) {
        if (VELHA[i][0] == VELHA[i][1] && VELHA[i][1] == VELHA[i][2]) {
            if (VELHA[i][0] == 'X') {
                printf("\n Jogador 1 ganhou! \n");
                ganhador += 1;
                break;
            }
            else if (VELHA[i][0] == 'O') {
                printf("\n Jogador 2 ganhou! \n");
                ganhador += 1;
                break;
            }
        }
        for (j=0; j < Q; j++) {
            if (VELHA[0][j] == VELHA[1][j] && VELHA[1][j] == VELHA[2][j]) {
                if (VELHA[0][j] == 'X') {
                    printf("\n Jogador 1 ganhou! \n");
                    ganhador += 1;
                    break;
                }
                else if (VELHA[0][j] == 'O') {
                    printf("\n Jogador 2 ganhou! \n");
                    ganhador += 1;
                    break;
                }
            }

            if (VELHA[0][0] == VELHA[1][1] && VELHA[1][1] == VELHA[2][2]) {
                if (VELHA[0][0] == 'X') {
                    printf("\n Jogador 1 ganhou! \n");
                    ganhador += 1;
                    break;
                }
                else if (VELHA[0][0] == 'O') {
                    printf("\n Jogador 2 ganhou! \n");
                    ganhador += 1;
                    break;
                }
            }

            if (VELHA[0][2] == VELHA[1][1] && VELHA[1][1] == VELHA[2][0]) {
                if (VELHA[0][2] == 'X') {
                    printf("\n Jogador 1 ganhou! \n");
                    ganhador += 1;
                    break;
                }
                else if (VELHA[0][2] == 'O') {
                    printf("\n Jogador 2 ganhou! \n");
                    ganhador += 1;
                    break;
                }
            }
        }
        if (ganhador) {
            break;
        }
    }

    return ganhador;
}

int main()
{
    int i, j;
    for (i=0; i < Q; i++) {
        for (j=0; j < Q; j++) {
            VELHA[i][j] = ' ';
        }
    }

    printf("\n Jogador 1 (X) comeca! \n");

    int indice=0, resultado=0;
    while (indice < 9) {
        jogada(indice);
        printar_jogo();
        resultado = ganhador();
        if (resultado==1) {
            break;
        }
        else
            indice++;
    }

    if (indice==9) {
        printf("\n NAO HOUVE GANHADOR. DEU VELHA OTARIOS! \n");
    }

    return 0;
}
