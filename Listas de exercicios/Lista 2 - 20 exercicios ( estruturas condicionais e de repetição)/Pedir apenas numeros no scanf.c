#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
setlocale(LC_ALL, "Portuguese_BRazil");
    int valor, retorno = -1; // Define valor de retorno em -1 que é um valor não taão usual
    char letra;

    do {
        printf("Digite um numero inteiro: ");
        retorno = scanf("%d", &valor);

        if (retorno == 0) {
            printf("Você não digitou um número válido. \n");
            system("pause");
            system("cls");
        
            do {
                letra = getchar();  // limpa o buffer por que o c entende o ENTER e buga
            } while (letra != '\n');
        }
    } while (retorno == 0);

    // continue o codigo aqui 

    return 0;
}

/*  COM ELSE

#include <stdio.h>

int main() {
    int valor, retorno;
    char letra;

    do {
        printf("Digite um numero inteiro: ");
        retorno = scanf("%d", &valor);

        if (retorno == 0) {
            printf("Você não digitou um número válido. Tente novamente.\n");

            // Limpa o buffer do teclado até encontrar uma quebra de linha
            while ((letra = getchar()) != '\n' && letra != EOF);
        } else {
            break; // Saia do loop quando a entrada for válida
        }
    } while (1);

    printf("O valor digitado: %d\n", valor);

    return 0;
}


*/