#include <stdio.h>


/* Count: Number of uppercase, lowercase and special characters in a sentence
*  Sub-Function: Use sub function for each case
*  return: uppercase, lowercase and special characters
*/

int uppercase(char sentence[100]){
    int uppercase = 0;
    
    for (int i = 0; sentence[i] != '\0'; i++){

        if (sentence[i] >= 'A' && sentence[i] <= 'Z'){
            uppercase++;
        }
    }
    
    
    return uppercase;
}

int lowercase(char sentence[100]){
    int lowercase = 0;
    
    for (int i = 0; sentence[i] != '\0'; i++){

        if (sentence[i] >= 'a' && sentence[i] <= 'z'){
            lowercase++;
        }
    }
    
    
    return lowercase;
}

int specialCharacter(char sentence[100]){
    int SCharacter = 0, alphabetDigits=0;
    
    for (int i = 0; sentence[i] != '\0'; i++){

        if ((sentence[i] >= 'a' && sentence[i] <= 'z') || (sentence[i] >= 'A' && sentence[i] <= 'Z') || (sentence[i] >= '0' && sentence[i] <= '9')){
            alphabetDigits++;
        }
        else{
            SCharacter++;
        }
    }
    
    
    return SCharacter;
}

int main(){
    char sentence[100] = "My Gmail Address IS b.ikudehinb@alustudent.com";
    printf("Number of uppercase: %d\n",uppercase(sentence));
    printf("Number of lowercase: %d\n",lowercase(sentence));
    printf("Number of special character: %d\n",specialCharacter(sentence));

    return 0;
}