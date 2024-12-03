/* //program to calculate area of a circle using pointer
#include <stdio.h>
#define PI 3.14
int main(){
    float a,p,r;
    float *ptrR =&r, *ptrA =&a, *ptrP = &p;
    scanf("%f",ptrR);
    *ptrA = PI*(*ptrR)*(*ptrR);
    *ptrP = 2*PI*(*ptrR);
    printf("Area of Circle : %f",*ptrA);
    printf("\nPerimeter of Circle : %.2f",*ptrP);
    return 0;
} */

/* //C program to find character 'E' is vowel or consonant using pointer.
#include <stdio.h>
#include <ctype.h>
void check(char *ch){
    char lower = tolower(*ch);
    if(lower == 'a'||lower == 'e'||lower =='i'||lower =='o'||lower =='u'){
        printf("%c is Vowel.",*ch);
    }
    else {
        printf("%c is consonant.",*ch);
    }
}
int main(){
    char c;
    scanf("%c",&c);
    check(&c);
} */

/* //program to find sum and average in the range from 90 to 100 using pointer.
#include <stdio.h>
void calculate(int *start, int *end, float *sum, float *avg){
    *sum = 0.0;
    for(int i=*start;i<=*end;i++){
        *sum += i;
    }
    *avg = *sum/(*end - *start +1);
}
int main(){
    int start, end;
    scanf("%d %d",&start,&end);
    float avg,sum;
    calculate(&start,&end,&sum,&avg);
    printf("Sum= %.2f, Average= %.2f",sum,avg);
} */

/* //c program to read and display an array of any n integer elements using pointer 
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int *ptr = arr;
    for(int i=0;i<n;i++){
        scanf("%d",ptr+i);
        printf("the elements are %d\n",*(ptr+i));
    }
} */

/* // C to print any n elements of an array  in reverse order using pointer.
#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=n-1;i>=0;i--){
        printf("element - %d : %d  ",i+1,arr[i]);
    }
} */



