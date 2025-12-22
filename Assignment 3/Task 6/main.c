#include <stdio.h>
#include <stdlib.h>


void incrementByValue(int x) {
    x = x + 1;
}

void incrementByReference(int *x) {
    *x = *x + 1;
}

int main() {
    int num = 6;

    incrementByValue(num);
    printf("After pass by value: %d\n", num);

    incrementByReference(&num);
    printf("After pass by reference: %d\n", num);

    return 0;
}

