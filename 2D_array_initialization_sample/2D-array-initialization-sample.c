#include <stdio.h>

int main ( void ) {

    // 2D array = an array, where each element is an entire array
   //            useful if you need a matrix, grid, or table of data

    /*int numbers[2][3] = {
                            { 1, 2, 3 },
                            { 4, 5, 6 }
                        };*/

    int numbers [ 3 ] [ 3 ];
    
    int rows = sizeof ( numbers ) / sizeof ( numbers [ 0 ] );
    int columns = sizeof ( numbers [ 0 ] ) / sizeof ( numbers [ 0 ] [ 0 ] );

    printf ( "%d rows\n", rows );
    printf ( "%d columns\n\n", columns );


    numbers [ 0 ] [ 0 ] = 1;
    numbers [ 0 ] [ 1 ] = 2;
    numbers [ 0 ] [ 2 ] = 3;
    numbers [ 1 ] [ 0 ] = 4;
    numbers [ 1 ] [ 1 ] = 5;
    numbers [ 1 ] [ 2 ] = 6;
    numbers [ 2 ] [ 0 ] = 7;
    numbers [ 2 ] [ 1 ] = 8;
    numbers [ 2 ] [ 2 ] = 9;


    for ( int rowsCounter = 0; rowsCounter < rows; rowsCounter++ ) {
        for ( int columnsCounter = 0; columnsCounter < columns; columnsCounter++ ) {
            printf ( "%d ", numbers[rowsCounter][columnsCounter]);
        }
        printf ( "\n" );
    }

    return 0;
}