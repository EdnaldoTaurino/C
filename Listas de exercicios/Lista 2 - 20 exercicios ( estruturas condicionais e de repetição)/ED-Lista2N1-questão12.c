/* FUNÇÃO:
    Considere uma disciplina que adota o seguinte critério de aprovação: os alunos fazem duas provas (P1 e P2) iniciais; 
    se a média das provas for maior ou igual a 5.0, e se nenhuma das notas for inferior a 3.0, o aluno passa direto. 
    Caso contrário, o aluno faz uma terceira prova (P3) e a média é calculada considera-se a terceira nota e a maior das notas entre P1 e P2.
    Neste caso, o aluno é aprovado se a média final for maior ou igual a 5.0 Escreva um programa completo que leia inicialmente as duas notas de um aluno, fornecidas pelo
    usuário via teclado. Se as notas não forem suficientes para o aluno passar direto, o programa deve capturar a nota da terceira prova, também fornecida via teclado. 
    Como saída, o programa deve imprimir a média final do aluno seguida da mensagem ?Aprovado? ou ?Reprovado?, conforme o critério descrito.
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

    float p1, p2, p3;
    float media;

    printf("Digite a nota da P1: ");
    scanf("%f", &p1);

    printf("Digite a nota da P2: ");
    scanf("%f", &p2);

    if (p1 >= 3.0 && p2 >= 3.0 && (p1 + p2) / 2.0 >= 5.0) {
        printf("Aprovado\n");
    } else {
        printf("Digite a nota da P3: ");
        scanf("%f", &p3);

        float maior_nota;
        if (p1 > p2) {
            maior_nota = p1;
        } else {
            maior_nota = p2;
        }

        media = (p3 + maior_nota) / 2.0;

        if (media >= 5.0) {
            printf("Aprovado\n");
        } else {
            printf("Reprovado\n");
        }
    }

    return 0;
}
