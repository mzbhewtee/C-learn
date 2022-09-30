#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/* User Input: Prompt the user for a positive integer
*  Closest integer: check for the closest integer that has a perfect square
*  return: closest integer with a perfect square
*/
 int main(){

    int IntCheck;
    float FloatCheck, digit;

    printf("Enter a positive integer: ");
    scanf("%f", &digit);


    IntCheck = sqrt(digit);
    FloatCheck = IntCheck;

    return 0;
 }