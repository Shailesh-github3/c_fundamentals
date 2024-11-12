
/*
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d \n",arr[i]);
    }
    //print array in reverse order
    for(i=n-1;i>=0;i--){
        printf("%d ",a[i]);
        }
    //print the elements of an array present on odd position
    for(int i=0;i<n;i=i+2)  
    {
        printf("%d \n",arr[i]);
    }
    // Check if the last element is divisible by 2
    if (arr[n - 1] % 2 == 0) {
        printf("The last element %d is divisible by 2\n", arr[n - 1]);
    } else {
        printf("The last element %d is not divisible by 2\n", arr[n - 1]);
    }
    printf("\n");
    if(arr[0]%3==0)
        printf("The first element %d is divisible by 3\n", arr[0]);
    else
        printf("The first element %d is not divisible by 3\n", arr[0]);
}
*/

/*
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int matrix[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)  // Fixed loop condition
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    //Print the first row elements  or first element in each coloum of the row
    for (int j = 0; j < n; j++)
    {
        printf("a[0][%d] is %d\n", j, matrix[0][j]);
    }
    //print the last coloum
        for(int i=0;i<n;i++) {
        printf("a[%d][%d] is %d\n",i,n-1,matrix[i][n-1]);
        }
    //last coloum in reverse order
    for(int i=n-1;i>=0;i--){
        printf("a[%d][%d] is %d\n",i,n-1,matrix[i][n-1]);
    }
    //Print the last row of the matrix in reverse order
    for (int j = n-1; j >=0; j--)
    {
        printf("a[%d][%d] is %d\n",n-1,j,matrix[n-1][j]);
    }
     // Check if the diagonal elements are divisible by 3
    for (int i = 0; i < n; i++) {
        if (matrix[i][i] % 3 == 0) {
            printf("a[%d][%d] =%d is divisible by 3\n", i, i, matrix[i][i]);
        } else {
            printf("a[%d][%d] =%d is not divisible by 3\n", i, i, matrix[i][i]);
        }
    }
    //elements in the matrix in the reverse order
    for(int i=n-1;i>=0;i--)
    {
        for(int j=n-1;j>=0;j--)
        {
         printf("a[%d][%d] is %d\n",i,j,matrix[i][j]);
        }
    }
    //last element % by 3
        if(matrix[n-1][n-1]%3==0)
       printf("a[%d][%d] =%d is divisible by 3",n-1,n-1,matrix[n-1][n-1]);
       else
        printf("a[%d][%d] =%d is not divisible by 3",n-1,n-1,matrix[n-1][n-1]);

    return 0;
}
*/

