/* FUN��O:
    Escreva um programa que implemente o jogo conhecido como pedra, papel, tesoura. Neste jogo, o usu�rio e o computador escolhem entre pedra, papel ou tesoura. 
    Sabendo que a pedra ganha de tesoura, papel ganha de pedra e tesoura ganha de papel, exiba na tela o ganhador: usu�rio ou computador. 
    Para esta implementa��o use n�meros aleat�rios e assuma que o n�mero 0 representa pedra, 1 representa papel e 2 representa tesoura. OBS:
    No blackboard tem um documento explicando como gerar n�meros aleat�rios
*/

/* Autor : Ednaldo Taurino    
   Data  : 27/09/2023
*/

/*
    observa��es: adicionar melhorias;
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");

    int usuario, computador;

    // Inicializa o gerador de n�meros aleat�rios com base no tempo atual
    srand(time(NULL));

    // Gere uma escolha aleat�ria para o computador (0 para pedra, 1 para papel, 2 para tesoura)
    computador = rand() % 3;

    do {
        // Solicite a escolha do usu�rio
        printf("Escolha uma op��o:\n");
        printf("0 - Pedra\n");
        printf("1 - Papel\n");
        printf("2 - Tesoura\n");
        scanf("%d", &usuario);

        // Verifique se a escolha do usu�rio � v�lida
        if (usuario < 0 || usuario > 2) {
            printf("Escolha inv�lida. Por favor, escolha 0, 1 ou 2.\n");
            system("pause");
            system("cls");
        }
    } while (usuario < 0 || usuario > 2);

    // Exiba as escolhas do usu�rio e do computador
    printf("Usu�rio escolheu: ");
    switch (usuario) {
        case 0:
            printf("Pedra\n");
            break;
        case 1:
            printf("Papel\n");
            break;
        case 2:
            printf("Tesoura\n");
            break;
    }

    printf("Computador escolheu: ");
    switch (computador) {
        case 0:
            printf("Pedra\n");
            break;
        case 1:
            printf("Papel\n");
            break;
        case 2:
            printf("Tesoura\n");
            break;
    }

    // Determine o vencedor
    if (usuario == computador) {
        printf("Empate!\n");
    } else if ((usuario == 0 && computador == 2) ||
               (usuario == 1 && computador == 0) ||
               (usuario == 2 && computador == 1)) {
        printf("Usu�rio ganhou!\n");
    } else {
        printf("Computador ganhou!\n");
    }

    return 0;
}