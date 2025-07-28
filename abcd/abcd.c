#include <stdio.h>

// Function to find factorial
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

// Function to print Fibonacci series
void fibonacci(int n) {
    int a = 0, b = 1, c;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

// Function to check if number is prime
void checkPrime(int n) {
    int i, flag = 1;
    if (n <= 1) flag = 0;
    for (i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (flag)
        printf("%d is Prime.\n", n);
    else
        printf("%d is Not Prime.\n", n);
}

// Function to reverse a number
int reverseNumber(int n) {
    int rev = 0;
    while (n != 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev;
}

// Function to find sum of digits
int sumOfDigits(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int choice, num, result;

    do {
        printf("\n--- MENU ---\n");
        printf("1. Factorial\n");
        printf("2. Fibonacci\n");
        printf("3. Check Prime\n");
        printf("4. Reverse Number\n");
        printf("5. Sum of Digits\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Factorial of %d is %d\n", num, factorial(num));
            break;

        case 2:
            printf("Enter number of terms: ");
            scanf("%d", &num);
            fibonacci(num);
            break;

        case 3:
            printf("Enter a number: ");
            scanf("%d", &num);
            checkPrime(num);
            break;

        case 4:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Reverse of %d is %d\n", num, reverseNumber(num));
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));
            break;

        case 6:
            printf("Exiting program...\n");
            break;

        default:
            printf("Invalid choice! Try again.\n");
        }
    } while (choice != 6);

    return 0;
}

