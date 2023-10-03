/* FUN��O:
    Considere uma disciplina que adota o seguinte crit�rio de aprova��o: os alunos fazem duas provas (P1 e P2) iniciais; 
    se a m�dia das provas for maior ou igual a 5.0, e se nenhuma das notas for inferior a 3.0, o aluno passa direto. 
    Caso contr�rio, o aluno faz uma terceira prova (P3) e a m�dia � calculada considera-se a terceira nota e a maior das notas entre P1 e P2.
    Neste caso, o aluno � aprovado se a m�dia final for maior ou igual a 5.0 Escreva um programa completo que leia inicialmente as duas notas de um aluno, fornecidas pelo
    usu�rio via teclado. Se as notas n�o forem suficientes para o aluno passar direto, o programa deve capturar a nota da terceira prova, tamb�m fornecida via teclado. 
    Como sa�da, o programa deve imprimir a m�dia final do aluno seguida da mensagem ?Aprovado? ou ?Reprovado?, conforme o crit�rio descrito.
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
