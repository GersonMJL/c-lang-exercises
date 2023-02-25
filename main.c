#include <stdio.h>
#include <stdlib.h>

// Develop a C program that reads the height of people whose number of people is given by the user.
// This program should check and show the highest and lowest height.
int heights() {
    char input[20];
    int numberPeople;
    int highestHeight, lowestHeight = 0;

    printf("Insert number of people:\n");
    scanf("%s", input);
    numberPeople = (int) strtol(input, NULL, 10);

    int heights[numberPeople - 1];

    for (int i = 0; i < numberPeople; ++i) {
        printf("Insert height of person number %d:\n", i+1);
        scanf("%s", input);
        heights[i] = (int) strtol(input, NULL, 10);
    }

    for (int i = 0; i < numberPeople; ++i) {
        if (i == 0) {
            lowestHeight = heights[i];
            highestHeight = heights[i];
        } else {
            if (heights[i] > highestHeight) {
                highestHeight = heights[i];
            }
            if (heights[i] < lowestHeight) {
                lowestHeight = heights[i];
            }
        };
    }

    printf("The biggest height is: %d\n", highestHeight);
    printf("The smallest height is: %d\n", lowestHeight);
    return 0;
}

// Write a program in C that reads an initial value A and print the sequence of factorial calculation values of A (A!)
// and its result. Ex: 5! = 5 X 4 X 3 X 2 X 1 = 120.
int factorial() {
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

int main() {
    factorial();
    heights();
    return 0;
}
