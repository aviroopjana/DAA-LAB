//Implementation of Fibonacci using recursion

#include<stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n; // Base case: return n if n is 0 or 1
    }
    else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int n;

    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d",&n);

    printf("Fibonacci sequence upto %d terms: ",n);
    for (int i = 0; i < n; i++) {
        printf("%d ",fibonacci(i));
    }
    
}