#include <stdio.h>

int main() {
    int guess = 0;
    int attempts = 0;
    int password[5] = {42, 15, 7, 93, 28};
    int round = 0;
    int choice;

    printf("Welcome to the Guessing Game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("Can you guess what it is?\n");
    printf("You have seven attempts to guess the correct number.\n");
    while (guess != password[round]) {
        if (attempts < 7) {
            printf("Enter your guess: ");
            scanf("%d", &guess);
            attempts++;    
            if (guess < password[round])
            {printf("Too low! Try again.\n");}
            else if (guess > password[round])
            {printf("Too high! Try again.\n");}
            else {
                printf("Congratulations! You've guessed the correct number: %d\n", password[round]);
                if (round == 4) {
                    printf("You've completed all rounds! Well done!\n");
                    break;
                } else {
                    printf("Wanna try the next number? Input 1 to continue or 0 to quit: ");
                    scanf("%d", &choice);
                    if (choice == 1) {
                        round++;
                        attempts = 0;
                        guess = 0;
                    } else {
                        printf("Thanks for playing! Goodbye!\n");
                        break;
                    }
                }
            }
        } else {
            printf("Sorry, you've used all your attempts. The correct number was %d.\n", password[round]);
            break;
        }
    }
    return 0;
}
