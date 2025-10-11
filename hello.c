#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Function to calculate the sum of an array
int sum(int arr[], int size) {
    int total = 0;
    for(int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

// Function to reverse a string
void reverse(char str[]) {
    int n = strlen(str);
    for(int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}


// Function t  o print a multiplication table
void printMultiplicationTable(int size) {
    printf("\nMultiplication Table (%dx%d):\n", size, size);
    for(int i = 1; i <= size; i++) {
        for(int j = 1; j <= size; j++) {
            printf("%4d", i * j);
        }
        printf("\n");
    }
}

// Function to print a star pattern
void printStarPattern(int rows) {
    printf("\nStar Pattern:\n");
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    printf("hello joshua BILLY ready for to day ? if yes click enter \n\n");

    // 1. User input
    char name[50];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = 0; // Remove newline
    printf("Hello, %s!\n\n", name);

    // 2. Array and loop
    int numbers[5];
    printf("Enter 5 integers:\n");
    for(int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // 3. Function call
    int total = sum(numbers, 5);
    printf("\nThe sum of your numbers is: %d\n", total);

    // 4. String manipulation
    printf("\nLet's reverse your name!\n");
    reverse(name);
    printf("Your name reversed is: %s\n", name);

    // 5. Random number
    srand((unsigned int)total);
    int random = rand() % 100 + 1;
    printf("\nHere's a random number between 1 and 100: %d\n", random);

    // 6. Loop example
    printf("\nCounting from 1 to 10:\n");
    for(int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printMultiplicationTable(10);

  
    printStarPattern(10);

    time_t now = time(NULL);
    printf("\nCurrent system time: %s", ctime(&now));

    printf("\nThank you for using the demo program!\n");
    return 0;

}
// Function to print a multiplication table of given size   
// Function to print a star pattern of given number of rows 
// Main function demonstrating various features

