//decimal value to binary using a function without arguments but with a return type
/*
#include <stdio.h>
int convertToBinary() {
    int decimal, binary = 0, base = 1, remainder;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    while (decimal > 0) {
        remainder = decimal % 2;
        binary += remainder * base;
        base *= 10;
        decimal /= 2;
    }
    return binary;
}
int main() {
    int binaryValue = convertToBinary();
    printf("The binary value is: %d\n", binaryValue);
    return 0;
}
*/

/*
//Simple Age Calculator
#include <stdio.h>
int calculateAge() {
    int birthDay, birthMonth, birthYear;
    int currentDay, currentMonth, currentYear;
    int age;
    printf("Enter your birth date (dd mm yyyy): ");
    scanf("%d %d %d", &birthDay, &birthMonth, &birthYear);
    printf("Enter the current date (dd mm yyyy): ");
    scanf("%d %d %d", &currentDay, &currentMonth, &currentYear);
    age = currentYear - birthYear;
    // Adjust age if the current date has not yet reached the birth date
    if (currentMonth < birthMonth || (currentMonth == birthMonth && currentDay < birthDay)) {
        age--;
    }
    return age;
}
int main() {
    int age = calculateAge();
    printf("Your age is: %d years\n", age);
    return 0;
}
*/

/*
//Calculate the sum and return the total number of carries.
#include <stdio.h>
int countcarries(int x,int y){
    int carry = 0, totalcarries = 0;
    int digitX , digitY, sum;
    while (x>0 || y>0)
    {
        digitX = x % 10;    // Extract the last digit of x
        digitY = y % 10;    // Extract the last digit of y
        sum = digitX + digitY + carry;
        if (sum>=10) {
            carry=1;        // Carry occurs if the sum is 10 or more
            totalcarries++;
        } else{
            carry=0;
        }
        x/=10;              // Remove the last digit from x
        y/=10;              // Remove the last digit from y
    }
    return totalcarries;
}
int main(){
int n1 = 898718,n2 = 173638;
int carries=countcarries(n1,n2);
printf("%d\n",carries);
return 0;
}
*/

