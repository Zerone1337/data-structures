#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j;
    printf("Enter two integers: ");
    scanf("%d %d", &i, &j); // Fix: Use & to pass addresses

    char A[2][3] = {{'B', 'D', ' '}, {'A', 'C', 'E'}}; // Fix: Ensure all rows have the same size

    for (int i = 0; i < 2; i++) { // Fix: Outer loop iterates over rows
        for (int j = 0; j < 3; j += 2) { // Fix: Correct inner loop condition and increment
            if (i == 0 && j == 1) continue; // Skip specific condition
            printf("%c\n", A[i][j]); // Fix: Use %c for characters
        }
    }

    return 0; // Fix: Ensure return statement is outside the loop
}