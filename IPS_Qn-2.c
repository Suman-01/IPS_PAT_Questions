#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    int arr[n];
    for (int i=0; i<n; i++){
        printf("Enter the no. of balls in bag %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    int sum=0;
    for (int i=0; i<n-1; i++){
        printf("%d, ", arr[i]);
        sum+=arr[i];
    }
    
    printf("%d\n", arr[n-1]);
    printf("%d\n", arr[n-1]+sum);
    return 0;
}