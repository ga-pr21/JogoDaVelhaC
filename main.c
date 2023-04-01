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
        printf("\nO jogador 2 ganhou\n")
    }
    // imprimir linhas do jogo
}