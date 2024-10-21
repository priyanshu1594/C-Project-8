#include <stdio.h>

// User-defined function to calculate the cube of array elements
void findCubes(int *arr, int rows, int cols) {
    printf("Cubes of all elements:\n");
    
    // Loop through the 2D array using a pointer
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // Calculate the cube of the element and print
            int cube = (*(arr + i * cols + j)) * (*(arr + i * cols + j));
            printf("%d ", cube);
        }
        printf("\n"); // Move to the next row
    }
}

int main() {
    int size;

    printf("Enter array's size: ");
    scanf("%d", &size);

    int array[size][size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    findCubes((int *)array, size, size);

    return 0;
}
