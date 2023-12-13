#include <stdio.h>

int linear_search(int *array, size_t size, int value) {
    if (array == NULL) {
        printf("Array is NULL\n");
        return -1; // Array is NULL, return -1
    }

    for (size_t i = 0; i < size; ++i) {
        printf("Comparing %d with %d\n", array[i], value);

        if (array[i] == value) {
            return i; // Value found, return the index
        }
    }

    return -1; // Value not found in the array
}

int main() {
    // Example usage
    int arr[] = {10, 5, 7, 2, 8};
    size_t size = sizeof(arr) / sizeof(arr[0]);
    int search_value = 7;

    int result = linear_search(arr, size, search_value);

    if (result != -1) {
        printf("Value %d found at index %d\n", search_value, result);
    } else {
        printf("Value %d not found in the array\n", search_value);
    }

    return 0;
}
