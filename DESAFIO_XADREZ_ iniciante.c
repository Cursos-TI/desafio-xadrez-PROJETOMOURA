#include <stdio.h>

int main (){
    int bispo = 0, rainha = 0, cavalo;
    int movimento_cavalo, movimento_torre = 5, movimento_bispo = 5, movimento_rainha = 8;
    
    printf("\n================================================\n");
    printf("\n<<< Desafio: Movimentação de Peças do Xadrez >>>\n");
    printf("            <<< Nível Iniciante >>>\n");

    //Para movimentar a primeira peça, a TORRE, foi utilizado a função FOR
    
    printf("                =============\n");
    printf("                ==<<TORRE>>==\n");
    printf("                =============\n");
    

    //uma característica da função FOR é a possibilidade de criar e usar uma variável dentro do seu bloco
     for (int torre = 0; torre < movimento_torre; torre++)
     {
        printf("Cima\n");
       
     }
        
    //Foi utilizado a função while para movimentação do BISPO
   
    printf("                =============\n");
    printf("                ==<<BISPO>>==\n");
    printf("                =============\n");

          
    while (bispo < movimento_bispo)
    {
        printf("CIMA/DIREITA\n");
    bispo++;
    }

     
    //foi utilizado a função do-while para movimentação da Rainha
    
    printf("                ==============\n");
    printf("                ==<<RAINHA>>==\n");
    printf("                ==============\n");
    
    do
    {
        printf("ESQUERDA\n");
        rainha++;

    } while (rainha < movimento_rainha);
    
return 0;
}