#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0; // Números menores ou iguais a 1 não são primos
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Encontrou um divisor, o número não é primo
        }
    }

    return 1; // Se não encontrou divisores, o número é primo
}

int main() {
    int num;
    printf("Digite um inteiro positivo: ");
    scanf("%d", &num);

    if (is_prime(num)) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}
