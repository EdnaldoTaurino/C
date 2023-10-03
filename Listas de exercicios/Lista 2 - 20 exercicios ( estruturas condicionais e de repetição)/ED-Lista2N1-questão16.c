/* FUN��O:
    Escreva um programa para fazer convers�es entre diferentes unidades. As op��es do
    programa devem ser exibidas em forma de um menu apresentado na tela, em dois n�veis.
    No primeiro n�vel, o usu�rio escolhe a classe de unidade; no segundo n�vel o usu�rio
    escolhe a convers�o que deseja, fornecendo ent�o, o valor a ser convertido. Por fim, o
    programa exibe o valor resultante na tela. As op��es apresentadas no menu s�o: 
    peso:
    I libra -> Quilograma
    II. quilograma -> Libra
    III. On�a -> grama
    IV. Grama ->On�a
    ---------------------------
    volume:
    I Gal�o -> Litro
    II Litro -> Gal�o
    III. On�a -> Mililitro
    IV Mililitro -> On�a.

    ----------------------------
    Comprimento
    I. Milha -> Quil�metro
    II. Quil�metro -> milha
    III Jardas -> Metro
    IV Metro -> Jardas
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
            printf("Escolha uma convers�o de peso:\n");
            printf("1 - Libra para Quilograma\n");
            printf("2 - Quilograma para Libra\n");
            printf("3 - On�a para Grama\n");
            printf("4 - Grama para On�a\n");
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
                case 3: // On�a para Grama
                    valor *= 28.3495;
                    printf("Resultado: %.2lf gramas\n", valor);
                    break;
                case 4: // Grama para On�a
                    valor *= 0.035274;
                    printf("Resultado: %.2lf on�as\n", valor);
                    break;
                default:
                    printf("Op��o de convers�o inv�lida.\n");
                    break;
            }
            break;
        case 2: // Volume
            printf("Escolha uma convers�o de volume:\n");
            printf("1 - Gal�o para Litro\n");
            printf("2 - Litro para Gal�o\n");
            printf("3 - On�a para Mililitro\n");
            printf("4 - Mililitro para On�a\n");
            scanf("%d", &escolha_conversao);

            printf("Digite o valor a ser convertido: ");
            scanf("%lf", &valor);

            switch (escolha_conversao) {
                case 1: // Gal�o para Litro
                    valor *= 3.78541;
                    printf("Resultado: %.2lf litros\n", valor);
                    break;
                case 2: // Litro para Gal�o
                    valor *= 0.264172;
                    printf("Resultado: %.2lf gal�es\n", valor);
                    break;
                case 3: // On�a para Mililitro
                    valor *= 29.5735;
                    printf("Resultado: %.2lf mililitros\n", valor);
                    break;
                case 4: // Mililitro para On�a
                    valor *= 0.033814;
                    printf("Resultado: %.2lf on�as\n", valor);
                    break;
                default:
                    printf("Op��o de convers�o inv�lida.\n");
                    break;
            }
            break;
        case 3: // Comprimento
            printf("Escolha uma convers�o de comprimento:\n");
            printf("1 - Milha para Quil�metro\n");
            printf("2 - Quil�metro para Milha\n");
            printf("3 - Jardas para Metro\n");
            printf("4 - Metro para Jardas\n");
            scanf("%d", &escolha_conversao);

            printf("Digite o valor a ser convertido: ");
            scanf("%lf", &valor);

            switch (escolha_conversao) {
                case 1: // Milha para Quil�metro
                    valor *= 1.60934;
                    printf("Resultado: %.2lf quil�metros\n", valor);
                    break;
                case 2: // Quil�metro para Milha
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
                    printf("Op��o de convers�o inv�lida.\n");
                    break;
            }
            break;
        default:
            printf("Classe de unidade inv�lida.\n");
            break;
    }

    return 0;
}