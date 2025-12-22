#include <stdio.h>
#include <stdlib.h>


/* Increment using pass by value */
void incrementByValue(int x) {
    x = x + 1;
}

/* Increment using pass by reference */
void incrementByReference(int *x) {
    *x = *x + 1;
}

/* Swap two numbers using pointers */
void swapNumbers(int *a, int *b) {
    int num1;
    num1 = *a;
    *a = *b;
    *b = num1;
}

int main() {

    int a = 10;
    int b = 20;

    int *ptrA = &a;
    int *ptrB = &b;

    printf("Initial values:\n");
    printf("a = %d, b = %d\n\n", a, b);

    /* Modify a using pointer */
    *ptrA = 15;
    printf("After modifying a using pointer:\n");
    printf("a = %d\n\n", a);

    /* Pass by value */
    incrementByValue(a);
    printf("After pass by value:\n");
    printf("a = %d\n\n", a);

    /* Pass by reference */
    incrementByReference(&a);
    printf("After pass by reference:\n");
    printf("a = %d\n\n", a);

    /* Swap values */
    printf("Before swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    swapNumbers(&a, &b);

    printf("After swapping:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}


