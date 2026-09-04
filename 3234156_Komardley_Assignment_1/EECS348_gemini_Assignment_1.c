#include <stdio.h>

int main() {
    // Set the secret number
    int secret = 7;

    // Variable to store the user's guess
    int guess;

    // Maximum number of attempts
    int max_attempts = 3;

    // Keeps track of whether the user won
    int won = 0;

    // Print the instructions
    printf("Guess a number between 1 and 10.\n");

    // Give the user up to 3 attempts
    for (int i = 1; i <= max_attempts; i++) {
        printf("Attempt %d/%d. Enter your guess: ", i, max_attempts);

        // Check if the user entered a number
        if (scanf("%d", &guess) != 1) {
            printf("Error: Please enter a number.\n");

            // Clear the invalid input from the keyboard
            while (getchar() != '\n');

            // Do not count invalid input as an attempt
            i--;

            continue;
        }

        // Check if the guess is correct
        if (guess == secret) {
            printf("Correct! You win!\n");
            won = 1;

            // Stop the loop immediately
            break;

        // Check if the guess is too low
        } else if (guess < secret) {
            if (i < max_attempts) {
                printf("Too low! Try again.\n");
            }

        // Otherwise, the guess is too high
        } else {
            if (i < max_attempts) {
                printf("Too high! Try again.\n");
            }
        }
    }

    // If the user did not guess correctly, print the losing message
    if (!won) {
        printf("You lose! The secret number was %d.\n", secret);
    }

    return 0;
}
