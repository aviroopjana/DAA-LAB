// GCD of two numbers using recursion

#include<stdio.h>

int gcd(int, int);

int main() {
    int n1, n2, result;

    printf("Enter the first number: \n");
    scanf("%d",&n1);

    printf("Enter the second number: \n");
    scanf("%d",&n2);

    result = gcd(n1,n2);

    printf("The GCD of %d and %d is : %d\n",n1,n2,result);
}

int gcd(int n1, int n2) {
    if (n1 % n2 == 0) {
        return n2;
    }
    else {
        return gcd(n2, n1%n2);
    }
}