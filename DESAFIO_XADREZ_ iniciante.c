#include <stdio.h>

int main (){
    int bispo = 0, rainha = 0;
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
        printf("CIMA\n");
       
     }
    printf("\nA TORRE moveu 5 casas para CIMA\n"); 

    
   
    printf("                =============\n");
    printf("                ==<<BISPO>>==\n");
    printf("                =============\n");

    //Foi utilizado a função while para movimentação do BISPO      
    while (bispo < movimento_bispo)
    {
        printf("CIMA/DIREITA\n");
    bispo++;
    }

    printf("\nO BISPO moveu 5 casas na DIAGONAL para CIMA/DIREITA\n");

    
    
    
    printf("                ==============\n");
    printf("                ==<<RAINHA>>==\n");
    printf("                ==============\n");
    
    //foi utilizado a função do-while para movimentação da Rainha
    do
    {
        printf("ESQUERDA\n");
        rainha++;

    } while (rainha < movimento_rainha);

    printf("\nA RAINHA moveu 8 casas para ESQUERDA\n");

    printf("\n======= FIM ======\n");
    
return 0;
}