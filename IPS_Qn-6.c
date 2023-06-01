#include <stdio.h>

void display(int array[], int size){
    printf("Elements of Array are:\n");
    for (int i = 0; i < size; i++){
        printf("%d\n", array[i]);
    }
}

void duplicates(int arr[], int *size){
    int removedCount = 0;
    
    for (int i = 0; i < *size - 1; i++) {
        for (int j = i + 1; j < *size; j++) {
            if (arr[i] == arr[j]) {
                printf("Removed: %d\n", arr[j]);
                for (int k = j; k < *size - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                removedCount++;
                j--;
                (*size)--;
            }
        }
    }
    
    if (removedCount == 0) {
        printf("No duplicates found.\n");
    }
}

int main(){
    int n;
    printf("Enter length of array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    display(arr, n);
    duplicates(arr, &n);
    return 0;
}