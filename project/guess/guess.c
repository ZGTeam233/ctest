#include <stdio.h>
#define PASSWORD 57

int main() {
    int guess = 0;
    int attempts = 0;

    printf("Welcome to the Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Can you guess what it is?\n");
    printf("You have seven attempts to guess the correct number.\n");

    while (guess != PASSWORD) {
        if (attempts < 7) {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            attempts++;    
            if (guess < PASSWORD) {
                printf("Too low! Try again.\n");
            } else if (guess > PASSWORD) {
                printf("Too high! Try again.\n");
            } else {
                printf("Congratulations! You've guessed the correct number: %d\n", PASSWORD);
            }
        } else {
            printf("Sorry, you've used all your attempts. The correct number was %d.\n", PASSWORD);
            break;
        }
    }
    return 0;
}