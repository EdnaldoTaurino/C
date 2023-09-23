// Ler dois números e informar o dividendo, o divisor, o quociente e o resto do primeiro pelo
// segundo e do segundo pelo primeiro

// Autor : Ednaldo Taurino
// Data  : 22/09/2023
// Observações ""

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int numero1, numero2;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero2);

    int dividendo = numero1;
    int divisor = numero2;
    int quociente = numero1 / numero2;
    int resto = numero1 % numero2;

    
    printf("\nPara %d dividido por %d:\n", dividendo, divisor);
    printf("Dividendo: %d\n", dividendo);
    printf("Divisor: %d\n", divisor);
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n\n", resto);

    
    dividendo = numero2;
    divisor = numero1;
    quociente = numero2 / numero1;
    resto = numero2 % numero1;

    printf("Para %d dividido por %d:\n", dividendo, divisor);
    printf("Dividendo: %d\n", dividendo);
    printf("Divisor: %d\n", divisor);
    printf("Quociente: %d\n", quociente);
    printf("Resto: %d\n", resto);

    return 0;
}
