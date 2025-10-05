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

    printf("                    ==<<TORRE>>==\n");
    

    moverTorre(5);

//Para o movimento do Bispo utilizando a estrutura de Recursividade

   printf("\n===========================================\n");

    printf("                    ==<<BISPO>>==\n");


   moverBispo(5);

   printf("\n-------------------------------------------\n");

//Segue o exemplo do mesmo movimento para o Bispo, porém utilizando um Lop Aninhado em FOR

int bispo;

   for(int bispo = 0; bispo < 5; bispo++)
   {
    for (int movimentoBispo = 1; movimentoBispo <= 1; movimentoBispo++)
    {
        printf("DIREITA\t");
    }
    printf("CIMA\n");
   }
 printf("\n===========================================\n");
 printf("                    ==<<RAINHA>>==\n");
 
    
 moverRainha(8);
printf("\n===========================================\n");

printf("                    ==<<CAVALO>>==\n");

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
       
    


return 0;
}