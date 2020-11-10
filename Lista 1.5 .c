#include <stdio.h>

    int main ()
{
    float km, litros, media;

        printf ("Informe a Km rodada e os litros de gasolina gasto.\n");
        scanf  ("%f %f", &km, &litros);

            media = km / litros;
        
        printf ("A media feita foi de %.2fkm/l\n", media);

    return 0; 
}