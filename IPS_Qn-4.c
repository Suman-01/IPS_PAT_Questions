#include <stdio.h>

int main(){
    int n;
    printf("Enter the value n: ");
    scanf("%d",&n);
    
    if (n%2!=0){
        printf("Weird");
    }
    else{
        if (2 <= n && n <= 5){
            printf("Not Weird (2,3,4,5)");
        }
        else if (6 <= n && n <= 20){
            printf("Not Weird (6,7..,19,20)");
        }
        else{
            printf("Not Weird (21, 22,..)");
        }
    }
    return 0;
}