#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j;
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);
    j = strlen(str) - 1;
    for (i = 0; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("A string invertida é: %s", str);
  return 0;
}
