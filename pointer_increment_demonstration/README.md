# Pointer Increment Demonstration
This program demonstrates pointer operations and variable modification through pointers.

---
### Key Concepts Demonstrated :key:
1.  **Pointer Basics**:
    -   `int *p = &a`  creates a pointer storing the address of  `a`
    -   `*p`  dereferences the pointer to access the value at that address
2.  **Pointer Operations**:
    -   `(*p)++`  increments the value being pointed to (changes  `a`)
    -   `p++`  would move the pointer to the next memory location
    -   `*(p++)`  would dereference then move the pointer
3.  **Memory Addresses**:
    -   `&a`  gets the address of variable  `a`
    -   `p`  shows the address stored in the pointer
    -   Note: Should use  `%p`  format specifier for addresses

**Note:** :notebook_with_decorative_cover:
- *Dereferencing means **taking away the reference and giving you what it was actually referring to**. A pointer to something really means that your pointer variable holds a memory address of something . But the pointer can also be thought of as a reference to something instead.*
- **`Ampersand Symbol ( & )`** *is the Address Operator in C and a special unary operator that returns the address of a variable. This operator returns an `integer` value which is the address of its operand in the memory. We can use the address operator (&) with any kind of `variables`, `array`, `strings`, `functions`, and even **`POINTERS`**.*


---
### Code:
```c
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
```

---

### Expected Output
```
a = 10
&a = 0x7ffd42d3ba9c  (example address, will vary)
p = 0x7ffd42d3ba9c   (same as &a)
*p = 10


After operation:
a = 11
&a = 0x7ffd42d3ba9c  (same address)
p = 0x7ffd42d3ba9c   (same address)
*p = 11
```

---
### Common Mistakes to Avoid
1.  Using wrong format specifiers:
    -   Use  `%p`  for addresses (not  `%d`)
    -   Using  `*`  on non-pointer variables
2.  Pointer operation confusion:
    -   `(*p)++`  vs  `*p++`  have very different effects
    -   The parentheses change the order of operations

### REMINDER :warning:
1.  Never dereference uninitialized pointers
2.  Be careful with pointer arithmetic to avoid accessing invalid memory
3.  Remember that pointer operations can modify your original data

---

### Sample Output:
- ![sample output](https://github.com/zoreladrean/C-language-codes/blob/main/pointer_increment_demonstration/sampleOutput.PNG)