#include <stdio.h>

int main (){
       
    printf("\n================================================\n");
    printf("\n<<< Desafio: Movimentação de Peças do Xadrez >>>\n");
    printf("            <<< Nível Iniciante >>>\n");

    //Para movimentar a primeira peça, a TORRE, foi utilizado a função FOR
    
    printf("                =============\n");
    printf("                ==<<TORRE>>==\n");
    printf("                =============\n");
    //uma característica da função FOR é a possibilidade de 
    //criar e usar uma variável dentro do seu bloco
    //A variável i é incrementada até que a condição se torne falsa.
    for (int i = 0, j = 5; i < j; i++) 
     {
        //imprime a plavra CIMA enquanto a condição for verdadeira,
        //ou seja será impressa 5 vezes.
        printf("CIMA\n"); 
       
     }
    printf("\nA TORRE moveu 5 casas para CIMA\n"); 

    
   
    printf("                =============\n");
    printf("                ==<<BISPO>>==\n");
    printf("                =============\n");

    //Foi utilizado a função while para movimentação do BISPO
    int bispo = 0, movimento_bispo = 5;
    
        while (bispo < movimento_bispo) //condição: enquanto a variável bispo for menor
        {                             //o programa imprime o resultado e incrementa a variável
            printf("CIMA/DIREITA\n");
            bispo++;
        }

        printf("\nO BISPO moveu 5 casas na DIAGONAL para CIMA/DIREITA\n");

    
    
    
    printf("                ==============\n");
    printf("                ==<<RAINHA>>==\n");
    printf("                ==============\n");
    
    //foi utilizado a função do-while para movimentação da Rainha
    int rainha = 0, movimento_rainha = 8;
    do
    {
        printf("ESQUERDA\n"); //diferente do While, primeiro é lançado o que será impresso
        rainha++;             //e o incrremento, depois e feita a condição.
                              // com a mesma lógica da função anterior.
    } while (rainha < movimento_rainha);

    printf("\nA RAINHA moveu 8 casas para ESQUERDA\n");

    printf("\n======= FIM ======\n");
    
return 0;
}