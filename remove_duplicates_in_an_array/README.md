# Duplicate Element Remover
This removes duplicate elements from an array while preserving the original order of elements.

---
-   Takes user input for array size and elements
-   Removes duplicate elements in-place (modifies original array)
-   Preserves the order of first occurrences
-   Uses pointer arithmetic for array manipulation

---
### Try it yourself :wink:

| Input | Expected Output |
| ------------- | ------------- |
| [1, 2, 3, 4] | `1 2 3 4`|
| [5, 5, 5, 5] | `5`|
| [1, 2, 1, 2] | `1 2` |
| [3, 3, 1, 2] | `3 1 2` |
| [-1, 0, -1] | `-1 0` |

---
### Code sample for `removeDuplicateElements` function:
```c
void removeDuplicateElements ( int *a, int len ) {

  int size = len;

  for ( int i = 0; i < size; i++ ) //tracks current element being checked
    for ( int j = i + 1; j < size; j++ ) //looks for duplicates of current element
      if ( *( a + i ) == *( a + j ) ) {
        for ( int k = j; k < size - 1; k++ ) //shifts array elements left when duplicate found
          *( a + k ) = *( ( a + k ) + 1 );
        size--;
        j--;
      }

  for ( int i = 0; i < size; i++ )
    printf ( " %d", *( a + i ) );
}
```
---
### Sample Outputs:
- ![sample output 1](https://github.com/zoreladrean/C-language-codes/blob/main/remove_duplicates_in_an_array/sampleOutput1.PNG)
- ![sample output 2](https://github.com/zoreladrean/C-language-codes/blob/main/remove_duplicates_in_an_array/sampleOutput2.PNG)