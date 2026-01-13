#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (gcd(a, b) == 1)
        printf("The numbers are Co-prime");
    else
        printf("The numbers are NOT Co-prime");

    return 0;
}
