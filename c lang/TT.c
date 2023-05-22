#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int* array;

    
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    
    array = (int*)malloc(n * sizeof(int));

    
    if (array == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    
    printf("\nElements of the array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }

    
    free(array);

    return 0;
}
