#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    printf("\nTabuada de %d e %d:\n", numero1, numero2);

    // Loop para calcular e exibir a tabuada
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\t%d x %d = %d\n", numero1, i, numero1 * i, numero2, i, numero2 * i);
    }

    return 0;
}
