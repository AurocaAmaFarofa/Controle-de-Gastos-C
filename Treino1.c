#include <stdio.h>

//int main()/=
//{
//    float gasto1, gasto2, gasto3;
//    float resultado;
//    printf("Informe o primeiro gasto: ");
//    scanf("%f", &gasto1);
//    printf("Informe o segundo gasto: ");
//    scanf("%f", &gasto2);
//    printf("Informe o terceiro gasto: ");
//    scanf("%f", &gasto3);
//    resultado = gasto1+gasto2+gasto3;
//    printf("Seu total de gastos é: %.2f\n", resultado);
//    return 0;
//}

int main()
{
    int quantidade; 
    float gasto; 
    float total = 0;
    int contador = 0;
    float media;
    float MaiorG = 0;
    int decicao;
    int decicaoG;
    int continuar = 1;

    printf("Bem vindo ao banco do Auro! Escolha sua opcao a seguir\n");
    printf("1 - Adicionar gasto\n");
    printf("2 - Ver total\n");
    printf("3 - Ver maior gasto\n");
    printf("4 - Ver media\n");
    printf("0 - Sair\n");
    printf("Digite aqui sua opcao: ");
    scanf("%i", &decicao);
    
    if (decicao != 1 && decicao != 2 && decicao != 3 && decicao != 4 && decicao != 0)
    {
        while (decicao != 1 && decicao != 2 && decicao != 3 && decicao != 4 && decicao != 0)
        {
            printf("Informe um numero de 0 a 4 referente as opcoes: ");
            scanf("%i", &decicao);
        }
    }
    
    while (decicao != 0)
{
    if (decicao == 1)
    {
        continuar = 1;

        while (continuar == 1)
        {
            printf("Digite o valor do gasto: ");
            scanf("%f", &gasto);

            while (gasto < 0)
            {
                printf("Corrija seu gasto: ");
                scanf("%f", &gasto);
            }

            contador++;
            total += gasto;

            if (gasto > MaiorG)
            {
                MaiorG = gasto;
            }

            printf("Deseja colocar outro gasto? (1 = sim/ 0 = nao): ");
            scanf("%d", &continuar);

            while (continuar != 0 && continuar != 1)
            {
                printf("Digite apenas 1 ou 0: ");
                scanf("%d", &continuar);
            }
        }
    }

    if (decicao == 2)
    {
        printf("Seu total de gastos e: %.2f\n", total);
    }

    if (decicao == 3)
    {
        printf("Seu maior gasto e de: %.2f\n", MaiorG);
    }

    if (decicao == 4)
    {
        if (contador != 0)
        {
            media = total / contador;
            printf("Sua media de gasto e: %.2f\n", media);
        }
        else
        {
            printf("Voce nao tem nenhum gasto ainda!\n");
        }
    }

    printf("\n--- MENU ---\n");
    printf("1 - Adicionar gasto\n");
    printf("2 - Ver total\n");
    printf("3 - Ver maior gasto\n");
    printf("4 - Ver media\n");
    printf("0 - Sair\n");
    printf("Escolha: ");
    scanf("%d", &decicao);
}
}

//teste git