#include <stdio.h>

int main(void) {
    int n, i, is_prime = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            is_prime = 0;
            break;
        }
    }

    if (n == 1) {
        printf("1 is neither prime nor composite.\n");
    } else {
        if (is_prime) {
            printf("%d is a prime number.\n", n);
        } else {
            printf("%d is not a prime number.\n", n);
        }
    }

    return 0;
}
