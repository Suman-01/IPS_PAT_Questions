#include <stdio.h>
#include <string.h>

#define SIZE 6

struct cntr {
    char name[20];
    char capital[20];
};

void displayCapital(const struct cntr data[], const char* country) {
    int i;
    for (i = 0; i < SIZE; i++) {
        if (strcmp(data[i].name, country) == 0) {
            printf("Capital of %s is %s\n", data[i].name, data[i].capital);
            return;
        }
    }
    printf("Country not found in the database\n");
}

void displayCountry(const struct cntr data[], const char* capital) {
    int i;
    for (i = 0; i < SIZE; i++) {
        if (strcmp(data[i].capital, capital) == 0) {
            printf("Country with capital %s is %s\n", data[i].capital, data[i].name);
            return;
        }
    }
    printf("Capital not found in the data\n");
}

int main() {
    struct cntr data[SIZE] = {
        {"India", "New Delhi"},
        {"Australia", "Canberra"},
        {"Bangladesh", "Dhaka"},
        {"Bhutan", "Thimphu"},
        {"Canada", "Ottawa"},
        {"China", "Beijing"}
    };

    char input[20];
    while (1) {
        printf("Enter a country or capital (End to exit): ");
        scanf("%s", input);

        if (strcmp(input, "End") == 0) {
            break;
        }

        if (islower(input[0])) {
            displayCapital(data, input);
        } else {
            displayCountry(data, input);
        }
    }

    return 0;
}
