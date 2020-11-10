#include <stdio.h> 

    int main ()
    {
        float largura, compri, largcompri, preco, precometro;

            printf("Digite o comprimento (em metros) do lugar que deseja colocar carpete.  ");
            scanf("%f", &compri);

            printf("Agora, digite a largura (em metros) do local.  ");
            scanf("%f", &largura);

            printf("Por ultimo, digite o preco do metro quadrado do carpete.  ");
            scanf("%f", &preco);

                precometro = (compri * largura) * preco;

            printf("O custo total para forrar uma sala com carpete e de R$%.2f\n", precometro);
        
        return 0;
    }