#include <stdio.h>

void torre(int i){
    for ( i = 0; i < 5; i++)
    {
        printf("direita \n");
    }
}

void rainha(int i){
    do
            {
                printf("esquerda \n");
                i++;
            } while (i <= 8);
}

void bispo(int i){
    while (i <= 5)
    {
        int j;
        while (j <= i)
        {
            printf("direta ");
            j++;
        }
        printf("Cima \n"); 
        i++;          
    }   

}

void cavalo(int i){
    for (int i = 1; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("cima \n");
        }
        printf("direita \n");
    }
}

int main(){

    int i;
    int opcao, opcao2;

    //escolhendo a peça
    printf("Escolha uma peça do tabuleiro para jogar \n");
    printf("1 - Torre \n");
    printf("2 - Bispo \n");
    printf("3 - Rainha \n");
    printf("4 - Cavalo \n");
    printf("5 - Sair...\n");
    printf("Digite uma opção \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        torre(i);
        break;
    case 2:
        bispo(i);
        break;
    case 3:
        rainha(i);
        break;
    case 4:
        cavalo(i);
        break;
    case 5:
        printf("Saindo... \n");
        return 0;
        break;
    default:
        printf("Opção invalida. \n");
        return 0;
        break;
    }


    return 0;
}