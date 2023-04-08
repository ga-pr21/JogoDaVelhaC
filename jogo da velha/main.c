#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //variaveis de controle
    int l;
    int c;
    int linha;
    int coluna;
    int jogador;
    int ganhou;
    int jogadas;
    int opcao;
    char jogo[3][3];
    do
    {
        jogador = 1;
        ganhou = 0;
        jogadas = 0;
        l = 0;
        while (l < 3)
        {
            c = 0;
            while (c < 3)
            {
                jogo[l][c] = ' ';
                c++;
            }
            l++;
        }

    do
    {
        printf("\n\n\t 0   1   2\n\n");
        l = 0;
        while (l < 3)
        {
            c = 0;
            while (c < 3)
            {
                if (c == 0)
                {
                    printf("\t");
                }
                printf(" %c ", jogo[l][c]);
                if (c < 2)
                {
                    printf("|");
                }
                if (c == 2)
                {
                    printf(" %d", l);
                }
                c++;
            }
            if (l < 2)
            {
                printf("\n\t-----------");
            }
            printf("\n");
            l++;
        }

        do
        {
            printf("\nJOGADOR 1 = 0\nJOGADOR 2 = X\n");
            printf("\nJOGADOR %d: Digite a linha e a coluna que deseja jogar: ", jogador);
            scanf("%d%d", &linha, &coluna);
        }
        while(linha < 0 || linha > 2 || coluna < 0 || coluna > 2 ||
        jogo[linha][coluna] != ' ');
        
        // escrever os caracteres nos espaços
        if (jogador == 1)
        {
            jogo[linha][coluna] = '0';
            jogador++;
        }
        else
        {
            jogo[linha][coluna] = 'X';
            jogador = 1;
        }
        jogadas++;

        // linha jogador 1
        if (jogo[0][0] == '0' && jogo[0][1] == '0' && jogo[0][2] == '0' ||
            jogo[1][0] == '0' && jogo[1][1] == '0' && jogo[1][2] == '0' || 
            jogo[2][0] == '0' && jogo[2][1] == '0' && jogo[2][2] == '0')
        {
            printf("\nO jogador 1 ganhou\n");
            ganhou = 1;
        }
        // linha jogador 2
        if (jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X' || 
            jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X' || 
            jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X')
        {
            printf("\nO jogador 2 ganhou\n");
            ganhou = 1;
        }

        // coluna jogador 1
        if (jogo[0][0] == '0' && jogo[1][0] == '0' && jogo[2][0] == '0' || 
            jogo[0][1] == '0' && jogo[1][1] == '0' && jogo[2][1] == '0' || 
            jogo[0][2] == '0' && jogo[1][2] == '0' && jogo[2][2] == '0')
        {
            printf("\nO jogador 1 ganhou\n");
            ganhou = 1;
        }

        // coluna jogador 2
        if  (jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X' ||
            jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X' ||
            jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X')
        {
            printf("\nO jogaor 2 ganhou\n");
            ganhou = 1;
        }

        // diagonal jogador 1
        if (jogo[0][0] == '0' && jogo[1][1] == '0' && jogo[2][2] == '0' ||
            jogo[2][0] == '0' && jogo[1][1] == '0' && jogo[0][2] == '0')
        {
            printf("\nO jogador 1 ganhou\n");
            ganhou = 1;
        }

        if (jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X' ||
            jogo[2][0] == 'X' && jogo[1][1] == 'X' && jogo[0][2] == 'X')
        {
            printf("\nO jogador 2 ganhou\n");
            ganhou = 1;
        }
    }
    while(ganhou == 0 && jogadas < 9);

    // imprimir linhas do jogo
    printf("\n\n\t 0   1   2\n\n");
    l = 0;
    while (l < 3)
    {
        c = 0;
        while (c < 3)
        {
            if (c == 0)
            {
                printf("\t");
            }
            printf(" %c ", jogo[l][c]);
            if (c < 2)
            {
                printf("|");
            }
            if (c == 2)
            {
                printf(" %d", l);
            }
            c++;
        }
        if(l < 2)
        {
            printf("\n\t-----------");
        }
        printf("\n");
        l++;
    }

    if (ganhou == 0)
    {
        printf("\nO jogo finalizou sem ganhador!\n");
    }
    printf("\n Digite 1 para jogar novamente: \n");
    scanf("%d", &opcao);
    } 
    while(opcao == 1);
    return 0;
}