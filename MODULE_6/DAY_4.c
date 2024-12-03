
/* //C program to accept details of 'n' employee(eno, ename, salary) and display the details of employee having highest salary. Use array of structure.
#include <stdio.h>
struct Employee {
    int eno;        // Employee number
    char ename[20]; // Employee name
    float salary;   // Employee salary
};
int main() {
    int n, i;
    float maxSalary = 0.0;
    // Ask user for the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct Employee employees[n]; // Array of structures to store employee details
    // Input employee details
    for (i = 0; i < n; i++) {
        printf("\nEnter details of Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].eno);
        printf("Employee Name: ");
        scanf("%s", employees[i].ename);
        printf("Salary: ");
        scanf("%f", &employees[i].salary);
        // Update the maximum salary
        if (employees[i].salary > maxSalary) {
            maxSalary = employees[i].salary;
        }
    }
    // Display details of employees with the highest salary
    printf("\nEmployees with the Highest Salary (%.2f):\n", maxSalary);
    for (i = 0; i < n; i++) {
        if (employees[i].salary == maxSalary) {
            printf("\nEmployee Number: %d\n", employees[i].eno);
            printf("Employee Name: %s\n", employees[i].ename);
            printf("Salary: %.2f\n", employees[i].salary);
        }
    }
    return 0;
} */

/* //program to calculate the age of student at the time of admission using nested structure & use structure variable as pointer(use regno,name,birthdate and year admission date as input).
#include <stdio.h>
// Structure to store date (day, month, year)
struct Date {
    int day;
    int month;
    int year;
};
// Structure to store student details
struct Student {
    int regno;                 // Registration number
    char name[20];             // Student name
    struct Date birthdate;     // Birthdate
    struct Date admissionDate; // Admission date
};
int calculateAge(struct Date *birthdate, struct Date *admissionDate) {
    int age = admissionDate->year - birthdate->year;
    // Adjust age if the admission date is before the birthdate in the same year
    if (admissionDate->month < birthdate->month ||
        (admissionDate->month == birthdate->month && admissionDate->day < birthdate->day)) {
        age--;
    }
    return age;
}
int main() {
    struct Student student; // Declare a student variable
    // Input student details
    printf("Enter Registration Number: ");
    scanf("%d", &student.regno);
    printf("Enter Name: ");
    scanf("%s", student.name);
    printf("Enter Birthdate (dd mm yyyy): ");
    scanf("%d %d %d", &student.birthdate.day, &student.birthdate.month, &student.birthdate.year);
    printf("Enter Admission Date (dd mm yyyy): ");
    scanf("%d %d %d", &student.admissionDate.day, &student.admissionDate.month, &student.admissionDate.year);
    // Calculate age at the time of admission
    int age = calculateAge(&student.birthdate, &student.admissionDate);
    // Display student details and age
    printf("\nStudent Details:\n");
    printf("Registration Number: %d\n", student.regno);
    printf("Name: %s\n", student.name);
    printf("Birthdate: %02d/%02d/%04d\n", student.birthdate.day, student.birthdate.month, student.birthdate.year);
    printf("Admission Date: %02d/%02d/%04d\n", student.admissionDate.day, student.admissionDate.month, student.admissionDate.year);
    printf("Age at Admission: %d years\n", age);
    return 0;
} */

