/* FUN��O:
   Leia uma data e determine se ela � v�lida. Ou seja, verifique se o m�s est� entre 1 e 12, e se o dia existe naquele m�s. 
   Note que Fevereiro tem 29 dias em anos bissextos, e 28 dias em anos n�o bissextos.
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
    int dia, mes, ano;
    
    printf("Digite uma data no formato dia/mes/ano: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    int diasPorMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Verifica se o m�s est� dentro do intervalo v�lido (1 a 12)
    if (mes < 1 || mes > 12) {
        printf("Data inv�lida.\n");
        return 0;
    }

    // Verifica se o dia est� dentro do intervalo v�lido para o m�s
    if (dia < 1 || dia > diasPorMes[mes]) {
        printf("Data inv�lida.\n");
        return 0;
    }

    // Verifica se o ano � bissexto
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        if (mes == 2 && dia > 29) {
            printf("Data inv�lida para ano bissexto.\n");
            return 0;
        }
    } else {
        if (mes == 2 && dia > 28) {
            printf("Data inv�lida para ano n�o bissexto.\n");
            return 0;
        }
    }

    printf("Data v�lida.\n");

    return 0;
}
