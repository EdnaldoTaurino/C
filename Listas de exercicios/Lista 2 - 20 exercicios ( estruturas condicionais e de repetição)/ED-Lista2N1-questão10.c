/* FUN��O:
    Escreva um programa que receba tr�s n�meros inteiros como entrada e imprima, como sa�da, o maior n�mero recebido
*/

/* Autor : Ednaldo Taurino    
   Data  : 27/09/2023
*/

/*
    observa��es: adicionar digite zero para encerrar e limpar toda tela.
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
setlocale(LC_ALL, "Portuguese_BRazil");

    int n1,n2,n3, continuar = 1, retorno= -1;
    char letra;

    while (continuar){

        do{
            printf("Digite tr�s numeros: \nou digite '0 0 0' para encerrar o programa\n");
            retorno = scanf("%d %d %d", &n1,&n2,&n3);

            if (retorno == 0) {
            printf("Voc� n�o digitou um n�mero v�lido. \n");
            system("pause");
            system("cls");

            do {
                letra = getchar();  // limpa o buffer por que o c entende o ENTER e buga
            } while (letra != '\n');
        }
        } while (retorno == 0);
        
        

        if (n1 > n2 && n1 > n3)
        {
            printf("%d � o maior numero\n",n1 );
            printf("Digite 0 para encerrar o programa");
            system("pause");
            system("cls");
        }else if (n1 < n2 && n2 > n3)
        {
            printf("%d � o maior numero\n",n2 );
            system("pause");
            system("cls");
        }else if (n1 < n3 && n3 > n2)
        {
            printf("%d � o maior numero\n",n3 );
            system("pause");
            system("cls");
        }else if (n1 == 0 && n2 ==0 && n3 == 0)  // Finalizando o sistema
        {
            continuar = 0;
            printf("Obrigado por utilizar nosso sistema! At� a proxima.");
        
        }else{
            printf ("Os n�meros sao iguais.\n");
            system("pause");
            system("cls");
        }
        
    }

    return 0;
}