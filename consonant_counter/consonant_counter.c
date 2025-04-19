#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countConsonants ( char *sentence, int length );

int main ( void ) {

    char sentence [ 200 ];
    int lengthofstring;

    printf ( "Type a sentence: " );
    fgets ( sentence, sizeof ( sentence ), stdin );
    lengthofstring = strlen ( sentence );

    printf ( "\nThe number of consonant letters in the sentence is: %d", countConsonants ( sentence, lengthofstring ) );

    return 0;
}

int countConsonants ( char *sentence, int length ) {
    int consonantcounter = 0;
    int counter;
    for ( counter = 0; counter < length; counter++ ) {
        if ( isalpha ( sentence [ counter ] ) ) {
            if ( !( strchr ( "AEIOUaeiou", sentence [ counter ] ) ) )
                consonantcounter++;
        }
    }
    return consonantcounter;
}