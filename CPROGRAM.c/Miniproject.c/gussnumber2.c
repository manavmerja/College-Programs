#include <stdio.h>
#include <stdlib.h>

int main() {
    int guess;  // Variable to store the user's guess
    int attempts = 5;  // Total number of attempts allowed
    int secretNumber = 15;  // The number to be guessed

    // Welcome message
    printf("Welcome to the Guess the Number Game!\n");
    printf("I have selected a number between 1 and 100.\n");
    printf("You have %d attempts to guess it correctly!\n\n", attempts);

    // Game loop for the attempts
    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d: Enter your guess: ", i);
        scanf("%d", &guess);  // Get the user's guess

        // Check if the guess is correct
        if (guess == secretNumber) {
            printf("Congratulations! You guessed the number correctly in %d attempt(s)!\n", i);
            return 0;  // Exit the program if the guess is correct
        } 
        // Provide feedback on the guess
        else if (guess < secretNumber) {
            printf("Too low! Try a higher number.\n");
        } 
        else {
            printf("Too high! Try a lower number.\n");
        }
    }
    
    // Inform the user that they have run out of attempts
    printf("\nYou've used all %d attempts. The correct number was %d.\n", attempts, secretNumber);
    printf("Better luck next time!\n");
    
    return 0;  // End of the program
}