/*
//C Program to find the minimum element in each row of a matrix
#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int m[r][c];
    for (int i = 0; i < r; i++)
    {   for (int j = 0; j < c; j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    //find the minimum
    for (int i = 0; i < r; i++)
    {   int min = m[i][0];
        for (int j = 1; j < c; j++)
        {   if (m[i][j]<min)
            {
                min = m[i][j];
            }
        }
        printf("Minimum element of the row %d is: %d\n",i+1,min);
    }
}
*/
/*
//C Program to find Sum of  Opposite Diagonal Elements of a Matrix
#include <stdio.h>
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int m[r][c],sum=0;
    for (int i = 0; i < r; i++)
    { for (int j = 0; j < c; j++)
    {
       scanf("%d",&m[i][j]); 
    }
    }
    //Opposite Diagonal Elements
    for (int i = 0; i < r; i++)
    {   int diagonalelement = m[i][r-i-1];
        printf("%d\n",diagonalelement);
        sum += diagonalelement;
    }
    printf("The Sum of Opposite Diagonal Elements of a Matrix =  %d\n",sum);
}
*/

/*
//C program to read elements in a matrix [2X2] and perform scalar multiplication of the matrix. 
#include <stdio.h>
int main(){
    int r,c,scalar;
    scanf("%d %d",&r,&c);
    int m[r][c],sum=0;
    for (int i = 0; i < r; i++)
    { for (int j = 0; j < c; j++)
    {   scanf("%d",&m[i][j]); 
      }
    }
    scanf("%d",&scalar);
    for (int i = 0; i < r; i++)
    {   for (int j = 0; j < c; j++)
    {
        printf("%d ",m[i][j]*scalar);
    }
    printf("\n");
    }
}
*/

/*
//C program to read elements in a matrix and check whether the given matrix is a symmetric matrix or not
int main(){
    int r,c,issym=1;
    scanf("%d %d",&r,&c);
    int m[r][c],sum=0;
    for (int i = 0; i < r; i++)
    { for (int j = 0; j < c; j++)
    {   scanf("%d",&m[i][j]); 
      }
    }
    for (int i = 0; i < r; i++)
    {   for (int j = 0; j < c; j++)
     {if(m[i][j]!=m[j][i])
        issym =0;
        break;
     }
     if (issym ==0)
     {
        break;
     }
    }
    if (issym)
    {
        printf("Symmetric.");
    }
    else{
        printf("Not symm!");
    }
    
}
*/

/*
//uppper triangular matrix
#include <stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int mat[m][n];
    int sum = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("matrix is\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(i<=j){
                sum += mat[i][j];
                printf("%d ",mat[i][j]);
            }
          }     
            printf("\n");
        }
         printf("Sum of Upper Triangle is %d\n", sum);
        return 0;
}
*/
/*
//adding two matrix 
#include <stdio.h>
int main() {
    int r, c;
    // Input dimensions of matrices
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat1[r][c], mat2[r][c], sum[r][c];
    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    // Add the two matrices and output the result
    printf("Resultant matrix after addition:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
            printf("%d ", sum[i][j]); // Directly print the result
        }
        printf("\n"); // New line after each row
    }
    return 0;
}
*/

/*
//Sum of Diagonal Elements of a Matrix
#include <stdio.h>
int main()
{ int  m,n;
 scanf("%d %d",&m,&n);
 int matrix[m][n];
 int sum=0;
 for(int i=0;i<m;i++){
     for(int j=0;j<n;j++){
         scanf("%d",&matrix[i][j]);
     }
 }
 printf("\nDiagonal Elements are:\n");
 for(int i=0;i<m;i++){
     printf("%d\n", matrix[i][i]);
     sum+=matrix[i][i];
 }
 printf("\nThe Sum of Diagonal Elements of a Matrix =  %d\n",sum);
    return 0;
}
*/
/*
//C program to read matrix [3x3] that prints the sum of major(main) and minor(off) diagonal elements.
#include <stdio.h>
int main()
{   int m=3,n=3;
    int matrix[m][n];
    int maindiagonalsum = 0, minordiagonalsum =0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Major Diagonal Elements : ");
    for(int i=0;i<m;i++){
        printf("%d ",matrix[i][i]);
        maindiagonalsum += matrix[i][i];
        }
    printf("\n\nMinor Diagonal Elements : ");
    for(int i=0;i<m;i++){
        printf("%d ",matrix[i][m-i-1]);
        minordiagonalsum += matrix[i][m-i-1];
    }
    printf("\n\nSum of Major Diagonal Elements : %d\n",maindiagonalsum);
    printf("\nSum of Minor Diagonal Elements : %d",minordiagonalsum);
        
    return 0;
}
*/

//matrix multiplacation
#include <stdio.h>
int main() {
    int r1, c1, r2, c2;
    // Input dimensions of the matrices
    printf("Enter rows and columns of the first matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and columns of the second matrix: ");
    scanf("%d %d", &r2, &c2);
    // Matrix multiplication is only possible if c1 == r2
    if (c1 != r2) {
        printf("Matrix multiplication not possible. Columns of the first matrix must equal rows of the second matrix.\n");
        return 0;
    }
    int mat1[r1][c1], mat2[r2][c2], result[r1][c2];
    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }
    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }
    // Initialize result matrix with 0
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
        }
    }
    // Multiply the matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            for (int k = 0; k < c1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
    // Output the result matrix
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/*
//C Program to find Sum of each row of a Matrix
#include <stdio.h>
int main() {
    int r, c;
    // Input dimensions of the matrix
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int mat[r][c];
    // Input elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    // Calculate and print the sum of each row
    printf("Sum of each row:\n");
    for (int i = 0; i < r; i++) {
        int rowSum = 0;
        for (int j = 0; j < c; j++) {
            rowSum += mat[i][j];
        }
        printf("Sum of row %d = %d\n", i + 1, rowSum); // Print sum of the current row
    }
    // Calculate and print the sum of each column
    printf("Sum of each column:\n");
    for (int j = 0; j < c; j++) {
        int colSum = 0;
        for (int i = 0; i < r; i++) {
            colSum += mat[i][j];
        }
        printf("Sum of column %d = %d\n", j + 1, colSum); // Print sum of the current column
    }
    return 0;
}*/
