#include <stdio.h>
#include <stdlib.h>

// Develop a C program that reads the height of people whose number of people is given by the user.
// This program should check and show the highest and lowest height.
int main() {
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
