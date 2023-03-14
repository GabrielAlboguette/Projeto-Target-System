#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int dia;
    double valor;
} Faturamento;

int main() {
    // Carrega o vetor de faturamento mensal
    Faturamento faturamento[] = {
        {1, 22174.1664},
        {2, 24537.6698},
        {3, 26139.6134},
        {4, 0.0},
        {5, 0.0},
        {6, 26742.6612},
        {7, 0.0},
        {8, 42889.2258},
        {9, 46251.174},
        {10, 11191.4722},
        {11, 0.0},
        {12, 0.0},
        {13, 3847.4823},
        {14, 373.7838},
        {15, 2659.7563},
        {16, 48924.2448},
        {17, 18419.2614},
        {18, 0.0},
        {19, 0.0},
        {20, 35240.1826},
        {21, 43829.1667},
        {22, 18235.6852},
        {23, 4355.0662},
        {24, 13327.1025},
        {25, 0.0},
        {26, 0.0},
        {27, 25681.8318},
        {28, 1718.1221},
        {29, 13220.495},
        {30, 8414.61}
    };
    int tamanho = sizeof(faturamento) / sizeof(Faturamento);

    // Calcula o menor e o maior valor de faturamento
    double menor = faturamento[0].valor;
    double maior = faturamento[0].valor;
    for (int i = 1; i < tamanho; i++) {
        if (faturamento[i].valor < menor) {
            menor = faturamento[i].valor;
        }
        if (faturamento[i].valor > maior) {
            maior = faturamento[i].valor;
        }
    }
    printf("Menor faturamento: %.2lf\n", menor);
    printf("Maior faturamento: %.2lf\n", maior);

    // Calcula a média de faturamento diário, ignorando dias sem faturamento
    double soma = 0.0;
    int dias_com_faturamento = 0;
    for (int i = 0; i < tamanho; i++) {
        if (faturamento[i].valor > 0.0) {
            soma += faturamento[i].valor;
            dias_com_faturamento++;
        }
    }
    double media = soma / dias_com_faturamento;

    // Calcula o número de dias em que o faturamento diário foi superior à média mensal
    int dias_acima_da_media = 0;
    for (int i = 0; i < tamanho; i++) {
        if (faturamento[i].valor > media) {
            dias_acima_da_media++;
        }
    }
    printf("Dias acima da media: %d\n", dias_acima_da_media);

    return 0;
}
