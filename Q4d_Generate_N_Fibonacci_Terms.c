#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void generate(int n, int i) {
    if (i == n) return;
    printf("%d ", fibonacci(i));
    generate(n, i + 1);
}

int main() {
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    generate(n, 0);
    printf("\n");
    return 0;
}
