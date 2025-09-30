#include <stdio.h>

int main (){
    int bispo = 0, rainha = 0, movimento;
    
    printf("\n================================================\n");
    printf("\n<<< Desafio: Movimentação de Peças do Xadrez >>>\n");
    printf("            <<< Nível Iniciante >>>\n");

    //Para movimentar a primeira peça, a TORRE, foi utilizado a função FOR
    //O programa solicita ao usuário a quantidade de casas que pretente avançar com a TORRE

    printf("                =============\n");
    printf("                ==<<TORRE>>==\n");
    printf("                =============\n");
    printf ("\nDigite o número de casas para avançar para frente: ");
    scanf("%d", &movimento);

    //O comando FOR ler a informação inserida pelo usuário e imprime o movimento da TORRE
    //uma característica da função FOR é a possibilidade de criar e usar uma variável dentro do seu bloco

     for (int torre = 0; torre < movimento; torre++)
     {
        printf("Frente\n");
       
     }
    printf("A TORRE se descolou %d casas para frente\n", movimento);
    printf("\n================================================\n");
     
    //Para movimentar a segunda peça, o BISPO
    //Foi utilizado a função while
    //O programa solicita ao usuário a quantidade de casa que pretente avançar com o BISPO
    
    printf("                =============\n");
    printf("                ==<<BISPO>>==\n");
    printf("                =============\n");

    printf("\nDigite o número de casas para avançar na DIAGONAL DIREITA: ");
    scanf("%d", &movimento);
      
    while (bispo < movimento)
    {
        printf("CIMA/DIREITA\n");
    bispo++;
    }

    printf("O BISPO se deslocou %d casas na diagonal para cima e direta\n", movimento);
   
    printf("\n================================================\n");

    //Para movimentar a terceira peça, a RAINHA
    //foi utilizado a função do-while
    //assim como ocorre com as outras peças, o usurário insere a quantidade de casas que ele pretende avançar

    printf("                ==============\n");
    printf("                ==<<RAINHA>>==\n");
    printf("                ==============\n");
    printf("\nDigite o número de casas apa avançar para a ESQUERDA: ");
    scanf("%d", &movimento);
  

    do
    {
        printf("ESQUERDA\n");
        rainha++;

    } while (rainha < movimento);
    
    printf("A RAINHA se deslocou %d casas para esquerda\n", movimento);
    printf("\n====== FIM ======\n");
            
    return 0;
}