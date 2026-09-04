'''
Prologue:
Name: EECS 348 Assignment 1
Desc.: This program is a game that a user get to guess a secret number between 1-10, and      
then loops 3 times and after the third guess, if not guessed correctly, will tell the used if
they lost.
Inputs: Any number between 1 and 10, any other answers will be treated as an error.
Outputs: "Attempt %d/%d. Enter your guess: "
	 "Error: Please enter a number.\n"
	 "Correct! You win!\n"
	 "Too low! Try again.\n"
	 "Too high! Try again.\n"
	 "You lose! The secret number was %d.\n"

Code Sources: Chatgpt
Name: Miakah Komardley
Creation Date: Sept. 4th, 2026
Revision Date: Sept. 4th, 2026
'''

#include <stdio.h>

int main() {
    int secret = 7;
    int guess;
    int attempt = 1;
    int correct = 0;

    printf("Guess a number between 1 and 10.\n");

    while (attempt <= 3) {
        printf("Attempt %d/3. Enter your guess: ", attempt);
        scanf("%d", &guess);

        if (guess == secret) {
            printf("Correct! You win!\n");
            correct = 1;
            break;
        } else if (guess < secret) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }

        attempt++;
    }

    if (!correct) {
        printf("You lose! The secret number was %d.\n", secret);
    }

    return 0;
}
