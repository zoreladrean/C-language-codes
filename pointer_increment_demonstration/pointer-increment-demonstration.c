#include <stdio.h>

// SAMPLE OF HOW POINTER INCREMENT WORKS
int main(void) {
    int a = 10;
    int *p = &a;  // Pointer p points to variable 'a'

    // Initial values
    printf("a = %d\n", a);      // Value of 'a' (10)
    printf("&a = %p\n", &a);    // Address of 'a' (should use %p for pointers)
    printf("p = %p\n", p);      // Value of 'p' (address of 'a')
    printf("*p = %d\n", *p);    // Value at address 'p' points to (10)

    // Pointer operation - three alternatives:
    // 1. *(p++);    // Would increment pointer (move to next memory location)
    // 2. p++;       // Same as above
    // 3. (*p)++;    // Increments the value at the address p points to
    
    (*p)++;  // This increments the value of 'a' through pointer 'p'

    printf("\n\nAfter operation:\n");
    printf("a = %d\n", a);      // Now 11 (was incremented through pointer)
    printf("&a = %p\n", &a);    // Same address as before
    printf("p = %p\n", p);      // Same address as before
    printf("*p = %d\n", *p);    // Now 11 (dereferenced incremented value)
    
    return 0;
}