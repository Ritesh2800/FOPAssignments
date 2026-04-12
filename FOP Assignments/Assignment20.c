#include <stdio.h>

// Swap WITHOUT pointers (call by value - swaps local copies only)
void swapWithoutPointers(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function (without pointers): a = %d, b = %d\n", a, b);
}

// Swap WITH pointers (call by reference - swaps actual values)
void swapWithPointers(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // --- Without Pointers ---
    printf("\n-- Without Pointers --\n");
    printf("Before swap: x = %d, y = %d\n", x, y);
    swapWithoutPointers(x, y);
    printf("After swap:  x = %d, y = %d  (unchanged in main!)\n", x, y);

    // --- With Pointers ---
    printf("\n-- With Pointers --\n");
    printf("Before swap: x = %d, y = %d\n", x, y);
    swapWithPointers(&x, &y);
    printf("After swap:  x = %d, y = %d\n", x, y);

    return 0;
}
