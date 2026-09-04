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