/* //Create a structure for Electricity Bill calculation using function-Passing structure to a function by value (use service no, name, previous reading, current reading, unit consumption & amount as data members)
#include <stdio.h>
// Structure to store electricity bill details
struct ElectricityBill {
    int serviceNo;          // Service number
    char name[30];          // Customer name
    int prevReading;        // Previous meter reading
    int currReading;        // Current meter reading
    int unitsConsumed;      // Units consumed
    float amount;           // Total bill amount
};
// Function to calculate bill amount
void calculateBill(struct ElectricityBill bill) {
    // Calculate units consumed
    bill.unitsConsumed = bill.currReading - bill.prevReading;
    // Calculate amount based on units consumed
    if (bill.unitsConsumed <= 100) {
        bill.amount = bill.unitsConsumed * 2.00;
    } else if (bill.unitsConsumed <= 300) {
        bill.amount = 100 * 2.00 + (bill.unitsConsumed - 100) * 3.00;
    } else {
        bill.amount = 100 * 2.00 + 200 * 3.00 + (bill.unitsConsumed - 300) * 5.00;
    }
    // Display the bill details
    printf("\nElectricity Bill Details:\n");
    printf("Service Number: %d\n", bill.serviceNo);
    printf("Name: %s\n", bill.name);
    printf("Previous Reading: %d\n", bill.prevReading);
    printf("Current Reading: %d\n", bill.currReading);
    printf("Units Consumed: %d\n", bill.unitsConsumed);
    printf("Total Amount: Rs. %.2f\n", bill.amount);
}
int main() {
    struct ElectricityBill bill;
    // Input customer details
    printf("Enter Service Number: ");
    scanf("%d", &bill.serviceNo);
    printf("Enter Name: ");
    scanf("%s", bill.name);
    printf("Enter Previous Reading: ");
    scanf("%d", &bill.prevReading);
    printf("Enter Current Reading: ");
    scanf("%d", &bill.currReading);
    // Calculate and display bill details
    calculateBill(bill);
    return 0;
}
 */

/* //Create a structure program to read(empno,dept & basic pay) and store the data of 3 employees and calculate their Gross Salary(da =10% and HRA=30% from BP) using nested structures;
#include <stdio.h>
struct Employee {
    char name[50];
    char dept[50];
    int basic_pay;
    int da;
    int hra;
    float gross_salary;
};
int main(){
    struct Employee emp[3];
    int i;
    for(i=0;i<3;i++){
    scanf("%s", emp[i].name);
    scanf("%s", emp[i].dept);
    scanf("%d", &emp[i].basic_pay);
    emp[i].da = 0.1*emp[i].basic_pay;
    emp[i].hra = 0.3*emp[i].basic_pay;
    emp[i].gross_salary = emp[i].basic_pay + emp[i].da + emp[i].hra;
}
printf("Details of the Employee:\n");

    printf("%s    %s           %d    %d    %d    %.2f\n",emp[0].name, emp[0].dept, emp[0].basic_pay, emp[0].da,emp[0].hra, emp[0].gross_salary);
    printf("%s    %s           %d    %d    %d    %.2f\n",emp[1].name, emp[1].dept, emp[1].basic_pay, emp[1].da,emp[1].hra, emp[1].gross_salary);
    printf("%s    %s           %d    %d    %d    %.2f\n",emp[2].name, emp[2].dept, emp[2].basic_pay, emp[2].da,emp[2].hra, emp[2].gross_salary);
            
return 0;
} */

//Create a structure program to read(rego,3 subject markss) and store the details of 5 students and calculate the Total and Average?
/* #include <stdio.h>
// Define the student structure
struct Student {
    int rego;            // Roll number
    int marks[4];        // Marks in 4 subjects
    int total;           // Total marks
    float average;       // Average marks
};
int main() {
    struct Student students[5];  // Array to store details of 5 students
    // Input student details
    for (int i = 0; i < 5; i++) {
        printf("Enter roll number and marks of 4 subjects for student %d:\n", i + 1);
        scanf("%d", &students[i].rego);  // Input roll number
        students[i].total = 0;          // Initialize total

        for (int j = 0; j < 4; j++) {
            scanf("%d", &students[i].marks[j]);  // Input marks
            students[i].total += students[i].marks[j];  // Calculate total
        }
        students[i].average = students[i].total / 4.0;  // Calculate average
    }
    // Display student details
    printf("\nStudent Details:\n");
    printf("Rego    Marks1  Marks2  Marks3  Marks4  Total   Average\n");
    for (int i = 0; i < 5; i++) {
        printf("%d      %d       %d       %d       %d       %d      %.2f\n",
               students[i].rego,
               students[i].marks[0],
               students[i].marks[1],
               students[i].marks[2],
               students[i].marks[3],
               students[i].total,
               students[i].average);
    }
    return 0;
} */


