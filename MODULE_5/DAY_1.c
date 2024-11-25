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