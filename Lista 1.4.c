#include <stdio.h>

int main ()
{
    float valorReal, valordolar;

        printf ("Digite o valor que deseja fazer o cambio: \n$");
        scanf ("%f", &valordolar);

            valorReal = valordolar * 5.53;

        printf ("O cambio deu o valor de: R$%.2f", valorReal);

    return 0;
    
}