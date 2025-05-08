#include <stdio.h>

int main() {

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

    //escolhendo a posiçao que a peça vai se movimentar
    switch (opcao)
    {
    case 1:
        printf("Peça escolhida: Torre \n");
        printf("Escolha a posição que a peça vai se movimentar \n");
        printf("1 - cima \n");
        printf("2 - baixo \n");
        printf("3 - esquerda \n");
        printf("4 - direita \n");
        printf("Digite uma opção \n");
        scanf("%d", &opcao2);

        //movimento da peça
        i = 0;
        switch (opcao2)
        {
        case 1:
            for ( i = 0; i < 5; i++)
            {
                printf("cima \n");
            }          
            break;
        case 2:
            for ( i = 0; i < 5; i++)
            {
                printf("baixo \n");
            }
            break;
        case 3:
            for ( i = 0; i < 5; i++)
            {
                printf("esquerda \n");
            }
            break;
        case 4:
            for ( i = 0; i < 5; i++)
            {
                printf("direita \n");
            }
            break;     
        default:
            printf("Opção invalida \n");
            break;
        }
        break;
        //escolhendo a posiçao que a peça vai se movimentar
    case 2:
        printf("Peça escolhida: Bispo \n");
        printf("Escolha a posição que a peça vai se movimentar \n");
        printf("1 - Diagonal cima direita \n");
        printf("2 - Diagonal cima esquerda \n");
        printf("3 - Diagonal baixo direita \n");
        printf("4 - Diagonal baixo esquerda \n");
        printf("Digite uma opção \n");
        scanf("%d", &opcao2);

        //movimento da peça
        i = 0;
        switch (opcao2)
        {
        case 1:
            while (i <= 4)
            {
                printf("Cima direita \n"); 
                i++;          
            }   
            break;
        case 2:
            while (i <= 4)
            {
                printf("Cima esquerda \n");
                i++;          
            } 
            break;
        case 3:
            while (i <= 4)
            {
                printf("baixo direita \n");
                i++;           
            } 
            break;
        case 4:
            while (i <= 4)
            {
                printf("baixo esquerda \n"); 
                i++;          
            }   
            break;     
       default:
            printf("Opção invalida \n");
        break;
       }
        break;
        //escolhendo a posiçao que a peça vai se movimentar
    case 3:
        printf("Peça escolhida: Rainha \n");
        printf("Escolha a posição que a peça vai se movimentar \n");
        printf("1 - cima \n");
        printf("2 - baixo \n");
        printf("3 - esquerda \n");
        printf("4 - direita \n");
        printf("5 - Diagonal cima direita \n");
        printf("6 - Diagonal cima esquerda \n");
        printf("7 - Diagonal baixo direita \n");
        printf("8 - Diagonal baixo esquerda \n");
        printf("Digite uma opção \n");
        scanf("%d", &opcao2);

        //movimento da peça
        i = 0;
        switch (opcao2)
        {
        case 1:
            do
            {
                printf("cima \n");
                i++;
            } while (i <= 7);
            break;
        case 2:
            do
            {
                printf("baixo \n");
                i++;
            } while (i <= 7);
            break;
        case 3:
            do
            {
                printf("esquerda \n");
                i++;
            } while (i <= 7);
            break;
        case 4:
            do
            {
                printf("direita \n");
                i++;
            } while (i <= 7);
            break;
        case 5:
            do
            {
                printf("cima direita \n");
                i++;
            } while (i <= 7);
            break; 
        case 6:
            do
            {
                printf("cima esquerda \n");
                i++;
            } while (i <= 7);
            break;      
        case 7:
            do
            {
                printf("baixo direita \n");
                i++;
            } while (i <= 7);
            break; 
        case 8:
            do
            {
                printf("baixo esquerda \n");
                i++;
            } while (i <= 7);
            break; 
       default:
            printf("Opção invalida \n");
        break;
       }
        break;
       //escolhendo a posiçao que a peça vai se movimentar
    case 4:
        printf("Peça escolhida: Cavalo \n");
        printf("Escolha a posição que a peça vai se movimentar \n");
        printf("1 - cima direita \n");
        printf("2 - baixo direita \n");
        printf("3 - cima esquerda \n");
        printf("4 - baixo esquerda \n");
        scanf("%d", &opcao2);

        //movimento da peça
        switch (opcao2)
        {
        case 1:
            for (int i = 1; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    printf("cima \n");
                }
                printf("Direita \n");
            }
            break;
        case 2:
            for (int i = 1; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    printf("baixo \n");
                }
                printf("Direita \n");
            }
            break;
        case 3:
            for (int i = 1; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    printf("cima \n");
                }
                printf("esquerda \n");
            }
            break;
        case 4:
            for (int i = 1; i < 2; i++)
            {
                for (int j = 0; j < 2; j++)
                {
                    printf("baixo \n");
                }
                printf("esquerda \n");
            }
            break;
        
        default:
            printf("Opção invalida! \n");
            break;
        }
        break;
    case 5:
        printf("Saindo... \n");
        return 0;
          
    default:
        printf("Opção invalida! \n");
        break;
    }
    

    return 0;
}