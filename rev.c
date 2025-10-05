#include <stdio.h>

int main() {
    int num, reversedNum = 0, remainder;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop to reverse the number
    while (num != 0) {
        remainder = num % 10;          // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num = num / 10;                // Remove the last digit from the original number
    }

    // Print the reversed number
    printf("Reversed number: %d\n", reversedNum);

    return 0;
}
