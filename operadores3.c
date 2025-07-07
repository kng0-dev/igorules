#include <stdio.h>

int main(){
    /* incremento (++)
    pré-incremento (++a)
    pós-incremento (a++)
    decremento (--)
    pré-decremento (--a)
    pós-decremento (a--)
    */
    int resultado;
    int num1 = 1;

    printf("antes incremento: %d \n", num1);
   // num1++;
    //printf("pós-incremento: %d \n", num1);
    //num1--;
    //printf("pós-decremento: %d \n", num1);

    resultado = num1++;
    printf("Após pós-incremento- Número: %d - Resultado: %d\n", num1, resultado);
    resultado = ++num1;
    printf("Após pré-incremento- Número: %d - Resultado: %d\n", num1, resultado);

}