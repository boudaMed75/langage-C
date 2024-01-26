
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate memory for an array of integers
    int* dynamicArray = (int*)malloc(5 * sizeof(int));

    // Check if the allocation was successful
    if (dynamicArray == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }

    // Initialize the array
    for (int i = 0; i < 5; ++i) {
        dynamicArray[i] = i * 2;
    }

    // Print the values in the array
    printf("Dynamic Array: ");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    // Resize the array
    dynamicArray = (int*)realloc(dynamicArray, 10 * sizeof(int));

    // Check if the reallocation was successful
    if (dynamicArray == NULL) {
        printf("Memory reallocation failed.\n");
        return 1; // Exit with an error code
    }

    // Initialize the additional elements
    for (int i = 5; i < 10; ++i) {
        dynamicArray[i] = i * 2;
    }

    // Print the updated values in the array
    printf("Updated Dynamic Array: ");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", dynamicArray[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(dynamicArray);

    return 0; // Exit successfully
}
