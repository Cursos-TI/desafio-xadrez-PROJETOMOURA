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
    printf("A TORRE se descolou %d casas para CIMA\n", movimento_torre);
 
     
    //Foi utilizado a função while para movimentação do BISPO
   
    printf("                =============\n");
    printf("                ==<<BISPO>>==\n");
    printf("                =============\n");

          
    while (bispo < movimento_bispo)
    {
        printf("CIMA/DIREITA\n");
    bispo++;
    }

    printf("O BISPO se deslocou %d casas na diagonal direita para cima\n", movimento_bispo);
   
    
     //foi utilizado a função do-while para movimentação da Rainha
    
    printf("                ==============\n");
    printf("                ==<<RAINHA>>==\n");
    printf("                ==============\n");
    
    do
    {
        printf("ESQUERDA\n");
        rainha++;

    } while (rainha < movimento_rainha);
    
    printf("A RAINHA se deslocou %d casas para esquerda\n", movimento_rainha);
    

    printf("\n===============<<<Nivel Aventureiro>>>==========\n");
    printf("                ==============\n");
    printf("                ==<<CAVALO>>==\n");
    printf("                ==============\n");

    //Atribuído valores às variáveis MOVIMENTO_CAVALO e CAVALO;
    //Utilizando a função loop Alinhado WHILE
    //O movimento do cavalo se da em forma de L, para tanto o movimento deve ser descrito com dois movimentos para BAIXO e um para ESQUERDA. 
  
    cavalo = 1;
    movimento_cavalo = 1; 
  
while (cavalo < 2)
    {
        //O loop interno imprime "BAIXO" e incrementa o valor da variável MOVIMENTO_CAVALO enquanto esta for menor ou igual a 2 (dois).
        //Sendo assim, será impresso a palavra "BAIXO" 2 (duas) vezes.
        while (movimento_cavalo <= 2) 
    {
        printf("BAIXO\n");
        movimento_cavalo++;
    }
        //Após a execução do loop interno, será executado o loop externo, em que será impresso a palavra"ESQUERDA",
        //enquanto o valor da variável CAVALO for menor que 2 (dois).
        //Portanto será impresso uma única vez, tendo em vista que a variável CAVALO tem valor 1 (um) e ao ser incrementada
        //a condição se torna falsa.

        printf("ESQUERDA\n"); 
        cavalo++;
    }
    printf("\nCavalo se descola em L para baixo/esquerda\n");
   
   printf("\n================================================\n");

    //Loop Alinhado FOR 
    //foi criado as variáveis CAVALO e MOVIMENTO_CAVALO dentro da própria estrutura
    //a fim de demonstração desta possibilidade ao utilizar a função FOR.
    //Foi aplicada a mesma lógica do código anterior.

    for(int cavalo = 1; cavalo < 2; cavalo++)
    {
        for (int movimento_cavalo = 1; movimento_cavalo <= 2; movimento_cavalo++)
        {
            printf("BAIXO\n");
        }
        printf("ESQUERDA\n");
        printf("\nCavalo se descola em L para baixo/esquerda\n");
    }


    return 0;
}