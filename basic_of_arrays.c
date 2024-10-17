
// Printing array with loop

#include <stdio.h>  
int main() {
    // Declare and initialize an array of double values (prices)
    double prices[] = {5.0, 10.0, 15.0, 20.0};
    // sizeof(prices) gives the total size of the array in bytes
    // %lu is the format specifier for 'unsigned long', used here to match the type returned by sizeof
    printf("%lu bytes\n", sizeof(prices));
    // Loop to go through each element of the array
    // sizeof(prices) / sizeof(prices[0]) calculates the number of elements in the array
    // sizeof(prices) gives the total size of the array, and sizeof(prices[0]) gives the size of one element
    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++) {
        printf("$%.2lf\n", prices[i]);
    }
    return 0;  
}

/*------------------------------------------------------------------------------------------------------------------*/
// 2D arrays


#include <stdio.h>
int main()
{
   // 2D array: An array where each element is another array
   // Useful for matrices, grids, or tables of data
   // Declare and initialize a 2D array with 2 rows and 3 columns
   int numbers[2][3] = {
                        {1, 2, 3},
                        {4, 5, 6}
                       };
   // Print the total size of the array in bytes
   printf("%lu bytes\n", sizeof(numbers));
   // Calculate the number of rows and columns in the 2D array
   int rows = sizeof(numbers) / sizeof(numbers[0]);  // Number of rows
   int columns = sizeof(numbers[0]) / sizeof(numbers[0][0]);  // Number of columns
   // Print the number of rows and columns
   printf("rows: %d\n", rows);
   printf("columns: %d\n", columns);
   // Loop through the 2D array and print each element
   for (int i = 0; i < rows; i++) {
      for (int j = 0; j < columns; j++) {
         printf("%d ", numbers[i][j]);
      }
      printf("\n");  // Move to the next line after printing a row
   }
   return 0;
}

/*------------------------------------------------------------------------------------------*/
//array of string

#include <stdio.h>
#include <string.h>
int main()
{
   // Correctly initializing the 2D character array
   char cars[][10] = {
       "Mustang",      // row 1   |   (7 characters + null terminator) - coloum 1
       "Corvette",     // row 2   |   (8 characters + null terminator) - coloum 2
       "Camaro"        // row 3   |   (7 characters + null terminator) - coloum 3
   };
   // Uncommenting the following line would replace "Mustang" with "Tesla"
   strcpy(cars[0], "Tesla");
   // Loop through the 2D array and print each car name
   for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)
   {
      printf("%s\n", cars[i]);
   }
   return 0;
}
 
/*-----------------------------------------------------------------------------------------------*/

