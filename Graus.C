#include <stdio.h>

void main() {
    float tempC, tempF;
    printf("Informe o valor em Fahrenheit: ");
    scanf("%f", &tempF);
    tempC = (5* (tempF - 32) /9);
    printf("Valor em celsius: %f\n", tempC);
}