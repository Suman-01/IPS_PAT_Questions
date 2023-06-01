#include <stdio.h>

int main(){
    int n;
    printf("Enter the value n: ");
    scanf("%d",&n);
    
    int arr[n];
    for (int i=0; i<n; i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    for (int i=0; i<n; i++){
        printf("%d\n", arr[i]);
    }
    
    int larg=0;
    for (int i=0; i<n; i++){
        if (larg<arr[i]){
            larg=arr[i];
        }
        else{
            continue;
        }
    }
    printf("The largest no. is: %d", larg);
    return 0;
}