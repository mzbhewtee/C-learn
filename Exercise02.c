#include <stdio.h>

/* User Input: Prompt the user to input a positive integer
*  Sum: copmute the sum of all the digits inputer
*  Return: the sum, eg user input-2784, return 21
*/

int sum(int digit){ //Function that returns the sum of the inputted digit

    int sum=0, remainder; //initialize the variables sum and remainder

    while(digit != 0){ //execute the following lines as long as the digit is not zero
        remainder = digit % 10; // store the remainder when the digit is divided by 10
        sum = sum + remainder; // add the remainder to sum hich was initially 0
        digit = digit/10; // divide the remaining number by 10 and continue the loop until there is nothing left

    }
    return sum; //return the sum
}

int main(){ //main function 
    int digit; //initialize the variable thnat the user will input

    printf("Input a positive integer: "); // prompt the user to input the digit
    if(scanf("%d", &digit) == 1){ //store the digit in the variable digit and also check if the user input is an integer

        if (digit >= 0){ //make sure the user input a positive integer

            printf("You inputted: %d", digit); //print out the inputted digit

            printf("\nThe sum of the inputted digit is: %d\n", sum(digit)); //call the funtion sum while putting the inputted digit inside of it
        }
        else{ // if the user input is a negative integer
        printf("Input a positive integer\n"); //prompt the user for another integer
        main(); // call the function
        }
    }
    else{
        printf("Invalid Input");
    }
    return 0; // return 0 is properly executed
}