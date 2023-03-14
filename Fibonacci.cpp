#include <stdio.h>

int main() {
    int num, primeiro = 0, segundo = 1, proximo, i;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    // Verifica se o n�mero � igual a 0 ou 1, que j� fazem parte da sequ�ncia
    if (num == 0 || num == 1) {
        printf("%d faz parte da sequ�ncia de Fibonacci\n", num);
    } else {
        // Calcula a sequ�ncia de Fibonacci at� encontrar um valor maior ou igual ao n�mero informado
        for (i = 2; segundo < num; i++) {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }

        if (num == segundo) {
            printf("%d faz parte da sequ�ncia de Fibonacci\n", num);
        } else {
            printf("%d n�o faz parte da sequ�ncia de Fibonacci\n", num);
        }
    }

    return 0;
}

