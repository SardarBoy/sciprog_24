#include <stdio.h>
#include <stdlib.h>


int* allocate_array(int size) {
    int *array = (int *)malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    return array;
}


void fill_with_ones(int *array, int size) {
    for (int i = 0; i < size; i++) {
        array[i] = 1;
    }
}


void print_array(int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}


void free_array(int *array) {
    free(array);
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
  
    int *array = allocate_array(size);
    fill_with_ones(array, size);


    printf("Array filled with ones: ");
    print_array(array, size);

    free_array(array);

    return 0;
}
