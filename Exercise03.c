#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* User Input: Prompt the user for a positive integer
*  Closest integer: check for the closest integer that has a perfect square
*  return: closest integer with a perfect square
*/

int main ()
{

  double userNum, Root1; // Initialize the variables
  int Root2, roundRoot;
  printf("Input a number: "); // prompt the user to input the digit

  if(scanf("%lf", &userNum)==1){ //store the digit in the variable digit and also check if the user input is an integer

  int userInput = (int)userNum;
  int count = 0; //set the variable that count user input to 0

  while (userInput != 0){
      
      userInput = userInput / 10; //count the input
      count = count + 1;
   }

   if(count > 7){ //   /Checks if the number of digits inputted are more than 7/
      printf("Enter a number not more than 7 \n");
   }
   else{
      
      Root1 = sqrt(userNum); //Calculate the square root of the number inputted by the user and then round the result up
      roundRoot = round(Root1);
      
      if ((Root1 - roundRoot) != 0){ //Check if the squareroot is a whole number
         
          Root2 = roundRoot * roundRoot; ///  /Squares the rounded value of the squareroot of the number inputted to find the closest integer having a whole number squareroot/
          printf("The closest integer having a whole number square root is %d \n", Root2);
      }
      else{
          printf("Is a whole number square root \n");
      }
   }
  }
  return 0;
}