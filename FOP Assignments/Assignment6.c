#include <stdio.h>

// WITHOUT Recursion (Iterative)
long int factorialIterative(int n) {
    long int fact = 1;
    int i;
    for (i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

// WITH Recursion
long int factorialRecursive(int n) {
    if (n == 0 || n == 1)   // Base case
        return 1;
    return n * factorialRecursive(n - 1);  // Recursive call
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("\nFactorial without recursion = %ld\n", factorialIterative(num));
        printf("Factorial with recursion    = %ld\n", factorialRecursive(num));
    }

    return 0;
}
