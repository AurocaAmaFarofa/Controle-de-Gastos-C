#include <stdio.h>

int main(){
    float n1, n2, n3;
    printf("Informe a Nota 1: ");
    scanf("%f", &n1);
    printf("Informe a Nota 2: ");
    scanf("%f", &n2);
    printf("Informe a Nota 3: ");
    scanf("%f", &n3);
    printf("A média é: %2.f\n", (n1+n2+n3)/3);
    return 0;
}