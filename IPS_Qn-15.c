#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define maxlen 100

struct custm {
    char name[maxlen];
    int acc;
    double bal;
};

void lowbal(struct custm* customers, int num) {
    printf("Customers with balance less than Rs. 2000:\n");
    
    for (int i = 0; i < num; i++) {
        if (customers[i].bal < 2000) {
            printf("Name: %s\n", customers[i].name);
        }
    }
    
    printf("\n");
}

void intr(struct custm* customers, int num) {
    printf("Customers who received interest (5%%) on their balance:\n");
    
    for (int i = 0; i < num; i++) {
        if (customers[i].bal > 10000) {
            double interest = customers[i].bal * 0.05;
            customers[i].bal += interest;
            
            printf("Name: %s\n", customers[i].name);
            printf("Account Number: %d\n", customers[i].acc);
            printf("Balance: Rs. %.2f\n", customers[i].bal);
            printf("\n");
        }
    }
}

int main() {
    int num;
    
    printf("Enter the number of customers: ");
    scanf("%d", &num);
    
    struct custm* customers = (struct custm*)malloc(num * sizeof(struct custm));
    
    for (int i = 0; i < num; i++) {
        printf("\nEnter details for customer %d:\n", i + 1);
        
        printf("Name: ");
        scanf("%s", customers[i].name);
        
        printf("Account Number: ");
        scanf("%d", &customers[i].acc);
        
        printf("Balance: Rs. ");
        scanf("%lf", &customers[i].bal);
    }
    
    lowbal(customers, num);
    
    intr(customers, num);
    
    free(customers);
    
    return 0;
}
