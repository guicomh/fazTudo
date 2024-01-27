#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    system("Color a");
    system("title Faz Tudo");
    printf(" ----------------------------- \n\n");
    int a;
    printf("Escolha uma opcao abaixo\n");
    printf(" 1 - Desligar o seu Computador\n");
    printf(" 2 - Criar um arquivo txt\n");
    printf(" 3 - Listar Diretorio do Programa\n");
    printf("\n ---------------------------- \n");
    printf(" >_ ");
    scanf("%d", &a);

    if (a == 1)
    {
       printf("\n voce escolheu a opcao %i\n", a);
       system("shutdown -p ");
    }
    else if (a == 2)
    {
       printf("\n voce escolheu a opcao %i\n", a);
       system("cd ..");
       system("type nul > oi.txt");
       printf("\n seu arquivo foi criado\n\n", a);
    }
    else if (a == 3)
    {
       printf("\n voce escolheu a opcao %i\n", a);
       system("dir\n");
    }
    else {
       printf("\n INFELIZMENTE VOCE NAO DIGITOU UM NUMERO VALIDO\n\n");
    }
    system("pause");
    return 0;
}
