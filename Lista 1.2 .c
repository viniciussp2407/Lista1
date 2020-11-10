#include <stdio.h>

    int main ()

{
    int num1, num2, result1, result2, result3, result4;

        printf ("Escreva dois valores a serem usados nas quatro operacoes matematicas.\n");
        scanf ("%d", &num1);
        scanf ("%d", &num2);

            result1 = num1 + num2;
            result2 = num1 - num2;
            result3 = num1 * num2;
            result4 = num1 / num2;

        printf ("O resultado da adicao deu o valor de %d. \n", result1);
        printf ("O resultado da subtracao deu o valor de %d. \n", result2);
        printf ("O resultado da multiplicacao deu o valor de %d. \n", result3);
        printf ("O resultado da divisao deu o valor de %d. \n", result4);
    
    return 0;
    
}