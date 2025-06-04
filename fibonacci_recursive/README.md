# Recursive Fibonacci Sequence Generator
This generates the Fibonacci sequence using a recursive algorithm.

---
### Code:
```c
#include <stdio.h>

int fibonacci ( int n );

int main ( void ) {

  int len;

  printf ( "Enter the length: " );
  scanf ( "%d", &len );

  for ( int i = 1; i <= len; i++ )
    printf ( "%d\t", fibonacci ( i ) );

  return 0;
}

int fibonacci ( int n ) {
  
  if ( n == 0 || n == 1 )
    return n;
  else
    return fibonacci ( n - 1 ) + fibonacci ( n - 2 );
}
```
---
### Try it yourself :wink:

| Input | Expected Output |
| ------------- | ------------- |
| 1 | `1`|
| 5 | `1 1 2 3 5`|
| 8 | `1 1 2 3 5 8 13 21` |
| 10 | `1 1 2 3 5 8 13 21 34 55` |
