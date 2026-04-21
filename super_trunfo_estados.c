#include <stdio.h>

struct Cidade 

//modelo dos dados das cidades

{
    char nome[50], estado[10], carta[10];
    int populacao, pontos;
    float area, pib;
};

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main(){
    
    struct Cidade cidadeA, cidadeB;

    printf("Digite os dados da carta 1: \n");
    
    printf("Código da Carta: \n");
    scanf("%s", cidadeA.carta);
    limparBuffer();

    printf("Nome da Cidade: \n");
    fgets(cidadeA.nome, 50, stdin);

    printf("Estado: \n");
    scanf("%s", cidadeA.estado);
    limparBuffer();

    printf("População: \n");
    scanf("%d", &cidadeA.populacao);
    limparBuffer();

    printf("Area (km²): \n");
    scanf("%f", &cidadeA.area);

    printf("PIB: \n");
    scanf("%f", &cidadeA.pib);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &cidadeA.pontos);
    
    printf("Digite os dados da carta 2: \n");
    
    printf("Código da Carta: \n");
    scanf("%s", cidadeB.carta);
    limparBuffer();

    printf("Nome da Cidade: \n");
    fgets(cidadeB.nome, 50, stdin);

    printf("Estado: \n");
    scanf("%s", cidadeB.estado);
    limparBuffer();

    printf("População: \n");
    scanf("%d", &cidadeB.populacao);
    limparBuffer();

    printf("Area (km²): \n");
    scanf("%f", &cidadeB.area);

    printf("PIB: \n");
    scanf("%f", &cidadeB.pib);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &cidadeB.pontos);

    printf("--- Carta 1 ---\n");
    printf("Estado: %s\n", cidadeA.estado);
    printf("Código: %s\n", cidadeA.carta);
    printf("Nome da Cidade: %s", cidadeA.nome);
    printf("População: %d Milhões de habitantes\n", cidadeA.populacao);
    printf("Área: %.2f km²\n", cidadeA.area);
    printf("PIB: %.2f Bilhões de Reais\n", cidadeA.pib);
    printf("Número de Pontos Turísticos %d\n", cidadeA.pontos);
    printf("\n");
    printf("--- Carta 2 ---\n");
    printf("Estado: %s\n", cidadeB.estado);
    printf("Código: %s\n", cidadeB.carta);
    printf("Nome da Cidade: %s", cidadeB.nome);
    printf("População: %d Milhões de habitantes\n", cidadeB.populacao);
    printf("Área: %.2f km²\n", cidadeB.area);
    printf("PIB: %.2f Bilhões de Reais\n", cidadeB.pib);
    printf("Número de Pontos Turísticos %d\n", cidadeB.pontos);

}