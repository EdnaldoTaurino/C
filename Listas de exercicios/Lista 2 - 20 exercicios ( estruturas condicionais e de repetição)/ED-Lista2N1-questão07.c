/* FUNÇÃO:
  Escrever um algoritmo que lê o número de identificação, as 03 notas obtidas por um aluno
nas 03 provas. Calcule a média das provas que fazem parte da avaliação  (ME)  e calcular (e
exibir) a média de aproveitamento, usando a fórmula: MA= (Nota1+Nota2×2+Nota3×3+ME)/7 A atribuição de conceitos obedece a tabela abaixo:

Média de Aproveitamento Conceito
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

    printf("Vamos calcular a médias das suas notas: \n");
    printf("Digite suas notas na sequencia nota 1, 2 e nota 3: \n");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    media = (nota1 + nota2 +nota3)/ 3;
    ma = (nota1 + (nota2 * 2) + (nota3 * 3) + media) / 7;

    if (ma >= 9)
    {
        printf("\nA sua Média é %.2f\nParabens você foi APROVADO! conceito A\n", ma );
        system("pause");
    }else if (ma >= 7.5 && ma <= 9.0){

        printf ("A sua Média é %.2f\nVoce está no conceito B\n", ma );
        system("pause");

    }else if (ma >= 6 && ma <= 7.5){
        printf ("A sua Média é %.2f\nVoce está em conceito C\n", ma ); 

    }else if(ma >= 4 && ma <= 6){
        printf("A sua Média é %.2f\nVoce está em conceito D\n", ma );

    }else{
        printf("A sua Média é %.2f\nVoce está REPROVADO!\n", ma );
    }
      
    
return 0;
}