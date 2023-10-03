/* FUNÇÃO:
   Leia uma data e determine se ela é válida. Ou seja, verifique se o mês está entre 1 e 12, e se o dia existe naquele mês. 
   Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não bissextos.
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
    int dia, mes, ano;
    
    printf("Digite uma data no formato dia/mes/ano: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Verifica se o mês está dentro do intervalo válido (1 a 12)
    if (mes < 1 || mes > 12) {
        printf("Data inválida.\n");
        return 0;
    }

    // Verifica se o dia está dentro do intervalo válido para o mês
    if (dia < 1 || dia > diasPorMes[mes]) {
        printf("Data inválida.\n");
        return 0;
    }

    // Verifica se o ano é bissexto
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        if (mes == 2 && dia > 29) {
            printf("Data inválida para ano bissexto.\n");
            return 0;
        }
    } else {
        if (mes == 2 && dia > 28) {
            printf("Data inválida para ano não bissexto.\n");
            return 0;
        }
    }

    printf("Data válida.\n");

    return 0;
}
