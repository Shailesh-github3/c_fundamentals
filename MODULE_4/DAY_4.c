/*
//To find the frequecy of the string
#include <stdio.h>
#include <string.h>
int main() {
    char s[1000];
    int i, j, k, count = 0, n;
    printf("Enter the string: ");
    fgets(s, sizeof(s), stdin); // Use fgets() to safely take input
    for (j = 0; s[j]; j++);
    n = j - 1; // Adjust n to exclude the newline character from fgets
    printf("Frequency count of characters in string:\n");
    for (i = 0; i < n; i++) {
        count = 1;
        if (s[i] != '\0') {
            for (j = i + 1; j < n; j++) {
                if (s[i] == s[j]) {
                    count++;
                    s[j] = '\0'; // Mark character as counted
                }
            }
            printf("'%c' = %d\n", s[i], count);
        }
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
//reverse a string with build in functions
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

