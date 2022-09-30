#include <stdio.h>
#include <stdlib.h>


/* User Input: Get an array of numbers from users where input upper bound is greater than 1
*  Allow the user to be able to change the upper bound if less than 1 or equal to 0
*  Sum: sum up the odd numbers, even numbers
*  Absolute difference: Get the absolute difference of both sums
*  a 1/3 of the sum of the even numbers and 1/5 of the odd numbers sum
*/



int main(){
    int arrayLength, list[100]; //Intialize the length of the array and the list
    double odd=0, even=0; //initialize the odd and even numbers that will later be summed
    

    printf("How many numbers will you be entering? "); //prompt the user for the array length
    if (scanf("%d", &arrayLength)== 1){ //Store the input in the arrayLength variable and check if the input is valid
    
        for(int i = 0; i <= arrayLength - 1; i++){ //loop through the length of the array 
            printf("Enter number %d: ", i + 1); //prompt the user to input a number for each loop
            scanf("%d", &list[i]); //save the input for every loop

            if(list[0] < list[i] && list [i] <= 0){ // check for the highest number inputted and see if the highest is 0
                printf("Your highest number is not allowed to be 0, enter another number greater than 1 \n"); //print out info to the user
                printf("Enter number %d: ", i + 1); // prompt the user to input another number 
                scanf("%d", &list[i]); // store the newly inputted number
            }
        }
    
        printf("You have entered the following numbers: "); //display the inputted number back to the user
        for(int i = 0; i <= arrayLength - 1; i++){ // loop through the array
            printf("%d ", list[i]); //print each element per loop
        }

        for(int i = 0; i <= arrayLength -1; i++){ //loop through the array
            if(list[i] % 2 == 0){ //check for each loop if the element when divide by 2 the remainder is 0
                even = even + list[i]; // sum the element per loop
            }
            else{
                odd = odd + list[i]; //check if the element when divided by 2 the remainder is 1 then add ten sum it per loop
            }
        }
        double absolute = abs(even - odd); //abs is a int function, store the absolute value in a double data type to avoid having zeros all the time  
    
    // print out the solutions

        printf("\nSum of the even numbers in the array is: %.2lf", even);
        printf("\nSum of the odd numbers in the array is: %.2lf", odd);
        printf("\nThe absolute difference between the sum of the even and odd is: %.2lf", absolute);
        printf("\nOne third of the sum of the even number: %.2lf", even/3);
        printf("\nOne fifth of the sum of the odd number is: %.2lf", odd/5);
    }

    else { // check if the user input is not valid
        printf("Try again by inputting an integer\n");
        //stop the program if the user input is not valid
    }
    // return 0
    return 0;
}