#include <stdio.h>
#include <string.h>

int main() {
    char array[255];
    int vowels_count = 0;
    const char *vowels = "aeiouAEIOU";

    printf ( "Enter a word and let's count how many vowel letters it has: " );
    scanf ( "%s", array );

    printf ( "The vowel letters are:\n" );
    for ( int counter = 0; array[counter] != '\0'; counter++ ) {
        if ( strchr ( vowels, array[counter]) != NULL ) {
            printf ( "%c\n", array[counter] );
            vowels_count++;
        }
    }

    printf( "Total number of vowel letters: %d\n", vowels_count );

    return 0;
}
