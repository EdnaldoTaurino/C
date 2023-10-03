/* FUN��O:
  Escrever um algoritmo que l� o n�mero de identifica��o, as 03 notas obtidas por um aluno
nas 03 provas. Calcule a m�dia das provas que fazem parte da avalia��o  (ME)  e calcular (e
exibir) a m�dia de aproveitamento, usando a f�rmula: MA= (Nota1+Nota2�2+Nota3�3+ME)/7 A atribui��o de conceitos obedece a tabela abaixo:

M�dia de Aproveitamento Conceito
9,0 A
7,5 e < 9,0 B
6,0 e < 7,5 C
4,0 e < 6,0 D
< 4,0 E
*/

/* Autor : Ednaldo Taurino    
   Data  : 27/09/2023
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese_BRazil");

    float nota1, nota2, nota3, ma, media;

    printf("Vamos calcular a m�dias das suas notas: \n");
    printf("Digite suas notas na sequencia nota 1, 2 e nota 3: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 +nota3)/ 3;
    ma = (nota1 + (nota2 * 2) + (nota3 * 3) + media) / 7;

    if (ma >= 9)
    {
        printf("\nA sua M�dia � %.2f\nParabens voc� foi APROVADO! conceito A\n", ma );
        system("pause");
    }else if (ma >= 7.5 && ma <= 9.0){

        printf ("A sua M�dia � %.2f\nVoce est� no conceito B\n", ma );
        system("pause");

    }else if (ma >= 6 && ma <= 7.5){
        printf ("A sua M�dia � %.2f\nVoce est� em conceito C\n", ma ); 

    }else if(ma >= 4 && ma <= 6){
        printf("A sua M�dia � %.2f\nVoce est� em conceito D\n", ma );

    }else{
        printf("A sua M�dia � %.2f\nVoce est� REPROVADO!\n", ma );
    }
      
    
return 0;
}