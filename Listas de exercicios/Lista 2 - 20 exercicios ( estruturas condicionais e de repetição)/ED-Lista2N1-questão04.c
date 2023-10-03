/* FUN��O:
    Dados tr�s valores  A ,  B  e  C , em que  A  e  B  s�o n�meros reais e C  � um caractere 
    (+ ,- , * , / ou ^ ), pede-se para imprimir o resultado da opera��o de  A  por  B  se  C  for um
    s�mbolo de operador aritm�tico v�lido(tratar o s�mbolo); caso contr�rio deve ser impressa
    uma mensagem de operador n�o definido. Tratar erro de divis�o por zero. Mostrar
    impress�es complementares explicando como funciona a calculadora  
*/

/* Autor : Ednaldo Taurino    
   Data  : 27/09/2023
*/

/*
    Adicionar digite 0 para finalizar o programa; ok
    loop para quando finalizar mostrar outra equa��o; ok
    mostra tabuada ou opera��o l�gica; ok
*/ 

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main() {
setlocale(LC_ALL, "Portuguese_Brazil");   


float a, b, resultado;
char c;
int continuar = 1;  // 1 = verdadeiro, variavel para o loop at� que o us�ario didite 0 para parar o programa.

    while (continuar) {
        printf("=============== Vamos fazer uma opera��o matem�tica com dois numeros a sua escolha =============== \n\n");
        printf("Ou Digite 0 (ZERO) para finalizar o programa.\n\n");

        do {        
            printf("Digite qual opera��o deseja fazer? +, -, *, /, ^, ou digite t para iniciar a tabuada: \n");
            scanf(" %c", &c);  // espa�o antes do %c para consumir possiveis quebras de linha.

            if (c == '0') {
                continuar = 0;  // 0 falso parar o programa
                system("cls");
                printf("\n\tObrigado pela prefer�ncia! At� mais!\n");
                system("pause");
                break;
            }

            while (getchar() != '\n');  // zera o buffer por que estava repetindo duas vezes a mensagem do printf, estava lendo o enter.
            system("cls");
            
            if (c != '+' && c != '-' && c != '*' && c != '/' && c != '^' && c != 't') {  // esse if s� entrou para poder mostrar o printf da condi��o que se for diferente n�o � v�lido.
                printf("Digite um simb�lo de operador artim�tico v�lido, Tente novamente.\n");  
            } 
        } while (c != '+' && c != '-' && c != '*' && c != '/' && c != '^' && c != 't');
        
        if (continuar) {
              printf("Digite os dois primeiros numero:\n"); 
              scanf("%f %f", &a, &b);

            switch (c) {
                case ('+'):
                    resultado = a + b;
                    printf("o resultado de %.2f + %.2f � %.2f\n", a, b, resultado);
                    system("pause");
                    system("cls");
                    break;

                case('-'):
                    resultado = a - b;
                    printf("O resultado de %2.f - %2.f � %2.f\n", a, b, resultado);
                    system("pause");
                    system("cls");
                    break;

                case('*'):
                    resultado = a * b;
                    printf("\no resultado de %2.f x %2.f � %2.f \n", a , b, resultado);
                    system("pause");
                    system("cls");
                    break;

                case('/'):
                    if (b != 0){
                        resultado = a / b;
                        printf("\n O resultado de %.2f dividido / por %.2f � %2.f\n", a, b, resultado);
                        system("pause");
                        system("cls");
                    }else{
                        printf("N�o pode dividir por zero!\n");
                        system("pause");
                        system("cls");
                    }break;
                    
                case('^'):
                    resultado = pow(a,b);
                    printf("O valor de %f elevado a pot�ncia de %f �: %f\n", a, b, resultado);
                    system("pause");
                    system("cls");


                case('t'):
                    printf("Certo vamos iniar a tabuada com os dois n�meros digitados ");
                    system("pause");
                    system("cls");

                    for (int i = 1; i <= 10; i++) { 
                        printf("%d x %d = %d\t%d x %d = %d\n", (int)a, i, (int)a * i, (int)b, i, (int)b * i);
                    }

                default:
                    break;
            }
        }
    }
return 0;
}




















