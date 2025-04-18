#include <stdio.h>

int multipleoftwoandfivefunction ( int numarray [], int num );

int main ( void ) {

    int num, counter;
        printf ( "Let's see how many numbers you input are multiples of both 2 and 5...\n\n" );
        printf("How many numbers do you want to input? ");
        scanf ( "%d", &num );

        int numarray [ num ];
        printf ( "Enter the numbers you want to check: ");
        for ( counter = 0; counter < num; counter++ ) {
            scanf ( "%d", &numarray [ counter ] );
        }

        int result = multipleoftwoandfivefunction ( numarray, num );


        if ( result == 1 )
            printf ( "There is only %d integer with multiples of both 2 and 5.", result );
        else
            if ( result > 1 )
                printf ( "There are %d integers with multiples of both 2 and 5.", result );
            else
                printf ( "There's no multiples of 2 and 5 from the numbers you've given." );

    return 0;
}

int multipleoftwoandfivefunction ( int numarray [], int num ) {

    int ifcounter = 0, counter;

    for ( counter = 0; counter < num; counter++ ) {
        if ( numarray[counter] % 2 == 0 && numarray[counter] % 5 == 0 ) {
            ifcounter++;
        }
    }
    return ifcounter;
}