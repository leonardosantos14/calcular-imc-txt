#include <cstdio>

int main() {
    // Declarando as variáveis que serão usadas
    char nome[50], nacionalidade[50];
    int idade;
    float altura, peso, imc;

    // Lendo as informações do usuário
    printf("Digite seu nome: ");
    scanf("%[^\n]", nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite seu peso (em kg): ");
    scanf("%f", &peso);

    getchar(); // Limpa o buffer do teclado

    printf("Digite sua nacionalidade: ");
    scanf("%[^\n]", nacionalidade);

    // Calculando o IMC
    imc = peso / (altura * altura);

    // Imprimindo o resultado do IMC
    printf("\nIMC = %.2f\n", imc);

     if (imc < 18.5) {
        printf("Voce esta em baixo peso.\n");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Voce esta no intervalo normal.\n");
    } else if (imc >= 25 && imc < 30) {
        printf("Voce esta com sobrepeso.\n");
    } else if (imc >= 30 && imc < 35) {
        printf("Voce esta com obesidade classe I.\n");
    } else if (imc >= 35 && imc < 40) {
        printf("Voce esta com obesidade classe II.\n");
    } else {
        printf("Voce esta com obesidade classe III.\n");
    }
    
    // Exportando as informações inseridas para um arquivo de texto
    FILE* arquivo = fopen("infoIMC.txt", "w");

    if (arquivo != NULL) {
        fprintf(arquivo, "Nome: %s\n", nome);
        fprintf(arquivo, "Idade: %d\n", idade);
        fprintf(arquivo, "Altura: %.2f m\n", altura);
        fprintf(arquivo, "Peso: %.2f kg\n", peso);
        fprintf(arquivo, "Nacionalidade: %s\n", nacionalidade);
        fprintf(arquivo, "IMC: %.2f\n", imc);
if (imc < 18.5) {
    fprintf(arquivo, "IMC indicando Baixo peso.\n");
} else if (imc >= 18.5 && imc < 25) {
    fprintf(arquivo, "IMC indicando Intervalo normal.\n");
} else if (imc >= 25 && imc < 30) {
    fprintf(arquivo, "IMC indicando Sobrepeso.\n");
} else if (imc >= 30 && imc < 35) {
    fprintf(arquivo, "IMC indicando Obesidade classe I.\n");
} else if (imc >= 35 && imc < 40) {
    fprintf(arquivo, "IMC indicando Obesidade classe II.\n");
} else {
    fprintf(arquivo, "IMC indicando Obesidade classe III.\n");
}
        fclose(arquivo);

        printf("As informacoes foram exportadas para o arquivo 'infoIMC.txt'.\n");
    } else {
        printf("Nao foi possivel criar o arquivo 'infoIMC.txt'.\n");
    }

    return 0;
}
