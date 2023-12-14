#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr1 = malloc(5 * sizeof(int));
    if (!arr1) { printf("Malloc failed!\n"); return 1; }
    printf("Using malloc:\n");
    for (int i = 0; i < 5; i++) printf("%d ", (arr1[i] = i + 1));
    printf("\n");
    int *arr2 = calloc(3, sizeof(int));
    if (!arr2) { printf("Calloc failed!\n"); free(arr1); return 1; }
    printf("\nUsing calloc:\n");
    for (int i = 0; i < 3; i++) printf("%d ", (arr2[i] = i + 1));
    printf("\n");
    int *arr3 = realloc(arr1, 8 * sizeof(int));
    if (!arr3) { printf("Realloc failed!\n"); free(arr1); free(arr2); return 1; }
    printf("\nUsing realloc:\n");
    for (int i = 0; i < 8; i++) printf("%d ", arr3[i]);
    printf("\n");
    free(arr2);
    free(arr3);
    return 0;
}
