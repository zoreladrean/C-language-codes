# Array Reversal Using Pointers
This program reverses the elements of an array using pointer manipulation.

---
-   Reverses array elements in-place (modifies original array)
-   Uses pointer arithmetic
-   Preserves original array size

---
### Code sample for `reverseArrayFunction`:
```c
void reverseArrayFunction ( int *array, int size ) {
  int temp;
  int *start = array; //pointer to first element
  int *end = array + size - 1; //pointer to last element

  while ( start < end ) {
    //swap elements using pointers
    temp = *start;
    *start = *end;
    *end = temp;
    
    //move pointers to the center
    start++;
    end--;
  }
}
```

*or you could also do this* :laughing:
```c
void reverseArrayFunction ( int *a, int size ) {
    for ( int i = size - 1; i >= 0; i-- )
        printf ( " %d", *( a + i ) );
}
```

---
### Sample Outputs:
- ![sample output 1](https://github.com/zoreladrean/C-language-codes/blob/main/reverse_array_using_pointers/sampleOutput1.PNG)
- ![sample output 2](https://github.com/zoreladrean/C-language-codes/blob/main/reverse_array_using_pointers/sampleOutput2.PNG)