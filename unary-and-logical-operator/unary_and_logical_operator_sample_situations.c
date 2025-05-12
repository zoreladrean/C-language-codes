#include <stdio.h>

int main ( void ) {


    { //spacing matters for increment/decrement
        int c [] = { 4, 3, 4, 3, 4, 3 };
        printf ( "%d\n", c[ 0 ]+++c [ 1 ] ); //neither gets incremented
        printf ( "%d\n", c[ 2 ] + ++c [ 3 ] ); //c[3] gets incremented
        printf ( "%d\n\n", c[ 4 ]++ + c [ 5 ] ); //c[4] doesnt get incremented
    }

    {
        int a = 4, b = 3, total;
        total = ( a > b) && ++b; //result is true and b is incremented
        printf ( "total1 = %d\n", total ); //prints 1 if true and 0 if false
        printf ( "b = %d\n\n", b );
    }

    {
        int a = 4, b = 3, total;
        total = ( a < b) && ++b; //result is false and b doesnt get incremented, the incrementing of b is skipped because the statement a less than b is false, so everything in this statement becomes false either way
        printf ( "total2 = %d\n", total );
        printf ( "b = %d\n\n", b );
    }

    {
        int a = 4, b = 3, total;
        total = ( a > b) || ++b; //result is true but b doesnt get incremented
        printf ( "total3 = %d\n", total );
        printf ( "b = %d\n\n", b );
    }

    {
        int a = 4, b = 3, total;
        total = ( a < b) || ++b; //result is true and b is incremented
        printf ( "total4 = %d\n", total );
        printf ( "b = %d\n\n", b );
    }


    return 0;
}