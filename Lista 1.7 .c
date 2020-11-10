#include <stdio.h>

int main ()
{
    float bits, bitsseg, segs;
       
        printf("Digite o tamo do arquivo (em bits) para saber a demora a ser baixado.   ");
        scanf("%f", &bits);

        printf("Agora digite a velocidade da sua conexao (em bits tambem)   ");
        scanf("%f", &bitsseg);

            segs = bits / bitsseg;

        printf("Seu arquivo sera baixado em %.2f seg", segs);

    return 0;

}