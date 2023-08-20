//Prime Numbers within the given range
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int primes[n];
    int nPrimes = 0;
    int ocount = 0;
    int icount = 0;
    float c1 = 0.0;
    float c2 = 0.0;
    for (int i = 2; i <= n; i++) {
        bool isPrime = true;
        for (int j = 2; j < i; j++) {
            icount++;
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        ocount++;

        if (isPrime) {
            primes[nPrimes++] = i;
        }
    }
    printf("Prime numbers less than or equal to %d: ", n);
    for (int i = 0; i < nPrimes; i++) {
        printf("%d ", primes[i]);
    }
    printf("\n");
    printf("Outer loop: %d\n", ocount);
    printf("Inner loop: %d\n", icount);
    c1 = (float)ocount/n;
    printf("c1: %0.2f", c1);
    c2 = (float)icount/n;
    printf("c2: %0.2f\n", c2);
    return 0;
}
