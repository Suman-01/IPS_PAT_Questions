#include <stdio.h>

int ctdgt(int num) {
    int cnt = 0;
    while (num != 0) {
        num /= 10;
        cnt++;
    }
    return cnt;
}

int ctodd(int num) {
    int cnt = 0;
    while (num != 0) {
        if ((num % 10) % 2 != 0) {
            cnt++;
        }
        num /= 10;
    }
    return cnt;
}

int sumdgt(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int reverse(int num) {
    int reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return reversed;
}

void word(int num) {
    const char* words[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (num == 0) {
        printf("Number in words: zero\n");
        return;
    }

    int reversed = reverse(num);

    while (reversed != 0) {
        int digit = reversed % 10;
        printf("%s ", words[digit]);
        reversed /= 10;
    }
    printf("\n");
}

int main() {
    int choice;
    int num;

    do {
        printf("Menu:\n");
        printf("1. Count digits\n");
        printf("2. Count odd digits\n");
        printf("3. Sum of digits\n");
        printf("4. Reverse number\n");
        printf("5. Convert to words\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Number of digits: %d\n", ctdgt(num));
                break;
            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Number of odd digits: %d\n", ctodd(num));
                break;
            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Sum of digits: %d\n", sumdgt(num));
                break;
            case 4:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Reversed number: %d\n", reverse(num));
                break;
            case 5:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Number in words: ");
                word(num);
                break;
            case 0:
                printf("Thank you! Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 0);

    return 0;
}
