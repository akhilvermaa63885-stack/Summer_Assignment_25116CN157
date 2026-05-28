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

    printf("Enter a positive integer : ");
    scanf("%d", &n);
    sum = n * (n + 1) / 2;

    printf("sum of first natural numbers is: %d\n", sum);

    return 0;
}