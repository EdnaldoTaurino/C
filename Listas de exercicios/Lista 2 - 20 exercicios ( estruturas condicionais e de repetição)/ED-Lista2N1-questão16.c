/* FUNÇÃO:
    Escreva um programa para fazer conversões entre diferentes unidades. As opções do
    programa devem ser exibidas em forma de um menu apresentado na tela, em dois níveis.
    No primeiro nível, o usuário escolhe a classe de unidade; no segundo nível o usuário
    escolhe a conversão que deseja, fornecendo então, o valor a ser convertido. Por fim, o
    programa exibe o valor resultante na tela. As opções apresentadas no menu são: 
    peso:
    I libra -> Quilograma
    II. quilograma -> Libra
    III. Onça -> grama
    IV. Grama ->Onça
    ---------------------------
    volume:
    I Galão -> Litro
    II Litro -> Galão
    III. Onça -> Mililitro
    IV Mililitro -> Onça.

    ----------------------------
    Comprimento
    I. Milha -> Quilômetro
    II. Quilômetro -> milha
    III Jardas -> Metro
    IV Metro -> Jardas
*/

/* Autor : Ednaldo Taurino    
   Data  : 27/09/2023
*/

/*
    observações: adicionar melhorias;
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
setlocale(LC_ALL, "Portuguese_BRazil");

    int escolha_classe, escolha_conversao;
    double valor;

    printf("Escolha uma classe de unidade:\n");
    printf("1 - Peso\n");
    printf("2 - Volume\n");
    printf("3 - Comprimento\n");
    scanf("%d", &escolha_classe);

    switch (escolha_classe) {
        case 1: // Peso
            printf("Escolha uma conversão de peso:\n");
            printf("1 - Libra para Quilograma\n");
            printf("2 - Quilograma para Libra\n");
            printf("3 - Onça para Grama\n");
            printf("4 - Grama para Onça\n");
            scanf("%d", &escolha_conversao);

            printf("Digite o valor a ser convertido: ");
            scanf("%lf", &valor);

            switch (escolha_conversao) {
                case 1: // Libra para Quilograma
                    valor *= 0.453592;
                    printf("Resultado: %.2lf quilogramas\n", valor);
                    break;
                case 2: // Quilograma para Libra
                    valor *= 2.20462;
                    printf("Resultado: %.2lf libras\n", valor);
                    break;
                case 3: // Onça para Grama
                    valor *= 28.3495;
                    printf("Resultado: %.2lf gramas\n", valor);
                    break;
                case 4: // Grama para Onça
                    valor *= 0.035274;
                    printf("Resultado: %.2lf onças\n", valor);
                    break;
                default:
                    printf("Opção de conversão inválida.\n");
                    break;
            }
            break;
        case 2: // Volume
            printf("Escolha uma conversão de volume:\n");
            printf("1 - Galão para Litro\n");
            printf("2 - Litro para Galão\n");
            printf("3 - Onça para Mililitro\n");
            printf("4 - Mililitro para Onça\n");
            scanf("%d", &escolha_conversao);

            printf("Digite o valor a ser convertido: ");
            scanf("%lf", &valor);

            switch (escolha_conversao) {
                case 1: // Galão para Litro
                    valor *= 3.78541;
                    printf("Resultado: %.2lf litros\n", valor);
                    break;
                case 2: // Litro para Galão
                    valor *= 0.264172;
                    printf("Resultado: %.2lf galões\n", valor);
                    break;
                case 3: // Onça para Mililitro
                    valor *= 29.5735;
                    printf("Resultado: %.2lf mililitros\n", valor);
                    break;
                case 4: // Mililitro para Onça
                    valor *= 0.033814;
                    printf("Resultado: %.2lf onças\n", valor);
                    break;
                default:
                    printf("Opção de conversão inválida.\n");
                    break;
            }
            break;
        case 3: // Comprimento
            printf("Escolha uma conversão de comprimento:\n");
            printf("1 - Milha para Quilômetro\n");
            printf("2 - Quilômetro para Milha\n");
            printf("3 - Jardas para Metro\n");
            printf("4 - Metro para Jardas\n");
            scanf("%d", &escolha_conversao);

            printf("Digite o valor a ser convertido: ");
            scanf("%lf", &valor);

            switch (escolha_conversao) {
                case 1: // Milha para Quilômetro
                    valor *= 1.60934;
                    printf("Resultado: %.2lf quilômetros\n", valor);
                    break;
                case 2: // Quilômetro para Milha
                    valor *= 0.621371;
                    printf("Resultado: %.2lf milhas\n", valor);
                    break;
                case 3: // Jardas para Metro
                    valor *= 0.9144;
                    printf("Resultado: %.2lf metros\n", valor);
                    break;
                case 4: // Metro para Jardas
                    valor *= 1.09361;
                    printf("Resultado: %.2lf jardas\n", valor);
                    break;
                default:
                    printf("Opção de conversão inválida.\n");
                    break;
            }
            break;
        default:
            printf("Classe de unidade inválida.\n");
            break;
    }

    return 0;
}