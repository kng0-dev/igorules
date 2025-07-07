#include <stdio.h>

/*int main(){
    int a = 10;
    float b = 3.5;
    float resultado = a + b; //"a" é convertido implícitamente para float

    printf("Resultado: %.2f\n", resultado);

    return 0;
    
}
*/

int main() {
    int a = 10;
    int b = 3;
    float quociente = (float) a / b; // "a" é explícitamente convertido para float
}