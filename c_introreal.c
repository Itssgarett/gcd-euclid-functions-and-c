#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

// Function to compute GCD using Euclid's algorithm
int gcd(int a, int b) {
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}

int main()
{
    stdio_init_all();

    while (true) {

        // Case 1 where GCD is not 1
        int a1 = 48, b1 = 18;
        printf("GCD of a=%d and b=%d is %d\n", a1, b1, gcd(a1, b1));

        // Case 2 GCD = 1
        int a2 = 13, b2 = 2;
        printf("GCD of a=%d and b=%d is %d\n", a2, b2, gcd(a2, b2));

        // Case 3 S Number
        int a3 = 66, b3 = 71;
        printf("GCD of a=%d and b=%d is %d\n", a3, b3, gcd(a3, b3));

        printf("\n");

        sleep_ms(3000);
    }
}
