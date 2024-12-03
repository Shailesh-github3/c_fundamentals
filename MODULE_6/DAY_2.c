/* //C program to print 'WELCOME' using malloc() and free().
#include<stdio.h>
#include <stdlib.h>
int main(){
    char *str = (char *)malloc(8 * sizeof(char));
    if(str == NULL){
        printf("Memory allocation failed\n");
        return 1;
    }
    sprintf(str, "WELCOME");
    printf("%s\n", str);
    free(str);
} */

/* //C program to check given input is even or odd using calloc().
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *num;
    num = (int *)calloc(1,sizeof(int));
    if(num==NULL){
        printf("Memory allocation failed!");
        return 1;
    }
    scanf("%d",num);
    if(*num%2==0)  printf("%d is Even Number",*num);
    else  printf("%d is Odd Number",*num);
    free(num);
    return 0;
}
 */

/* //C program to add value 12,10,8 to list which already have 1,2,3,4 in that  using realloc() and print all value in the list.
#include <stdio.h>
#include <stdlib.h>
int main(){
    int *list = (int *)malloc(4 * sizeof(int));
    if(list == NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    list[3] = 4;
    
    list = (int *)realloc(list, 7 * sizeof(int));
    if(list == NULL){
        printf("Memory reallocation faile!\n");
        return 1;
    }
    list[4] = 12;
    list[5] = 10;
    list[6] = 8;
    
    for(int i=0;i<7;i++){
        printf("%d ",list[i]);
    }
    printf("\n");
    free(list);
    return 0;
} */

/* //C program to multiply four float numbers using pointers in which memory allocated using malloc(). 
#include <stdio.h>
#include <stdlib.h>
int main(){
    float *numbers = (float *)malloc(4 * sizeof(float));
    if(numbers==NULL){
        printf("Memory allocation failed!\n");
        return 1;
    }
    float result = 1.0;
    for(int i=0;i<4;i++){
        scanf("%f",&numbers[i]);
        result*= numbers[i];
    }
    printf("The result is %f",result);
    free(numbers);
    return 0;
} */

/* // C program to count total number of even elements in the following array  3,5,32,21,20 using malloc().
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size = 5;
    int *arr = (int *)malloc(size * sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed!");
        return 1;
    }
    arr[0] = 3;
    arr[1] = 5;
    arr[2] = 32;
    arr[3] = 21;
    arr[4] = 20;
    int evenCount = 0;
    for(int i=0;i<size;i++){
        if(arr[i] % 2 == 0){
            evenCount++;
        }
    }
    printf("Total even elements: %d",evenCount);
    free(arr);
    return 0;
} */

/* //C program to print values 25,30,35  using malloc() and free().
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr , i;
    ptr = (int *)malloc(3* sizeof(int));
    if(ptr == NULL){
        printf("Memory allocation failed.\n");
        return 1;
    }
    ptr[0] = 25;
    ptr[1] = 30;
    ptr[2] = 35;
    for(i =0;i<3;i++){
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    return 0;
} */

/* //Write a C program to check 4567 is positive or not using calloc() .
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *num;
    num = (int *)calloc(1,sizeof(int));
    if(num==NULL){
        printf("Memory allocation failed!");
        return 1;
    }
    *num = 4567;
    if(*num>0)  printf("%d is Positive",*num);
    else if(*num<0)  printf("%d is Negative",*num);
    else  printf("%d is zero",*num);
    free(num);
    return 0;
} */

/* //C program to add value 'E' , 'G' ,'E' to list which already have C,O,L,L  in that  using realloc() and print all value in the list.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char *list = (char *)malloc(4 * sizeof(char));
    if(list == NULL){
        printf("Memory allocation failed!");
        return 1;
    }
    list[0] = 'C';
    list[1] = 'O';
    list[2] = 'L';
    list[3] = 'L';
    list = (char *)realloc(list, 7*sizeof(char));
    if(list == NULL){
        printf("Memory allocation failed!");
        return 1;
    }
        list[4] = 'E';
        list[5] = 'G';
        list[6] = 'E';
        for(int i=0;i<7;i++){
            printf("%c ",list[i]);
        }
        free(list);
} */

/* //C program to add three integer  numbers using pointers in which memory allocated using malloc(). 
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *n1, *n2, *n3,sum;
    n1 = (int *)malloc(sizeof(int));
    n2 = (int *)malloc(sizeof(int));
    n3 = (int *)malloc(sizeof(int));
    if(n1 == NULL || n2 == NULL || n3 == NULL){
        printf("Memory allocation failed!");
        return 1;
    }
    scanf("%d %d %d",n1,n2,n3);
    sum = *n1+*n2+*n3;
    printf("%d",sum);
    free(n1);
    free(n2);
    free(n3);
} */

/* //C program to count total number of even elements in an array  using calloc().
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,count =0;
    int *arr;
    scanf("%d",&n);
    arr = (int *)calloc(n,sizeof(int));
    if(arr == NULL){
        printf("Memory allocation failed!");
        return 1;
    }
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0){
            count++;
        }
    }
    printf("Total even elements: %d",count);
    free(arr);
    return 0;
} */

//C program to  find average of two integer  numbers using pointers in which memory allocated using malloc(). 
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int s=0,*ptr,avg,n=2;
  ptr = (int *)malloc(n*sizeof(int));
 
  for(int i=0;i<n;i++)
  {
  scanf("%d",ptr+i);
   s=s+*(ptr+i);
  }
  avg = s/n;
  printf("The average is %d ",avg);
  free(ptr);
  return 0;
}
