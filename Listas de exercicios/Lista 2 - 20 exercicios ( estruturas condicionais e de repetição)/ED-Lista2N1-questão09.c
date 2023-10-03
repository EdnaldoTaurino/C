/* FUN��O:
    Ler dois n�meros inteiros e calcular quantos % maior um n�mero � em rela��o a outro (ou
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

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);

    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        porcentagem = ((float)num1 / num2 - 1) * 100;
        printf("O n�mero %d � %.2f%% maior do que o n�mero %d.\n", num1, porcentagem, num2);
    } else if (num1 < num2) {
        porcentagem = ((float)num2 / num1 - 1) * 100;
        printf("O n�mero %d � %.2f%% menor do que o n�mero %d.\n", num1, porcentagem, num2);
    } else {
        printf("Os n�meros s�o iguais.\n");
    }

    return 0;
}