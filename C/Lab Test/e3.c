#include <stdio.h>
#include <stdlib.h>

void addElement(int **array, int *size, int element);
void deleteElement(int **array, int *size, int element);
void displayArray(const int *array, int size);

int main() {
    int *array = NULL;
    int size = 0;

    addElement(&array, &size, 10);
    addElement(&array, &size, 20);
    addElement(&array, &size, 30);

    displayArray(array, size);

    deleteElement(&array, &size, 20);

    displayArray(array, size);

    free(array);

    return 0;
}

void addElement(int **array, int *size, int element) {
    int *newArray = realloc(*array, (*size + 1) * sizeof(int));
    newArray[*size] = element;
    *array = newArray;
    (*size)++;
}

void deleteElement(int **array, int *size, int element) {
    int i;

    for (i = 0; i < *size; i++) {
        if ((*array)[i] == element) {
            break;
        }
    }

    if (i == *size) {
        printf("Element not found.\n");
        return;
    }

    for (int j = i; j < *size - 1; j++) {
        (*array)[j] = (*array)[j + 1];
    }

    int *newArray = realloc(*array, (*size - 1) * sizeof(int));
    *array = newArray;
    (*size)--;
}

void displayArray(const int *array, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}
