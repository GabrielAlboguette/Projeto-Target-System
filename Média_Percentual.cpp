#include <stdio.h>

int main() {
    // Definir os valores de faturamento de cada estado
    float sp = 67836.43;
    float rj = 36678.66;
    float mg = 29229.88;
    float es = 27165.48;
    float outros = 19849.53;

    // Calcular o valor total mensal
    float total = sp + rj + mg + es + outros;

    // Calcular o percentual de representação de cada estado
    float sp_percentual = (sp / total) * 100;
    float rj_percentual = (rj / total) * 100;
    float mg_percentual = (mg / total) * 100;
    float es_percentual = (es / total) * 100;
    float outros_percentual = (outros / total) * 100;

    // Imprimir os resultados
    printf("Percentual de representacao por estado:\n");
    printf("SP: %.2f%%\n", sp_percentual);
    printf("RJ: %.2f%%\n", rj_percentual);
    printf("MG: %.2f%%\n", mg_percentual);
    printf("ES: %.2f%%\n", es_percentual);
    printf("Outros: %.2f%%\n", outros_percentual);

    return 0;
}
