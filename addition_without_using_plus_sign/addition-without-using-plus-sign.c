#include <stdio.h>

int main(void) {
    int x, y;
//this code works with negative integers
    printf("Enter 2 numbers to add: ");
    scanf("%d%d", &x, &y);

    // If y is positive, increment x by 1 y times
    if (y > 0) {
        for ( ; y > 0; y--) {
            x++;
        }
    }
    // If y is negative, decrement x by 1 |y| times
    else if (y < 0) {
        for ( ; y < 0; y++) {
            x--;
        }
    }

    printf("Sum is %d\n", x);

    return 0;
}