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