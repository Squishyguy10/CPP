/**********************
  alphabetacoder.com
C program for a spiral 
pattern using numbers
***********************/

#include <stdio.h>

#define SIZE 10

int main() {
    // declare variables
    int pattern[SIZE][SIZE] = {0};
    int i, j, m, n, p, q, s, num;

    // take input 
    printf("Enter the size of the pattern: ");
    scanf("%d", & s);

    // initialize
    num = 1; // starting number
    i = 0; // 2d array row index
    j = 0; // 2d array column index
    m = 0; // to store row index lower limit
    n = s - 1; // to store row index upper limit
    p = 0; // to store column index lower limit
    q = s - 1; // to store column index upper limit

    // fill the array to create patern.
    // stop when n > s * s
    while (num <= s * s) {
        // fill horizontally left to right
        for (j = p; j <= q; j++) {
            pattern[m][j] = num;
            num++;
        }

        // update row index lower limit
        m++;

        // fill vertically top to bottom
        for (i = m; i <= n; i++) {
            pattern[i][q] = num;
            num++;
        }

        // update column index upper limit
        q--;

        // fill horizontally right to left
        for (j = q; j >= p; j--) {
            pattern[n][j] = num;
            num++;
        }

        // update row index upper limit
        n--;

        // fill vertically bottom to top
        for (i = n; i >= m; i--) {
            pattern[i][p] = num;
            num++;
        }

        // update column index lower limit
        p++;
    }

    // new line
    printf("\n");

    // display the pattern
    for (i = 0; i < s; i++) {
        for (j = 0; j < s; j++) {
            // print value
            printf("%d\t", pattern[i][j]);
        }
        // new line
        printf("\n");
    }

    return 0;
}


















