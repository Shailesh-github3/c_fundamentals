/*

// C Program to check for prime number 

#include <stdio.h>
#include <math.h>
int main() {
    int n = 29;
    int cnt = 0;
    if (n <= 1)
        printf("%d is NOT prime\n", n);
    else {
        // Check for divisors from 2 to sqrt(n)
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                cnt++;
                break; // No need to check further if a divisor is found
            }
        }
        // If no divisor is found, it's prime
        if (cnt == 0)
            printf("%d is prime\n", n);
        else
            printf("%d is NOT prime\n", n);
    }
    return 0;
}

-----------------------------------------------------------------------------------------------------
#include <stdio.h>
#include <math.h>
// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0; // Not a prime number
    }
    return 1; // Prime number
}
int main() {
    int start, end, count = 0;
    // Input the range
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    printf("Prime numbers in the range [%d, %d]:\n", start, end);
    // Count primes in the range and display them
    for (int i = start; i <= end; i++) {
        if (isPrime(i)) {
            printf("%d ", i); // Display the prime number
            count++;
        }
    }
    printf("\nTotal number of prime numbers: %d\n", count);
    return 0;
}

*/
/***************************************************************************************************/

//program to check amstrong number

/*
#include <stdio.h>
#include <math.h>
int main() {
    int originalNum, remainder, sum = 0, n = 0, temp, num;
    // Prompt the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;  // Store the original number
    temp = num;         // Copy the number to a temporary variable
    // Count the number of digits in the number
    while (temp != 0) {
        temp /= 10;  // Remove the last digit
        n++;         // Increment the digit count
    }
    temp = num;  // Reset the temporary variable to the original number
    // Calculate the sum of the nth powers of the digits
    while (temp != 0) {
        remainder = temp % 10;            // Get the last digit
        sum += pow(remainder, n);         // Add the nth power of the digit to the sum
        temp /= 10;                       // Remove the last digit
    }
    // Check if the original number is an Armstrong number
    if (originalNum == sum) {
        printf("The given number is an Armstrong number\n");
    } else {
        printf("The given number is not an Armstrong number\n");
    }

    return 0;
}

/*--------------------------------------------------------------------------------------------------*/
/*
#include <stdio.h>
#include <math.h>
// Function to check if a number is Armstrong
int isArmstrong(int num) {
    int originalNum = num, remainder, sum = 0, n = 0, temp;
    // Count the number of digits in num
    temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }
    // Reset temp to original number and calculate the sum of nth powers of digits
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;            // Get the last digit
        sum += pow(remainder, n);         // Add the nth power of the digit to the sum
        temp /= 10;                       // Remove the last digit
    }
    // Check if num is an Armstrong number
    return (originalNum == sum);
}
int main() {
    int n;
    // Input the range limit
    printf("Enter the number (n): ");
    scanf("%d", &n);
    printf("Armstrong numbers between 1 and %d are:\n", n);
    // Print Armstrong numbers in the range 1 to n
    int foundAny = 0;  // Flag to check if any Armstrong number is found
    for (int i = 1; i <= n; i++) {
        if (isArmstrong(i)) {
            printf("%d is a Armstrong number\n", i);
            foundAny = 1;
        }
    }
    // If no Armstrong numbers were found, print a message
    if (!foundAny) {
        printf("No Armstrong numbers found in the range 1 to %d.\n", n);
    }
    return 0;
}
/*
/********************************************************************************************************** */
/*
//Automorphic or not
#include <stdio.h>
int checkAutomorphic(int num) {
    int square = num * num;
    // Do-while loop to compare digits
    do {
        // If last digits of num and square don't match, return 0 (not automorphic)
        if (num % 10 != square % 10) {
            return 0;
        }
        // Reduce both num and square by removing the last digit
        num /= 10;
        square /= 10;
    } while (num != 0);  // Continue as long as there are digits in num
    // If loop completes, the number is automorphic
    return 1;
}
int main() {
    int num = 376, square = num * num;
    if (checkAutomorphic(num))
        printf("Num : %d, Square: %d - Automorphic Number\n", num, square);
    else
        printf("Num : %d, Square: %d - Not Automorphic Number\n", num, square);
    return 0;
}
*/

/*----------------------------------------------------------------------------------------------------------------------*/

/*
#include <stdio.h>
int checkAutomorphic(int num) {
    int square = num * num;
    // Do-while loop to compare digits
    do {
        // If last digits of num and square don't match, return 0 (not automorphic)
        if (num % 10 != square % 10) {
            return 0;
        }
        // Reduce both num and square by removing the last digit
        num /= 10;
        square /= 10;
    } while (num != 0);  // Continue as long as there are digits in num
    // If loop completes, the number is automorphic
    return 1;
}
int main() {
    int start, end;
    // Input the range
    printf("Enter the range (start and end): ");
    scanf("%d %d", &start, &end);
    printf("Automorphic numbers between %d and %d are:\n", start, end);
    // Loop through the range and check each number
    for (int num = start; num <= end; num++) {
        if (checkAutomorphic(num)) {
            printf("%d ", num);
        }
    }
    printf("\n");
    return 0;
}

*/

