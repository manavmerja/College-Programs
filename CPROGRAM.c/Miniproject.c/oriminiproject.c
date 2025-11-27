#include<stdio.h>

// Define the main function
int main() {

    // Initialize a variable to hold the number of attempts
    int guess, attempts = 5;

    printf("Welcome to the Guess the Number Game!\n");

    printf("I have selected a number between 1 and 100.\n");

    printf("You have %d attempts to guess it correctly!\n\n", attempts);

    // Game loop for the attempts
    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d: Enter your guess: ", i);
        scanf("%d", &guess);
        if (guess == 38) {
            // Print a success message if the guess is correct
            printf("Congratulations! You guessed the number correctly in %d attempt(s)!\n", i);
            return 0;  // Exit the program
        } else if (guess <33) {
            printf("Too low! Try a higher number.\n");
        } else if (guess > 43){
            printf("Too high! Try a lower number.\n");
        } else if(guess<38 && guess>=33){
            printf("Too close!Try little heigher number\n ");
        }  else if(guess>38 && guess<=43){
            printf("Too close!Try little lower number\n ");
        } 

        }
    
    printf("\nYou've used all %d attempts. The correct number was 15.\n", attempts );
    printf("Better luck next time!\n");
    return 0;  // Exit the program
}