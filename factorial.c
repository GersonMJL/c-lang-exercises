#include <stdio.h>
#include <stdlib.h>

// Write a program in C that reads an initial value A and print the sequence of factorial calculation values of A (A!)
// and its result. Ex: 5! = 5 X 4 X 3 X 2 X 1 = 120.
int main() {
    char input[20];
    long value;
    long factorial = 1;

    printf("Insert the value:\n");
    scanf("%s", input);
    value = strtol(input, NULL, 10);

    for (int i = 1; i <= value; ++i) {
        factorial *= i;
    }

    printf("%ld", factorial);
    return 0;
}