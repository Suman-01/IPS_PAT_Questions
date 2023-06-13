#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define maxinp 1000

int cntw(const char* input) {
    int cnt = 0;
    int length = strlen(input);

    for (int i = 0; i < length; i++) {
        if (input[i] == ' ' && (i + 1 < length) && input[i + 1] != ' ') {
            cnt++;
        }
    }

    return cnt + 1;
}

int cnts(const char* input) {
    int cnt = 0;
    int length = strlen(input);

    for (int i = 0; i < length; i++) {
        if (input[i] == '.' || input[i] == '?' || input[i] == '!') {
            cnt++;
        }
    }

    return cnt;
}

int main() {
    char input[maxinp];
    char* endKeyword = "END";
    int wcnt = 0;
    int scnt = 0;

    printf("Enter text (type 'END' to stop):\n");

    while (1) {
        fgets(input, sizeof(input), stdin);
        input[strcspn(input, "\n")] = '\0';

        for (int i = 0; input[i]; i++) {
            input[i] = toupper(input[i]);
        }

        if (strcmp(input, endKeyword) == 0) {
            break;
        }

        wcnt += cntw(input);
        scnt += cnts(input);
    }

    printf("Number of words: %d\n", wcnt);
    printf("Number of sentences: %d\n", scnt);

    return 0;
}
