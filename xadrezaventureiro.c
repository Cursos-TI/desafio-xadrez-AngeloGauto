#include <stdio.h>

int main () {

    //variaveis parra calcular movimentos
    int rainha = 1;
    int bispo = 1;
    int torre = 1;
    int cavalo = 1;

    //Imprime nome da peça
    printf ("\n++Torre++\n");

    //while para estabelecer casas de movimento da torre
    while (torre <= 5)
    {
        printf ("Direita\n");

        torre++;
    }

    //Imprime nome da peça
    printf ("\n++Bispo++\n");

    //for para estabelecer casas de movimento do bispo
    for (bispo; bispo <= 5; bispo++)
    {
        printf ("Cima, Direita\n");
    }
    
    //Imprime nome da peça
    printf ("\n++Rainha++\n");

    //do-while para estabelecer casas de movimento da rainha
    do
    {
        printf ("Esquerda\n");
        rainha++;
    } while (rainha <= 8);


     //Imprime nome da peça
    printf ("\n++Cavalo++\n");

    //while e for para estabelecer casas de movimento da rainha
    while (cavalo <= 1)
    {
        for (int i = 0; i < 2; i++)
        {
            printf ("Baixo\n");
        }

        printf ("Esquerda\n");

        cavalo++;
        
    }
    
    return 0;
}
