#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
    if (n < 0) {
        
	fprintf(stderr, "Error: X version\n");
        exit(EXIT_FAILURE);
    }
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    printf("%d! = %d\n", num, factorial(num));
    return 0;
}

