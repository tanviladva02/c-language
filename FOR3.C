#include <stdio.h>

int main() {
    int n, i;
    unsigned long long first = 0, second = 1, next;

    // Input the number of terms
    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d terms:\n", n);
    printf("%llu, %llu, ", first, second);

    for (i = 3; i <= n; ++i) {
        next = first + second;
        printf("%llu ", next);
        first = second;
        second = next;
    }

    printf("\n");

}

