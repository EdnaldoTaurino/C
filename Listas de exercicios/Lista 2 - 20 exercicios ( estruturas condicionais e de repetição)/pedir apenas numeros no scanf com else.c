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
