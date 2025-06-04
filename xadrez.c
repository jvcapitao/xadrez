#include <stdio.h>

int main(){

    int torre = 1, bispo = 1, rainha = 1, cavalo = 1;

    //TRABALHANDO A MOVIMENTAÇÃO DAS PEÇAS

    while (torre <= 5) //são 5 casas para a direita
    {
        printf("====== Movimentação da Torre ======\n");
        printf("\nMovimento %d casa(s) para a direita.\n", torre);
        torre++;
    }
        printf("Movimento da Torre realizado.\n");

    do
    {
        printf("\n====== Movimentação do Bispo ======\n");
        printf("\nMovimento %d casa(s) para a diagonal superior direita.\n", bispo);
        bispo++;
    } while (bispo <= 5);
        printf("Movimento do Bispo realizado.\n");

        for (rainha = 1; rainha <= 8; rainha++)
        {
        printf("\n====== Movimento da Rainha ======\n");
        printf("\nMovimento %d casa(s) para a esquerda.\n", rainha);
            rainha++;
        }
        printf("Movimento da rainha realizado.\n");

        while (cavalo--)
        {
            printf("\n====== Movimento do cavalo ======\n");

            for (int i = 0; i < 2; i++)
            {
        printf("Cima\n"); //imprime "Cima" duas vezes.
            }
        printf("Direita\n"); //imprime "Direita" uma vez.       
            
        }
        printf("Movimentação do cavalo realizado.\n");
        

    return 0;
}