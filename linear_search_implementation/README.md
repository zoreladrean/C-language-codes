# Linear Search Implementation
A simple C program that demonstrates linear search algorithm to find an element in an array.

---
### Code of the linear search function:
```c
int funcFindNum ( int a [ ], int size, int find ) {
  for ( int i = 0; i < size; i++ ) 
    if ( a [ i ] == find )
      return i;
  
  return -1;
}
```
---
### Sample Outputs
Let's say we have an array of: ``` arr [ ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; ```
- ![sample output 1](https://github.com/zoreladrean/C-language-codes/blob/main/linear_search_implementation/sampleOutput1.PNG)
- ![sample output 2](https://github.com/zoreladrean/C-language-codes/blob/main/linear_search_implementation/sampleOutput2.PNG)