#include <stdio.h>
#define BG_RED      "\x1b[41m"
#define BG_GREEN    "\x1b[42m"
#define BG_BLUE     "\x1b[44m"
#define BG_YELLOW   "\x1b[43m"
#define BRED        "\x1b[31;1m"
#define BGREEN      "\x1b[32;1m"
#define BBLUE       "\x1b[34;1m"
#define BYELLOW     "\x1b[33;1m"
#define RESET       "\x1b[0m"
#define CS "\x1b[2J\x1b[1;1H"

#define ROW 6
#define COL 6

void add ( int matrixresult [ ROW ] [ COL ], int matrixA [ ROW ] [ COL ], int matrixB [ ROW ] [ COL ], int row, int col );
void subtract ( int matrixDIFFERENCE [ ROW ] [ COL ], int matrixA [ ROW ] [ COL ], int matrixB [ ROW ] [ COL ], int row, int col );
void multiply ( int matrixPRODUCT [ ROW ] [ COL ], int matrixA [ ROW ] [ COL ], int matrixB [ ROW ] [ COL ], int row, int col );

int main ( void ) {

    int matrixA [ ROW ] [ COL ] =   {   { 1, 2, 3, 4, 5, 6 },
                                        { 7, 8, 9, 10, 11, 12 },
                                        { 13, 14, 15, 16, 17, 18 },
                                        { 19, 20, 21, 22, 23, 24 },
                                        { 25, 26, 27, 28, 29, 30 },
                                        { 31, 32, 33, 34, 35, 36 }
                                    };
//                                  /*
    int matrixB [ ROW ] [ COL ] =   {   { 6, 5, 4, 3, 2, 1 },
                                        { 12, 11, 10, 9, 8, 7 },
                                        { 18, 17, 16, 15, 14, 13 },
                                        { 24, 23, 22, 21, 20, 19 },
                                        { 30, 29, 28, 27, 26, 25 },
                                        { 36, 35, 34, 33, 32, 31 }
                                    };
//                                  */
/*
    int matrixB [ ROW ] [ COL ] =   {   { 1, 2, 3, 4, 5, 6 },
                                        { 7, 8, 9, 10, 11, 12 },
                                        { 13, 14, 15, 16, 17, 18 },
                                        { 19, 20, 21, 22, 23, 24 },
                                        { 25, 26, 27, 28, 29, 30 },
                                        { 31, 32, 33, 34, 35, 36 }
                                    };
*/
    printf ( CS );
    int counter1, counter2;

    int matrixSUM [ ROW ] [ COL ];
    add ( matrixSUM, matrixA, matrixB, ROW, COL );
    printf ( BG_RED BGREEN"Sum of matrices:\n"RESET );
    for ( counter1 = 0; counter1 < ROW; counter1++ ) {
        for ( counter2 = 0; counter2 < COL; counter2++ )
            printf ( BG_GREEN BBLUE"%2d "RESET, matrixSUM [ counter1 ] [ counter2 ] );
        printf ( "\n" );
    }

    printf ( "\n" );

    int matrixDIFFERENCE [ ROW ] [ COL ];
    subtract ( matrixDIFFERENCE, matrixA, matrixB, ROW, COL );
    printf ( BG_BLUE BYELLOW"Difference of matrices:\n"RESET );
    for ( counter1 = 0; counter1 < ROW; counter1++ ) {
        for ( counter2 = 0; counter2 < COL; counter2++ )
            printf ( BG_YELLOW BRED"%2d "RESET, matrixDIFFERENCE [ counter1 ] [ counter2 ] );
        printf ( "\n" );
    }

    printf ( "\n" );

    int matrixPRODUCT [ ROW ] [ COL ];
    multiply ( matrixPRODUCT, matrixA, matrixB, ROW, COL );
    printf ( BG_GREEN BRED"Product of matrices:\n"RESET );
    for ( counter1 = 0; counter1 < ROW; counter1++ ) {
        for ( counter2 = 0; counter2 < COL; counter2++ )
            printf ( BG_BLUE BGREEN"%4d "RESET, matrixPRODUCT [ counter1 ] [ counter2 ] );
        printf ( "\n" );
    }

    return 0;
}

void add ( int matrixresult [ ROW ] [ COL ], int matrixA [ ROW ] [ COL ], int matrixB [ ROW ] [ COL ], int row, int col ) {
    int counter1, counter2;
    for ( counter1 = 0; counter1 < row; counter1++ ) {
        for ( counter2 = 0; counter2 < col; counter2++ )
            matrixresult [ counter1 ] [ counter2 ] = matrixA [ counter1 ] [ counter2 ] + matrixB [ counter1 ] [ counter2 ];
    }
}

void subtract ( int matrixDIFFERENCE [ ROW ] [ COL ], int matrixA [ ROW ] [ COL ], int matrixB [ ROW ] [ COL ], int row, int col ) {
    int counter1, counter2;
    for ( counter1 = 0; counter1 < row; counter1++ ) {
        for ( counter2 = 0; counter2 < col; counter2++ )
            matrixDIFFERENCE [ counter1 ] [ counter2 ] = matrixA [ counter1 ] [ counter2 ] - matrixB [ counter1 ] [ counter2 ];
    }
}

void multiply ( int matrixPRODUCT [ ROW ] [ COL ], int matrixA [ ROW ] [ COL ], int matrixB [ ROW ] [ COL ], int row, int col ) {
    int counter1, counter2;
    for ( counter1 = 0; counter1 < row; counter1++ ) {
        for ( counter2 = 0; counter2 < col; counter2++ )
            matrixPRODUCT [ counter1 ] [ counter2 ] = matrixA [ counter1 ] [ counter2 ] * matrixB [ counter1 ] [ counter2 ];
    }

}


/*
Exercise (Graded)
Write a program that reads two matrices of integers. It then generates the sum, difference and product
of the two matrices.
The sum of the two matrices of the same size is a matrix with elements that are the sums of the
corresponding elements of the two given matrices. Addition is not defined for matrices of different sizes.
If A and B are matrices of the same size, then we define subtraction as follows: A – B = A + (-B). Thus, to
subtract matrix B from matrix A, we simply subtract corresponding elements.
To multiply a matrix by another matrix we need to do the "dot product" of rows and columns. The "Dot
Product" is where we multiply matching members, then sum up:
(1, 2, 3) • (7, 9, 11) = 1×7 + 2×9 + 3×11 = 58
We match the 1st members (1 and 7), multiply them, likewise for the 2nd members (2 and 9) and the
3rd members (3 and 11), and finally sum them up.
Use the following definitions:
#define ROW 6
#define COL 6
void add(int matrixResult[][COL],int matrixA[][COL],int
matrixB[][COL],int row,int col);
 sum of matrixA and matrixB is assigned to matrixResult
void subtract(int matrixResult[][COL],int matrixA[][COL],int
matrixB[][COL],int row,int col);
 difference of matrixA and matrixB is assigned to matrixResult
void multiply(int matrixResult[][COL],int matrixA[][COL],int
matrixB[][COL],int row,int col);
 product of matrixA and matrixB is assigned to matrixResult
Note: You may initialize the two matrices during declaration. Make sure to test the functions inside main().
Project name: Matrix
Filenames: matrix.h, matrix.c, main.c
*/