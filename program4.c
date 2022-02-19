// C Program to Perform Arithmetic Operations using Switch statement
#include <stdio.h>

int main() {
    int m, n, choice;

    printf("Enter any two positive integer numbers:\n");
    scanf("%d%d", &m, &n);

    // It will suggest to choose an option to make the operation
    printf("\nInput your choice to make an operation\n");
    printf("\n1 :: for Addition");
    printf("\n2 :: for Subtraction");
    printf("\n3 :: for Multiplication");
    printf("\n4 :: for Division");
    printf("\n5 :: for Modulus");

    printf("\n\nEnter your choice: ");
    scanf("%d", &choice);

    // It will perform operation
    // According to user's choice & print the final output
    printf("\n");
    switch (choice) {
        case 1:
            printf("Addition of %d + %d = %d\n", m, n, m + n);
            break;

        case 2:
            printf("Substraction of %d - %d = %d\n", m, n, m - n);
            break;

        case 3:
            printf("Multiplication of %d * %d = %d\n", m, n, m * n);
            break;

        case 4:
            printf("Division of %d / %d = %f\n", m, n, (float)m / n);
            break;

        case 5:
            printf("Modulus of %d %% %d = %d\n", m, n, m % n);
            break;

        default:
            printf("\nWrong choice!\n");
            break;
    }
    return 0;
}