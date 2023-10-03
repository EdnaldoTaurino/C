#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // biblioteca do windows.

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");

    int escolha;
    do{

    

    printf("Menu:\n");
    printf("1. Imprimir um 'Olá mundo! \n");
    printf("2. Imprimir saudação\n");
    printf("3. Sair\n");
    printf("Escolha uma opção\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("Imprimindo um ola mundo!\n");
        printf("Olá mundo! \n");
        system("pause");
        system("cls");
        break;

    case 2:

        printf("Seja gentil quando for possivel. \n");
        printf("Sempre é possivel! \n");
        printf("- Dalai lama\n");
        system("pause");
        system("cls");
        break;

    case 3:

        printf("Saindo do programa \n");

    default:
        printf("Opção invalida! \n");
        system("pause");
        system("cls");
    }

    }while(escolha!=3);

    return 1;
}
