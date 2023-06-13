#include <stdio.h>

void fib(int n) {
    int num1 = 0, num2 = 1, num3;
    int odd = 0, even = 0;

    printf("Fibonacci Series: ");
    printf("%d, %d, ", num1, num2);

    for (int i = 2; i < n; i++) {
        num3 = num1 + num2;
        printf("%d, ", num3);

        if (i % 2 == 0) {
            even += num3;
        } else {
            odd += num3;
        }

        num1 = num2;
        num2 = num3;
    }

    printf("\nOdd Position Sum: %d\n", odd);
    printf("Even Position Sum: %d\n", even);
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    fib(n);

    return 0;
}
