
// Função : Ler um valor em reais e exibir o equivalente em dólares. A cotação do dia é inserida pelo usuário
// Autor : Ednaldo Taurino
// Data  : 23/09/2023

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    float reais, dolarHoje, conversao;

    printf("==================== Vamos converter Reais em Dólares ====================\n");
    printf("Digite a cotação do dólar hoje: ");
    scanf("%f", &dolarHoje);
    printf("Digite quantos R$ você tem na carteira: ");
    scanf("%f", &reais);

    conversao = reais / dolarHoje;

    printf("A quantidade de reais %.2f R$ convertida em dólares é: %.2f $\n", reais, conversao);

    return 0;
}