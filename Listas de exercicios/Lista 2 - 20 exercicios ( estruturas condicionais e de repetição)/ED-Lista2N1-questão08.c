/* FUN��O:
A granja ?Frangos Gauss? possui um controle automatizado de cada frango da sua produ��o. 
No p� direito do frango h� um anel com um chip de identifica��o; no p� esquerdo s�o dois an�is 
para indicar o tipo de alimento que ele deve consumir. Sabendo que o anel com chip custa R$ 3,00 
e o anel de alimento custa R$ 2,50, fa�a um algoritmo para calcular o gasto total da granja 
para marcar todos os seus frangos. 
(a quantidade de frangos deve ser lida pelo usu�rio ? valide a quantidade, ou seja, n�o pode ser zero nem negativa)
*/

/* Autor : Ednaldo Taurino    
   Data  : 27/09/2023
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese_BRazil");

    float chipIdentificacao = 3.00, anelAlimento = 2.50, qtdFrangos, resultado;

    do
    {
        printf("Digite a quantidade de Frangos:\n");
        scanf("%f", &qtdFrangos);

        if (qtdFrangos == 0)
        {
            printf("A quantidade n�o pode ser zero\n");
            system("pause");
            system("cls");

        }
        
    } while (qtdFrangos <= 0);
        resultado = chipIdentificacao + (anelAlimento*2) * qtdFrangos;
        printf("O total que voc� ira gastar � de %.2f", resultado);
  
return 0;
}