# Array Duplicate Counter
This counts duplicate element pairs in an array using nested loops and pointer arithmetic.

---
### Code of `countDuplicate` function:
```c
int countDuplicate ( int *a, int len ) {
  int counter = 0;

  for ( int i = 0; i < len - 1; i++ )
    for ( int j = i + 1; j < len; j++ )
      if ( *( a + i ) == *( a + j ) )
        counter++;

  return counter;
}
```
---
### Sample Outputs:
- ![sample output 1](https://github.com/zoreladrean/C-language-codes/blob/main/duplicate_counter_array/sampleOutput1.PNG)
- ![sample output 2](https://github.com/zoreladrean/C-language-codes/blob/main/duplicate_counter_array/sampleOutput2.PNG)