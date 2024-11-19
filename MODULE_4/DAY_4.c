/*
//To find the frequecy of the string
#include <stdio.h>
int main() {
    char s[1000];
    int i, j, count;
    // Step 1: Get the input from the user
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin); // Reads the string from the user
    // Step 2: Display the character frequencies
    printf("Frequency of each character:\n");
    // Go through each character in the string
    for (i = 0; s[i] != '\0'; i++) {
        // Skip counting spaces or characters we have already counted
        if (s[i] == ' ' || s[i] == '\n' || s[i] == '\0') {
            continue;
        }
        count = 1; // Start counting from 1 for the current character
        // Count how many times this character appears in the rest of the string
        for (j = i + 1; s[j] != '\0'; j++) {
            if (s[i] == s[j]) {
                count++;
                s[j] = ' '; // Mark this character as counted by setting it to a space
            }
        }
        // Print the character and how many times it appears
        printf("'%c' = %d\n", s[i], count);
    }
    return 0;
}
*/

/*
//Vowel in string using while loop
#include <stdio.h>
int main() {
    char str[100];
    int i = 0, vowel_count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Take input from the user
    // Using a while loop to go through each character in the string
    while (str[i] != '\0') {
        // Check if the character is a vowel (both uppercase and lowercase)
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                //printf("%c",str[i]);
            vowel_count++; // Increment the vowel count
        }
        i++; // Move to the next character
    }
    printf("Number of vowels: %d\n", vowel_count); // Output the number of vowels
    return 0;
}
*/

/*
//Length of a String without builtin fuctions
#include <stdio.h>
int main() {
    char str[100];
    int length = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Input the string
    // Use a while loop to count characters until the null character ('\0') is found
    while (str[length] != '\0') {
        length++;
    }
    // Adjust the length to exclude the newline character added by fgets()
    if (str[length - 1] == '\n') {
        length--;
    }
    printf("Length of the string: %d\n", length);
    return 0;
}
*/

/*
//uppercase to lowecase
#include <stdio.h>
int main() {
    char str[100];
    int i = 0;
    // Prompt the user to enter a string
    printf("Enter a string in uppercase: ");
    fgets(str, sizeof(str), stdin); // Reading input using fgets
    // Convert uppercase letters to lowercase
    while (str[i] != '\0') { // Loop until we reach the end of the string
        if (str[i] >= 'A' && str[i] <= 'Z') { // Check if the character is uppercase
            str[i] = str[i] + 32; // Convert to lowercase by adding 32
        }
        i++; // Move to the next character
    }
    // Output the converted string
    printf("String in lowercase: %s", str);
    return 0;
}
*/

/*
//reverse a string without build in functions
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], reversed[100];
    int length, i;
    fgets(str, sizeof(str), stdin); // Read the string
    printf("Entered string is: %s",str);
    length = 0;
    while (str[length] != '\0') {  // Calculate the length of the string
        length++;
    }
    if (str[length - 1] == '\n') {  // Adjust for the newline character from fgets
        length--;
    }
    for (i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];  // Reverse the string
    }
    reversed[length] = '\0';  // Add the null terminator at the end
    printf("Reversed string is: %s\n", reversed);
    return 0;
}
*/
/*//count the number of words
#include <stdio.h>
int main() {
    char str[1000];
    int i, wordCount = 0;
    int inWord = 0; // This variable tells us if we're currently inside a word
    // Get input from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Loop through each character in the string
    for (i = 0; str[i] != '\0'; i++) {
        // If the current character is a space, newline, or tab
        if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            inWord = 0; // We're no longer inside a word
        } 
        // If the current character is not a space, newline, or tab
        // and we are not already inside a word
        else if (inWord == 0) {      //if no word is found then only it start's to count 
            inWord = 1; // Now we are inside a word
            wordCount++; // Increase the word count
        }
    }
    // Output the result
    printf("Total number of words: %d\n", wordCount);

    return 0;
}*/
//split the words in the srings
#include <stdio.h>
#include<string.h>
int main()
{
    char str[100]="Welcome to saveetha EngineerinCollege College";
    char *word;
    printf("Strings or words after split by space are :\n");
    word = strtok(str, " ");
    while(word != NULL){
        printf(" %s\n", word);
        word = strtok(NULL, " ");
    }
}
