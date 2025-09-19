#include <stdio.h>


int main () {

    //variaveis parra calcular movimentos
    int rainha = 1;
    int bispo = 1;
    int torre = 1;

    //Imprime nome da peça
    printf ("++Torre++\n");

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
    
    
    return 0;
}
