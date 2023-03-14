#include <stdio.h>

int main() {
    int num, primeiro = 0, segundo = 1, proximo, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // Verifica se o número é igual a 0 ou 1, que já fazem parte da sequência
    if (num == 0 || num == 1) {
        printf("%d faz parte da sequência de Fibonacci\n", num);
    } else {
        // Calcula a sequência de Fibonacci até encontrar um valor maior ou igual ao número informado
        for (i = 2; segundo < num; i++) {
            proximo = primeiro + segundo;
            primeiro = segundo;
            segundo = proximo;
        }

        if (num == segundo) {
            printf("%d faz parte da sequência de Fibonacci\n", num);
        } else {
            printf("%d não faz parte da sequência de Fibonacci\n", num);
        }
    }

    return 0;
}

