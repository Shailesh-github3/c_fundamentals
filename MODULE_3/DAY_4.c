/*
//Deleting an element in an array
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Deleting the first element by shifting elements to the left
    for (int i = 0; i < n; i++) {
       arr[i] = arr[i + 1];         // Deleting the element by shifting elements to the left
    }
    n--;  // Decrease the size of the array by 1

    //Deleting an element in any position
    printf("Enter the position of the element to delete (0 to %d): ", n - 1);
    scanf("%d", &pos);
    // Check if the position is valid
    if (pos < 0 || pos >= n) {
        printf("Invalid position!\n");
        return 1;
    }
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Array after deleting the first element:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/

/*
//Removing duplcates without sorting
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int newSize = n;
    // Loop through each element and remove duplicates
    for (int i = 0; i < newSize; i++) {
        for (int j = i + 1; j < newSize; ) {
            if (arr[i] == arr[j]) {
                // Shift elements to the left to remove the duplicate
                for (int k = j; k < newSize - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                newSize--;  // Reduce the size of the array
            } else {
                j++;  // Only increment j if no shifting occurs
            }
        }
    }
    printf("Array after removing duplicates:\n");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/

/*
// Print the sum, count of even & odd Numbers in an Array
#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0, even_count = 0, odd_count = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    printf("Sum of the array: %d\n", sum);
    printf("Count of even numbers: %d\n", even_count);
    printf("Count of odd numbers: %d\n", odd_count);

    return 0;
}
*/


/*
//replace all odd elements by 1 in one dimensional array

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            arr[i] = 1;
        }
    }
    printf("Modified array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/

/*
//finding the missing elements

#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Calculate the expected sum of numbers from 1 to n+1
    int total = (n + 1) * (n + 2) / 2;
    // Subtract each element in the array from the total
    for (int i = 0; i < n; i++) {
        total -= arr[i];
    }
    printf("The missing element is: %d\n", total);
    return 0;
}
*/
/*
//sorting in decending order
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    //Input the elements
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    //Sorting using bubble sort
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]<a[j+1]){
                int temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    // The largest element is the first element in the sorted array
    int largest = a[0];
    // The second largest element is the second element in the sorted array
    int secondLargest = a[1];
    printf("Largest element: %d\n", largest);
    printf("Second largest element: %d\n", secondLargest);
    printf("\n");
}
*/
/*
//adding element at the end of the array

#include <stdio.h>
int main() {
    int array[100], n, element;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("Enter the element to insert at the end: ");
    scanf("%d", &element);
    array[n] = element; // Insert the element at the end
    n++; // Increase the array size
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}
*/
/*
//adding elements at any position

#include <stdio.h>
int main() {
    int arr[100] = {0}; // Array with a maximum size of 100
    int i, element, position, n = 10; // Initial array size is 10
    // Fill the array with numbers from 1 to 10
    for (i = 0; i < 10; i++) {
        arr[i] = i + 1;
    }
    // Print the original array
    printf("Original array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // Element to be inserted
    element = 50;
    // Position where the element is to be inserted
    position = 5; // Note: position is 1-based
    // Increase the size of the array by 1
    n++;
    // Shift elements to the right to make space for the new element
    for (i = n - 1; i >= position; i--) {
        arr[i] = arr[i - 1];
    }
    // Insert the element at the specified position
    arr[position - 1] = element; // Convert 1-based to 0-based index
    // Print the updated array
    printf("Updated array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
*/

/*
//sum of unique elements
#include <stdio.h>
int main() {
    int arr[100], n, sum = 0;
    int isUnique;
    // Input the number of elements
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    // Input the elements of the array
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Calculate the sum of unique elements
    for (int i = 0; i < n; i++) {
        isUnique = 1; // Assume the element is unique
        // Check if the current element appears elsewhere in the array
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = 0; // Element is not unique
                break;
            }
        }
        // Add the element to sum if it is unique
        if (isUnique) {
            sum += arr[i];
        }
    }
    // Output the sum of unique elements
    printf("Sum of all unique elements: %d\n", sum);
    return 0;
}
*/

/*
//sorting in acsending order
#include <stdio.h>
int main() {
    int arr[] = {2,0,1,0,2,1,0,1,0,1,0,1}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array
    int temp;
    // Bubble Sort: Repeat the process for n-1 times
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            // If the current element is greater than the next element, swap them
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // Print the sorted array
    printf("Sorted array in ascending order: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
*/
/*
//finding the largest and second largest
#include <stdio.h>
void bubbleSort(int arr[], int n) {
    int temp;
    // Bubble Sort: Repeat the process for n-1 times
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main() {
    int n;
    scanf("%d", &n);  // Input the size of the array
    int arr[n];  // Declare array with size n
    // Input the array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);  // Correct: Store each element in arr[i]
    }
    int largest, secondLargest;
    // Sort the array in ascending order
    bubbleSort(arr, n);
    // The largest element is at the last index
    largest = arr[n - 1];
    // The second largest element is at the second last index
    secondLargest = arr[n - 2];
    printf("Largest element: %d\n", largest);
    printf("Second Largest element: %d\n", secondLargest);
    printf("%d",arr[0]);
    return 0;
}
*/

//smallest in the given array
/*
#include <stdio.h>
int main()
{
    int arr[] = {12,1234,45,67,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int smallest = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]<smallest)
        smallest = arr[i];
    }
    printf("%d",smallest);
}
*/


/*
//Replace All Even Elements by 'E'

#include <stdio.h>
int main() {
    int n;
    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    // Input the array elements
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Replace even elements with 'E'
    printf("Modified array: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("E "); // Print 'E' for even numbers
        } else {
            printf("%d ", arr[i]); // Print the element if it's odd
        }
    }
    return 0;
}
*/


#include <stdio.h>
int main() {
    int arr[] = {10,20,30,40,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    // Initialize smallest and second smallest with large values
    int smallest = __INT_MAX__;
    int secondSmallest = __INT_MAX__;
    // Iterate through the array to find the smallest and second smallest
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            // If current element is smaller than smallest
            secondSmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondSmallest && arr[i] != smallest) {
            // If current element is greater than smallest and less than secondSmallest
            secondSmallest = arr[i];
        }
    }
    // Check if we have found valid second smallest
    if (secondSmallest == __INT_MAX__) {
        printf("There is no valid second smallest element.\n");
    } else {
        printf("Smallest element: %d\n", smallest);
        printf("Second smallest element: %d\n", secondSmallest);
    }
    return 0;
}