/* //C program to create a student structure, accept details of n students, rearrange the data in alphabetical order of student names, and display the result:
#include <stdio.h>
#include <string.h>
// Define the student structure
struct Student {
    char stud_name[50];  // Student name
    char address[100];   // Student address
};
int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n];  // Array of students
    // Input student details
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf(" %[^\n]s", students[i].stud_name);  // Read name
        printf("Enter address of student %d: ", i + 1);
        scanf(" %[^\n]s", students[i].address);    // Read address
    }
    // Rearrange students in alphabetical order of their names
    struct Student temp;  // Temporary structure for swapping
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strcmp(students[i].stud_name, students[j].stud_name) > 0) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
    // Display student details after sorting horizontally
    printf("\nStudent Details in Alphabetical Order:\n");
    for (int i = 0; i < n; i++) {
        printf("%s %s\n", students[i].stud_name, students[i].address);
    }
    return 0;
} */

//create a nested structure to read(customer no,name & unit consumption) and store the details of gas customer and calculate the gas bill
#include <stdio.h>
struct GasCustomer {
    int customer_no;       // Customer number
    char name[50];         // Customer name
    struct {
        int units;         // Units consumed
        float bill;        // Bill amount
    } consumption;
};

/* // Function to calculate the gas bill
float calculateBill(int units) {
    float amount = 0;
    if (units <= 50) {
        amount = units * 10;
    } else if (units <= 100) {
        amount = (50 * 10) + ((units - 50) * 20);
    } else {
        amount = (50 * 10) + (50 * 20) + ((units - 100) * 30);
    }
    amount += 50;          // Add registration fee
    amount -= (0.1 * amount); // Apply 10% subsidy
    return amount;
}
int main() {
    int n;
    printf("Enter the number of customers: ");
    scanf("%d", &n);
    struct GasCustomer customers[n]; // Array of customers
    // Input customer details
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for customer %d:\n", i + 1);
        printf("Customer Number: ");
        scanf("%d", &customers[i].customer_no);
        printf("Customer Name: ");
        scanf(" %[^\n]s", customers[i].name);
        printf("Units Consumed: ");
        scanf("%d", &customers[i].consumption.units);

        // Calculate the bill
        customers[i].consumption.bill = calculateBill(customers[i].consumption.units);
    }
    // Display customer details and gas bill
    printf("\nGas Customer Details and Bills:\n");
    printf("Cust No   Name                Units Consumed   Total Bill (Rs)\n");
    printf("------------------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-10d %-20s %-15d %.2f\n", 
               customers[i].customer_no, 
               customers[i].name, 
               customers[i].consumption.units, 
               customers[i].consumption.bill);
    }
    return 0;
} */

//total run by a team
#include <stdio.h>
struct Player {
    char name[50];  // Player's name
    int runs;       // Runs scored by the player
};
int main() {
    int n;
    int total_runs = 0;
    // Accept number of players in the team
    printf("Enter the number of players: ");
    scanf("%d", &n);
    // Declare an array of structures to store the player information
    struct Player team[n];
    // Accept details for each player
    for (int i = 0; i < n; i++) {
        printf("Enter name of player %d: ", i + 1);
        scanf(" %[^\n]s", team[i].name);  // Read the player's name
        printf("Enter runs scored by %s: ", team[i].name);
        scanf("%d", &team[i].runs);  // Read the runs scored by the player
        total_runs += team[i].runs;  // Add the runs to total
    }
    // Display the total runs scored by the team
    printf("\nTotal runs scored by the team: %d\n", total_runs);
    return 0;
}
