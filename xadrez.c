#include <stdio.h>


//função para movimentar rainha
void movimentaRainha (int num){

    if (num > 0)
    {
        printf ("Esquerda\n");
        movimentaRainha (--num);
    }
    
}

//função para movimentar torre
void movimentaTorre (int num){

    if (num > 0)
    {
        printf ("Direita\n");
        movimentaTorre(--num);
    }
    
}

//função para movimentar bispo
void movimentaBispo (int num){

    if (num > 0)
    {
        //declara variavel para controle do while
        int controlaBispo=1;
        //executa while para controle do movimento para direita
        while (controlaBispo > 0)
        {
            //executa for para controle do movimento para cima
            for (int i = 1; i > 0; i--)
            {
                printf("Cima\n");
            }

            printf("Direita\n");
            controlaBispo--;
        }
        
        
        movimentaBispo (--num);
    }
    
}


int main () {

    //variaveis parra calcular movimentos
    int rainha = 8;
    int bispo = 5;
    int torre = 5;
    int cavalo = 1;

    //Imprime nome da peça
    printf ("\n++Torre++\n");
    //chama função de movimento
    movimentaTorre(torre);

    //Imprime nome da peça
    printf ("\n++Bispo++\n");
    //chama função de movimento
    movimentaBispo(bispo);

    
    //Imprime nome da peça
    printf ("\n++Rainha++\n");
    //chama função de movimento
    movimentaRainha(rainha);


    //Imprime nome da peça
    printf ("\n++Cavalo++\n");
    //while e for para estabelecer casas de movimento do cavalo
    while (cavalo <= 1)
    {
        for (int i = 0, x=2; i < 2 && x > 0; i++, x--)
        {
            printf ("Cima\n");
        }

        printf ("Direita\n");

        cavalo++;
        
    }
    
    return 0;
}