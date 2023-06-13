#include <stdio.h>

int gcd(int num1, int num2) {
    while (num1 != num2) {
        if (num1 > num2) {
            num1 -= num2;
        } else {
            num2 -= num1;
        }
    }
    return num1;
}

int lcm(int num1, int num2) {
    int gcd1 = gcd(num1, num2);
    int lcm1 = (num1 * num2) / gcd1;
    return lcm1;
}

int main() {
    int num1, num2;
    
    printf("Enter number 1: ");
    scanf("%d", &num1);
    
    printf("Enter number 2: ");
    scanf("%d", &num2);
    
    int lcm1 = lcm(num1, num2);
    
    printf("LCM of %d and %d is %d\n", num1, num2, lcm1);
    
    return 0;
}
