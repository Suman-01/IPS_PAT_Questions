#include <stdio.h>
#include <string.h>

void swap(char* str1, char* str2) {
    char temp[50];
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);
}

void rearr(char* strs[], int n) {
    int i, j;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(strs[i], strs[j]) > 0) {
                swap(strs[i], strs[j]);
            }
        }
    }
}

int main() {
    char* strs[] = {"Uma", "Rani", "Soma", "Kannan"};
    int n = sizeof(strs) / sizeof(strs[0]);

    printf("Before rearranging:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strs[i]);
    }

    rearr(strs, n);

    printf("\nAfter rearranging:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", strs[i]);
    }

    return 0;
}
