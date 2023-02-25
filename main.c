#include <stdio.h>
#include <stdlib.h>

int heights() {
    char input[20];
    int numberPeople;
    int biggestHeight, smallestHeight = 0;

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
            smallestHeight = heights[i];
            biggestHeight = heights[i];
        } else {
            if (heights[i] > biggestHeight) {
                biggestHeight = heights[i];
            }
            if (heights[i] < smallestHeight) {
                smallestHeight = heights[i];
            }
        };
    }



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
//    factorial();
    heights();
    return 0;
}
