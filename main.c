#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5; // размер массива
    int* arr1 = (int*)malloc(n * sizeof(int)); 
    int* arr2 = (int*)malloc(n * sizeof(int)); 
    
    // заполнение массивов
    for (int i = 0; i < n; i++) {
        arr1[i] = i + 1;
        arr2[i] = (i + 1) * 10;
    }
    
    // вывод элементов массивов
    printf("arr1: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
    
    printf("arr2: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    
    
    free(arr1);
    free(arr2);
    
    return 0;
}
