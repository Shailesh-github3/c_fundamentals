/*
//Length using function
#include <stdio.h>
#include <string.h>
int main() {
    char str[100]; // Array to store the input string
    scanf("%s", str); // Read the input string
    int length = strlen(str); // Calculate the length
    printf("Length of Str is %d\n", length);
    return 0;
}
// into lowercase with functions
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100]; // Array to store the input string
    scanf("%s", str); // Read the input string
    // Convert each character to lowercase
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
    printf("Lower case String is:%s\n", str);
    return 0;
}
//into upperscase with functions
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100]; // Array to store the input string
    fgets(str, sizeof(str), stdin); // Read the input string, including spaces
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }
    printf("Upper case String is :%s", str);
    return 0;
}
*/
/*
//write a Program to compare two strings without using strcmp().
#include <stdio.h>
int main() {
    char str1[100], str2[100];
    int i = 0, isEqual = 1; // isEqual is used to store if strings are equal (1 = true, 0 = false)
    // Taking input for both strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    // Comparing the strings character by character
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            isEqual = 0; // If any character is different, set isEqual to 0
            break; // No need to check further, exit the loop
        }
        i++;
    }
    // If the strings are equal so far but have different lengths, set isEqual to 0
    if (str1[i] != str2[i]) {
        isEqual = 0;
    }
    // Printing the result
    if (isEqual) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }
    return 0;
}
*/

/*
//C Program to Capitalize the first and last letter of every word in a string.
#include <stdio.h>
#include <ctype.h>
int main() {
    char str[1000];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        // Capitalize the first letter of a word
        if ((i == 0 || str[i - 1] == ' ') && isalpha(str[i])) {
            str[i] = toupper(str[i]);
        }
        // Capitalize the last letter of a word
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\n' || str[i + 1] == '\0')) {
            str[i] = toupper(str[i]);
        }
    }
    printf("Modified string: %s", str);
    return 0;
}
*/
//compare two strings using strcmp()
#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    // Remove the newline character from strings
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    // Compare the two strings
    if (strcmp(str1, str2) == 0) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are not equal.\n");
    }
    return 0;
}
