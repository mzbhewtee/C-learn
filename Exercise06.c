#include <stdio.h>  

/* print: pyramid patterns
*/

int main()  
{  
    //initialize the variables  
    int i, j, k, uprows, upspace, downrows, downspace;

    uprows = 5; //initialize the uprow size
    upspace = 4; // initize the number of space in between
    for (i = 1; i <= uprows; i++){ // for each number in the uprows do the following line
        for(j = 0; j < upspace; j++){ //print out space for each row, if you have 1 asterik print 4 space
            printf(" ");
        }
        for(k=1; k <= i; k++){ // for loop for the asterik
            printf("* ");
        }
        printf("\n");
        upspace--; //the number of space decreases down the loop
    }  

    downrows = 0; //initialize the downrow size
    downspace = 0; // initize the number of space in between
    for (i = 5; i > downrows; i--){ // for each number in the downrows do the following line
        for(j = 0; j < downspace; j++){ //print out space for each row, if you have 1 asterik print 4 space
            printf(" ");
        }
        for(k=0; k < i; k++){ // for loop for the asterik
            printf("* ");
        }
        printf("\n");
        downspace++; //the number of space increases down the loop
    }  
    
    return 0;      
}  
