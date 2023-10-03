/* FUN��O:
  Elabore um programa que, dada a idade de um nadador, classifique-o em uma das seguintes categorias:
? Infantil A = 4 - 7 anos
? Infantil B = 8 - 9 anos
? Juvenil A = 10- 12 anos
? Juvenil B = 13 - 17 anos
? S�nior = 18 - 25 anos
? Apresentar mensagem ?idade fora da faixa et�ria? quando for outro ano n�o contemplado
*/

/* Autor : Ednaldo Taurino    
   Data  : 27/09/2023
*/


#include <stdio.h>
#include <locale.h>

int main(){

setlocale(LC_ALL, "Portuguese_BRazil");
int idade;

    printf("Digite sua idade e vamos classifica-lo em uma das categorias: \n");
    scanf("%d", &idade);

    if (idade >= 4 && idade <= 7){
        printf("\nA Categoria � INFANTIL A!\n");
    }else if (idade >= 8 && idade <= 9)
    {
        printf ("A Categoria � INFANTIL B!");

    }else if(idade >= 10 && idade <= 12){
        printf ("A Categoria � JUVENIL A!");
    }else if (idade >= 13 && idade <= 17){
        printf ("A Categoria � JUVENIL B!");
        
    }else if(idade >= 18 && idade <= 25){
        printf ("A Categoria � S�NIOR!");
    }else{
        printf("Idade fora da faixa et�ria");
    }
    

    return 0;
}