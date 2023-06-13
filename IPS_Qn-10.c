#include <stdio.h>

void ldr(int arr[], int size) {
    int mx = arr[size - 1]; 

    printf("Leaders: ");
    printf("%d ", mx); 

    
    for (int i = size - 2; i >= 0; i--) {
        if (arr[i] > mx) {
            printf("%d ", arr[i]); 
            mx = arr[i]; 
        }
    }

    printf("\n");
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    ldr(arr, size);

    return 0;
}
