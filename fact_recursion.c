// Factorial value of a number using recursion

#include<stdio.h>

int fact(int);

int main() {
    int number, result;

    printf("Enter the number: \n");
    scanf("%d", &number);

    result = fact(number);

    printf("The factorial of the number is : %d\n",result);

    return 0;
}

int fact( int number) {
    if (number == 0) {
        return 1;
    }
    else {
        return number * fact(number - 1);
    }
}