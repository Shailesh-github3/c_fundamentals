/*
//count total number of alphabets, digits and special characters in a string.
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int alphabets = 0, digits = 0, special = 0, i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    while (str[i] != '\0') {
        if (isalpha(str[i])) alphabets++;
        else if (isdigit(str[i])) digits++;
        else if (str[i] != '\n') special++;
        i++;
    }
    printf("Alphabets: %d\n", alphabets);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", special);
    return 0;
}
*/

/*
//print alphabets
#include <stdio.h>
int main() {
    char alphabets[26];
    char *ptr = alphabets;
    printf("Alphabets: ");
    // Fill the array with alphabets A to Z
    for (int i = 0; i < 26; i++) {
        *(ptr + i) = 'A' + i;
        printf("%c ", *(ptr + i));
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int i, j;
    // Read the input string
    //printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove the newline character if it exists
    str[strcspn(str, "\n")] = '\0';
    // Print the pattern
    for(i = 1; i <= strlen(str); i++) {
        for(j = 1; j <= i; j++) {
            printf("%c", str[j-1]);
        }
        printf("\n");
    }
    return 0;
}
*/
/*---------------------------------------------------------------------------------------------------*/
#include <stdio.h>  
#include <string.h>  
int main()  
{   char string[] = "Welcome to Saveetha Engineering College";  
    char words[100][100], small[100], large[100];  
    int i = 0, j = 0, k, length;  
    //Split the string into words such that each row of array words represents a word  
    for(k=0; string[k]!='\0'; k++){  
        //Here, i represents row and j represents column of two-dimensional array words   
        if(string[k] != ' ' && string[k] != '\0'){  
            words[i][j++] = string[k];  
        }  
        else{  
            words[i][j] = '\0';  
            //Increment row count to store new word  
            i++;  
            //Set column count to 0  
            j = 0;  
        }  
    }  
    //Store row count in variable length  
    length = i + 1;  
    //Initialize small and large with first word in the string  
    strcpy(small, words[0]);  
    strcpy(large, words[0]);  
    //Determine smallest and largest word in the string  
    for(k = 0; k < length; k++){  
        //If length of small is greater than any word present in the string  
        //Store value of word into small  
        if(strlen(small) > strlen(words[k])){  
            strcpy(small, words[k]);  
        }  
        //If length of large is less than any word present in the string  
        //Store value of word into large  
        if(strlen(large) < strlen(words[k]))  
            strcpy(large, words[k]);  
    }  
    printf("Smallest word: %s\n", small);  
    printf("Largest word: %s\n", large);  
    printf("String: %s\n",string);
    return 0;  
}  

/*
//hexadecimal
#include <stdio.h>
#include <ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if((isdigit(ch))||(tolower(ch)>='a'&& tolower(ch)<='f')){
        printf("the character is hexadecimal");
    }
    else{
        printf("The character is not a hexadecimal\n");
    }
}
*/

/*
//Length of a String Using User-Defined Functions and Pointers:
#include <stdio.h>
// Function to calculate string length using pointers
int stringLength(char *str) {
    int length = 0;
    // Loop through the string until we find the null character '\0'
    while (*str != '\0') {
        length++;         // Increase length for each character
        str++;            // Move the pointer to the next character
    }
    return length;        // Return the length of the string
}
int main() {
    char str[100];        // Declare a character array to store the string
    // Ask the user to input a string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  // Using fgets to read the string (handles spaces)
    // Call the stringLength function and store the result
    int length = stringLength(str);
    // Print the length of the string
    printf("The length of the string is: %d\n", length);
    return 0;
}
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[200], words[50][50];
    int i, j, k, wordCount = 0, isDuplicate;

    // Input the string
    printf("Enter a string: ");
    fgets(str, 200, stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove trailing newline

    // Split the string into words
    char *token = strtok(str, " ");
    while (token != NULL) {
        strcpy(words[wordCount], token);  // Copy the word into array
        wordCount++;
        token = strtok(NULL, " ");
    }

    // Remove duplicate words
    for (i = 0; i < wordCount; i++) {
        for (j = i + 1; j < wordCount; j++) {
            if (strcmp(words[i], words[j]) == 0) {  // Check for duplicate
                // Shift all words one position up
                for (k = j; k < wordCount - 1; k++) {
                    strcpy(words[k], words[k + 1]);
                }
                wordCount--;  // Reduce word count
                j--;          // Check the new word at position j
            }
        }
    }

    // Print the result
    printf("String after removing duplicate words: ");
    for (i = 0; i < wordCount; i++) {
        printf("%s ", words[i]);
    }

    return 0;
}
