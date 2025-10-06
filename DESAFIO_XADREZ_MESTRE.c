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
    

    moverTorre(5);
    printf("\nA TORRE moveu 5 casas para DIREITA\n");

//Para o movimento do Bispo utilizando a estrutura de Recursividade

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
    
    for(i = 0; i < 3; i++) // loop externo
    {
       for(j = 0; j < 3; j++) // loop interno
        {
        if(j >= 2) //se j for maior ou igual a 2 pula para a próxima iteração
        continue; // pula o resto do loop interno
        
        printf("CIMA\n"); //imprime CIMA nas primeiras iterações válidas
        }
    printf("DIREITA\n");
    break; //sai do loop externo
    }

    printf("\nO CAVALO moveu em L para DIREITA/CIMA\n");

printf("\n======= FIM ======\n");    


return 0;
}