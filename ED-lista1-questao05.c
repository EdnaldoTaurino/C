
// Fun��o : Ler um valor em reais e exibir o equivalente em d�lares. A cota��o do dia � inserida pelo usu�rio
// Autor : Ednaldo Taurino
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float reais, dolarHoje, conversao;

    printf("==================== Vamos converter Reais em D�lares ====================\n");
    printf("Digite a cota��o do d�lar hoje: ");
    scanf("%f", &dolarHoje);
    printf("Digite quantos R$ voc� tem na carteira: ");
    scanf("%f", &reais);

    conversao = reais / dolarHoje;

    printf("A quantidade de reais %.2f R$ convertida em d�lares �: %.2f $\n", reais, conversao);

    return 0;
}