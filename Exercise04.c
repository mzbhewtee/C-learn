#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Random: randomly generate a number from 1 to 100
*  User Input: Ask the user to guess the number
*  Attempt: The user gets 10 attempts to guess the correct number
*  Info: on each attempt info the user if the number guessed is greater or less
*/


int main(){

    int guessedNumber, Guess, GuessCounter=1; //Initialize the variables and set to Guess counter to 1 so that the counting will start from 1

    srand(time(0)); //Set a timer for when the number should be randomly generated
    Guess = rand() % 100 + 1; // randomly generate number ffrom 1 to 100


    while (guessedNumber != Guess){ // while the guessed number is not equal to guess(initial stage)
       
        printf("Guess a number between 1 and 100:\n"); // ask the user for the prompt

        scanf("%d", &guessedNumber); // store the inputted number

        if(GuessCounter > 9){ //Check if the counter is greater than 9
            printf("Game Over!\n"); // If greater print Game over
            break; //stop the program
        }

        if (guessedNumber > Guess){ // check if the number guesed is greater than the guess
            printf("The number you guessed is greater\n");
            GuessCounter++; //increment the guess counter
            continue; //continue the program as long as the counter is not greater than 9

        }
        else if (guessedNumber < Guess){ // check if the guessed number is less than the guess
            printf("The number you guessed is lesser\n");
            GuessCounter++; // increment the guess counter
            continue; // continue the program as long as the counter is not greater than 9
        }
        else{ // check if the guessed number is correct
            printf("You have guessed the right number!!!\n");
            printf("You guessed the number '%d' in %d attempts\n", Guess, GuessCounter);
        }
        
    }
    return 0;
}