#include <stdio.h>

void main() {
    float tempC, tempF;
    printf("Informe o valor em Fahrenheit: ");
    scanf("%f", &tempF);
    tempC = (5* (tempF - 32) /9);
    printf("Valor em celsius: %f\n", tempC);
}

int main() {
    char Nome[10];
    float Idade;
    printf("Digite seu nome: \n");
    scanf("%s", Nome);
    printf("Digite Sua idade: \n");
    scanf("%f", &Idade);
    printf("Seu nome é: %s e sua idade é: %.0f\n", Nome, Idade);
    return 0;
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Soma = %d\n", a+b);
    return 0;
}

int main(){
    float a, b;
    printf("Informe o primeiro valor: ");
    scanf("%f", &a);
    printf("Informe o segundo valor: ");
    scanf("%f", &b);
    printf("Soma = %2.f\n", a+b);
    printf("Subtração = %2.f\n", a-b);
    printf("Multiplicação = %2.f\n", a*b);
    printf("Divisão = %2.f\n", a/b);
    return 0;
}

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