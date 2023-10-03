/* FUNÇÃO:
    Ler dois números inteiros e calcular quantos % maior um número é em relação a outro (ou
    menor, se for o caso).
*/

/* Autor : Ednaldo Taurino    
   Data  : 27/09/2023
*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_BRazil");

 int num1, num2;
    float porcentagem;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        porcentagem = ((float)num1 / num2 - 1) * 100;
        printf("O número %d é %.2f%% maior do que o número %d.\n", num1, porcentagem, num2);
    } else if (num1 < num2) {
        porcentagem = ((float)num2 / num1 - 1) * 100;
        printf("O número %d é %.2f%% menor do que o número %d.\n", num1, porcentagem, num2);
    } else {
        printf("Os números são iguais.\n");
    }

    return 0;
}