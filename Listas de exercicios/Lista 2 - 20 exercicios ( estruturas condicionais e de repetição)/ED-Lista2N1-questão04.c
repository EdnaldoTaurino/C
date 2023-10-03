/* FUNÇÃO:
    Dados três valores  A ,  B  e  C , em que  A  e  B  são números reais e C  é um caractere 
    (+ ,- , * , / ou ^ ), pede-se para imprimir o resultado da operação de  A  por  B  se  C  for um
    símbolo de operador aritmético válido(tratar o símbolo); caso contrário deve ser impressa
    uma mensagem de operador não definido. Tratar erro de divisão por zero. Mostrar
    impressões complementares explicando como funciona a calculadora  
*/

/* Autor : Ednaldo Taurino    
   Data  : 27/09/2023
*/

/*
    Adicionar digite 0 para finalizar o programa; ok
    loop para quando finalizar mostrar outra equação; ok
    mostra tabuada ou operação lógica; ok
*/ 

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main() {
setlocale(LC_ALL, "Portuguese_Brazil");   


float a, b, resultado;
char c;
int continuar = 1;  // 1 = verdadeiro, variavel para o loop até que o usúario didite 0 para parar o programa.

    while (continuar) {
        printf("=============== Vamos fazer uma operação matemática com dois numeros a sua escolha =============== \n\n");
        printf("Ou Digite 0 (ZERO) para finalizar o programa.\n\n");

        do {        
            printf("Digite qual operação deseja fazer? +, -, *, /, ^, ou digite t para iniciar a tabuada: \n");
            scanf(" %c", &c);  // espaço antes do %c para consumir possiveis quebras de linha.

            if (c == '0') {
                continuar = 0;  // 0 falso parar o programa
                system("cls");
                printf("\n\tObrigado pela preferência! Até mais!\n");
                system("pause");
                break;
            }

            while (getchar() != '\n');  // zera o buffer por que estava repetindo duas vezes a mensagem do printf, estava lendo o enter.
            system("cls");
            
            if (c != '+' && c != '-' && c != '*' && c != '/' && c != '^' && c != 't') {  // esse if só entrou para poder mostrar o printf da condição que se for diferente não é válido.
                printf("Digite um simbólo de operador artimético válido, Tente novamente.\n");  
            } 
        } while (c != '+' && c != '-' && c != '*' && c != '/' && c != '^' && c != 't');
        
        if (continuar) {
              printf("Digite os dois primeiros numero:\n"); 
              scanf("%f %f", &a, &b);

            switch (c) {
                case ('+'):
                    resultado = a + b;
                    printf("o resultado de %.2f + %.2f é %.2f\n", a, b, resultado);
                    system("pause");
                    system("cls");
                    break;

                case('-'):
                    resultado = a - b;
                    printf("O resultado de %2.f - %2.f é %2.f\n", a, b, resultado);
                    system("pause");
                    system("cls");
                    break;

                case('*'):
                    resultado = a * b;
                    printf("\no resultado de %2.f x %2.f é %2.f \n", a , b, resultado);
                    system("pause");
                    system("cls");
                    break;

                case('/'):
                    if (b != 0){
                        resultado = a / b;
                        printf("\n O resultado de %.2f dividido / por %.2f é %2.f\n", a, b, resultado);
                        system("pause");
                        system("cls");
                    }else{
                        printf("Não pode dividir por zero!\n");
                        system("pause");
                        system("cls");
                    }break;
                    
                case('^'):
                    resultado = pow(a,b);
                    printf("O valor de %f elevado a potência de %f é: %f\n", a, b, resultado);
                    system("pause");
                    system("cls");


                case('t'):
                    printf("Certo vamos iniar a tabuada com os dois números digitados ");
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




















