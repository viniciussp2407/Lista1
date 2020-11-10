#include <stdio.h>

    int main ()
{
    float num1, comissao;

        printf ("Digite o valor da venda: \nR$");
        scanf ("%f", &num1);

            comissao = num1 * 0.1;

        printf ("A comissao do valor total da venda e de R$%.2f \n", comissao);

    return 0;
}