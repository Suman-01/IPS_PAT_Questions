#include <stdio.h>

int main() {
    
    int n;
    printf("No. of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i=0; i<n; i++) {
        printf("Elements %d is: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = i+1; j < n; j++){
            if (arr[j] < arr[i]){
                int k = arr[i];
                arr[i] = arr[j];
                arr[j] = k;
            }
        }
    }
    
    printf("The arranged array is: ");
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    
    
    return 0;
}
