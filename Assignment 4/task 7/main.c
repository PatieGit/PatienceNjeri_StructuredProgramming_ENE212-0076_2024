#include <stdio.h>
#include <stdlib.h>


#define BUFFER_SIZE 5

void insertSample(int buffer[], int *index, int *count, int value) {
    buffer[*index] = value;
    *index = (*index + 1) % BUFFER_SIZE;

    if (*count < BUFFER_SIZE) {
        (*count)++;
    }
}

void printSamples(int buffer[], int index, int count) {
    int i;
    int start;

    start = (index - count + BUFFER_SIZE) % BUFFER_SIZE;

    printf("Stored samples (oldest → newest): ");
    for (i = 0; i < count; i++) {
        printf("%d ", buffer[(start + i) % BUFFER_SIZE]);
    }
    printf("\n");
}

int main() {
    int buffer[BUFFER_SIZE];
    int index = 0;
    int count = 0;
    int value;
    char choice;

    do {
        printf("Enter sensor value: ");
        scanf("%d", &value);

        insertSample(buffer, &index, &count, value);

        printf("Do you want to add another value? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printSamples(buffer, index, count);

    return 0;
}
