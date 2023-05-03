#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char input[100];
int position = 0;
int error = 0;

void expression();

int main() {
    printf("Enter an arithmetic expression: ");
    fgets(input, 100, stdin);

    expression();

    if (!error && input[position] == '\n') {
        printf("Valid expression\n");
    } else {
        printf("Invalid expression\n");
    }

    return 0;
}

void expression() {
    if (isdigit(input[position])) {
        while (isdigit(input[position])) {
            position++;
        }
    } else {
        error = 1;
        return;
    }

    if (input[position] == '+' || input[position] == '-') {
        position++;
        expression();
    } else if (input[position] == '*' || input[position] == '/') {
        position++;
        if (isdigit(input[position])) {
            while (isdigit(input[position])) {
                position++;
            }
        } else {
            error = 1;
            return;
        }
        expression();
    }
}

