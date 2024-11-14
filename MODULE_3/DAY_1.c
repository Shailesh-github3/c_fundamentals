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
/*C program to validate date (Check date is valid or not).*/

#include <stdio.h>

int main() {
  int dd, mm, yy;

  printf("Enter date (DD/MM/YYYY format): ");
  scanf("%d/%d/%d", &dd, &mm, &yy);

  // check year
  if (yy >= 1900 && yy <= 9999) {
    // check month
    if (mm >= 1 && mm <= 12) {
      // check days
      if ((dd >= 1 && dd <= 31) && (mm == 1 || mm == 3 || mm == 5 || mm == 7 ||
                                    mm == 8 || mm == 10 || mm == 12))
        printf("Date is valid.\n");
      else if ((dd >= 1 && dd <= 30) &&
               (mm == 4 || mm == 6 || mm == 9 || mm == 11))
        printf("Date is valid.\n");
      else if ((dd >= 1 && dd <= 28) && (mm == 2))
        printf("Date is valid.\n");
      else if (dd == 29 && mm == 2 &&
               (yy % 400 == 0 || (yy % 4 == 0 && yy % 100 != 0)))
        printf("Date is valid.\n");
      else
        printf("Day is invalid.\n");
    } else {
      printf("Month is not valid.\n");
    }
  } else {
    printf("Year is not valid.\n");
  }

  return 0;
}
#include <stdio.h>

// Function to calculate the current age
void findAge(int current_date, int current_month, int current_year, 
             int birth_date, int birth_month, int birth_year) {
    // Days in each month
    int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

    // Adjust if the birth date is greater than the current date
    if (birth_date > current_date) {
        current_date += month[birth_month - 1];
        current_month -= 1;
    }

    // Adjust if the birth month is greater than the current month
    if (birth_month > current_month) {
        current_year -= 1;
        current_month += 12;
    }

    // Calculate age in years, months, and days
    int calculated_date = current_date - birth_date;
    int calculated_month = current_month - birth_month;
    int calculated_year = current_year - birth_year;

    // Print the age
    printf("Present Age\nYears: %d Months: %d Days: %d\n", 
           calculated_year, calculated_month, calculated_date);
}

// Main function
int main() {
    // Current date: dd/mm/yyyy
    int current_date = 7;
    int current_month = 12;
    int current_year = 2017;

    // Birth date: dd/mm/yyyy
    int birth_date = 16;
    int birth_month = 12;
    int birth_year = 2009;

    // Call the function to calculate age
    findAge(current_date, current_month, current_year, 
            birth_date, birth_month, birth_year);

    return 0;
}


