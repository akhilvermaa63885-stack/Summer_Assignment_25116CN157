#include <stdio.h>
int main(void) {
    printf("Hello, world!\n");
    return 0;
}

***Write a program to Calculate sum of first N 
natural numbers.***

#include <stdio.h>

int main() {
     int n, sum = 0;

    printf("Enter a positive integer N : ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;

    printf("sum of first natural numbers is: %d\n", sum);

    return 0;
}

**Write a program to Print multiplication table of 
a given number. **
 
#include <stdio.h>

int main() {
    int num, i;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print multiplication table
    printf("Multiplication Table of %d:\n", num);

    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}