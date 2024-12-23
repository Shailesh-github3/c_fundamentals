/*
//adding three num using ("pointers")
#include <stdio.h>
int main() {
    // Declare three floating-point variables and pointers to them
    float num1, num2, num3, sum;
    float *ptr1 = &num1, *ptr2 = &num2, *ptr3 = &num3, *ptrSum = &sum;
    // Input three numbers
    printf("Enter the first number: ");
    scanf("%f", ptr1);
    printf("Enter the second number: ");
    scanf("%f", ptr2);
    printf("Enter the third number: ");
    scanf("%f", ptr3);
    // Add the numbers using pointers
    sum = *ptr1 + *ptr2 + *ptr3;  // Dereference the pointers to get the values
    // Print the sum with only two digits after the decimal point
    printf("%.2f + %.2f + %.2f = %.2f\n", *ptr1, *ptr2, *ptr3, sum);
    return 0;
}
*/
/*------------------------------------------------------------------------------------------------------------*/
/*
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
*/

/*
#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Welcome to saveetha engineering college";
    char words[100][100];  // Array to store words
    int wordCount = 0;
    char smallest[100], largest[100];

    // Get the first token (word)
    char *token = strtok(str, " ");

    // Loop through the string and get all words
    while (token != NULL) {
        strcpy(words[wordCount], token);  // Copy the word into the array
        wordCount++;
        token = strtok(NULL, " ");  // Get the next word
    }

    // Initialize smallest and largest with the first word
    strcpy(smallest, words[0]);
    strcpy(largest, words[0]);

    // Compare the words to find the smallest and largest
    for (int i = 1; i < wordCount; i++) {
        if (strlen(words[i]) < strlen(smallest)) {
            strcpy(smallest, words[i]);
        }
        if (strlen(words[i]) > strlen(largest)) {
            strcpy(largest, words[i]);
        }
    }

    // Print the smallest and largest words
    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);

    return 0;
}

*/
#include <stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int mat[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("matrix is\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
                printf("%d ",mat[i][j]);
            }
          }     
            printf("\n");
        }
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(j<=i){
                printf("%d ",mat[i][j]);
            }
            else{
                printf(" ");
            }
          }     
            printf("\n");
        }
        return 0;
}


