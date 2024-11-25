//swapping 3 num w/o temp  usimg("poniters")
#include <stdio.h>
void swapThree(int *a, int *b, int *c) {
    *a = *a + *b + *c; // Step 1: Add all three values to *a
    *b = *a - (*b + *c); // Step 2: Calculate the new *b value
    *c = *a - (*b + *c); // Step 3: Calculate the new *c value
    *a = *a - (*b + *c); // Step 4: Calculate the new *a value
}
int main() {
    int m = 20, n = 45, o = 65;
    printf("m is %d, n is %d, o is %d\n", m, n, o);
    void (*swapFunc)(int *, int *, int *) = swapThree; // Function pointer
    swapFunc(&m, &n, &o); // Swap values
    printf("m is %d, n is %d, o is %d\n", m, n, o);
    return 0;
}
