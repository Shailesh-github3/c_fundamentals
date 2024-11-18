/*
//min btw  using condtional operator
#include <stdio.h>
int main() {
    int a, b, c, min;
    scanf("%d %d %d", &a, &b, &c);
    // Using conditional operator to find the minimum
    min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
    printf("Minimum between %d, %d and %d = %d\n",a,b,c,min);
    return 0;
}
*/

/*
//isalpha or special case using conditional operator
#include <stdio.h>
int main() {
    char value = '?';  // You can change this to any character for testing
    // Using the conditional operator to check the type of character
    (value >= 'A' && value <= 'Z') ? printf("Uppercase Letter\n") :
    (value >= 'a' && value <= 'z') ? printf("Lowercase Letter\n") :
    (value >= '0' && value <= '9') ? printf("Number\n") :
                                     printf("Special Character\n");
    return 0;
}
*/
//Write a C program to break the 50012 into smallest possible number of bank notes.
#include <stdio.h>
int main() {
    int amount = 50012;
    int hundreds, fifties, twenties, tens, fives, twos, remainder;
    // Calculate number of 100 notes
    hundreds = amount / 100;
    remainder = amount % 100;
    // Calculate number of 50 notes
    fifties = remainder / 50;
    remainder %= 50;
    // Calculate number of 20 notes
    twenties = remainder / 20;
    remainder %= 20;
    // Calculate number of 10 notes
    tens = remainder / 10;
    remainder %= 10;
    // Calculate number of 5 notes
    fives = remainder / 5;
    remainder %= 5;
    // Calculate number of 2 notes
    twos = remainder / 2;
    remainder %= 2;
    // Output the breakdown
    printf("There are:\n");
    printf("%d Note(s) of 100.00\n", hundreds);
    printf("%d Note(s) of 50.00\n", fifties);
    printf("%d Note(s) of 20.00\n", twenties);
    printf("%d Note(s) of 10.00\n", tens);
    printf("%d Note(s) of 5.00\n", fives);
    printf("%d Note(s) of 2.00\n", twos);
    return 0;
}
