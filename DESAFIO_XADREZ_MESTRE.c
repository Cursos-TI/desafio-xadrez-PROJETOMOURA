#include <stdio.h>

//Foi criado um recurso de recursividade para cada peça: torre, bispo e rainha

void moverTorre(int casaT)
{
    if (casaT > 0)
    {
        printf("Direita\n");
        moverTorre(casaT - 1);
    }
    
}

void moverBispo(int casaB)
{
   if(casaB > 0)
   {
   printf("DIREITA\t");
   printf("CIMA\n");
   moverBispo(casaB - 1);
   }
}

void moverRainha (int casaR)
{
    if (casaR > 0)
    {
        printf("ESQUERDA\n");
        moverRainha(casaR - 1);
    }
}

int main (){
    
    printf("\n===============<<<Nivel Mestre>>>==========\n");
    printf("\n     ==<<TORRE movimento recursivo>>==\n");
    
    //basta acrescentar entre parenteses a quantidade de vezes que será impressa a variável
    //neste caso moverTore será impressa 5 vezes.
    //a mesma lógica foi utilizada para as outras peças.
    moverTorre(5);
    printf("\nA TORRE moveu 5 casas para DIREITA\n");



    printf("\n===========================================\n");

    printf("       ==<<BISPO movimento recursivo>>==\n");


    moverBispo(5);
    printf("\nA BISPO moveu 5 casas para DIAGONAL DIREITA/CIMA\n");
   
    printf("\n===========================================\n");
 
    printf("         ==<<RAINHA movimento recursivo>>==\n");
 
    
    moverRainha(8);
    printf("\nA RAINHA moveu 8 casas para ESQUERDA\n");

    printf("\n===========================================\n");

    printf("     ==<<CAVALO movimento loop aninhado e complexo>>==\n");
    int i, j;
        for (i = 0; i < 5; i++)//loop externo
        {
    //o loop interno será executado enquanto a condição de IF for vedadeira        
            for(j = 0; j < 5; j++)
            {
            //A condição imprime os números pares menores que 5 e diferente de 0.
                if(j % 2 == 0 && j != 0) 
                printf("CIMA\n");
            }
            printf("DIREITA\n");
            break; //O comando break encerra o fluxo
        }    
    printf("\nO CAVALO moveu em L para DIREITA/CIMA\n");
    printf("\n======= FIM ======\n");    


return 0;
}