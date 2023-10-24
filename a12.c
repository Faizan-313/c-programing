#include <stdio.h>

void multiplyByThree(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 3;
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    multiplyByThree(arr, size);

    printf("Array after multiplying each element by 3:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}