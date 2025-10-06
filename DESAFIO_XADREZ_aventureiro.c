#include <stdio.h>

int main (){
    int cavalo;
    int movimento_cavalo;
    

    printf("\n===============<<<Nivel Aventureiro>>>==========\n");
    printf("                ==============\n");
    printf("                ==<<CAVALO>>==\n");
    printf("                ==============\n");

    //Atribuído valores às variáveis MOVIMENTO_CAVALO e CAVALO;
    //O movimento do cavalo se da em forma de L, para tanto o movimento deve ser descrito com dois movimentos para BAIXO e um para ESQUERDA. 
  
    cavalo = 1;
    movimento_cavalo = 1; 
printf("\n========== Loop aninhado WHILE ==========\n");  
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
   printf("\nCAVALO de move em L para BAIXO/ESQUERDA\n");

   printf("\n========== Loop aninhado FOR ==========\n");

    //foi criado as variáveis CAVALO e MOVIMENTO_CAVALO dentro da própria estrutura
    //a fim de demonstração desta possibilidade ao utilizar Loop Alinhado FOR.
    //Foi aplicada a mesma lógica do código anterior.

    for(int cavalo = 1; cavalo < 2; cavalo++)
    {
        for (int movimento_cavalo = 1; movimento_cavalo <= 2; movimento_cavalo++)
        {
            printf("BAIXO\n");
        }
        printf("ESQUERDA\n");
        
    }
    printf("\nCAVALO de move em L para BAIXO/ESQUERDA\n");

    printf("\n======= FIM ======\n");

    return 0;
}