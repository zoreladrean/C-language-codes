# Factorial Calculator *(for-loop version)*
This program calculates the factorial of a number using an iterative approach with pointer manipulation.

---
-   Calculates factorial iteratively (non-recursive)
-   Uses pointer to store and return the result
-   Handles both positive integers and zero
-   Efficient computation with O(n) time complexity

---
### Code of `sortArray` function:
```c
#include <stdio.h>

int factorial ( int n, int *result );

int main ( void ) {

  int n;
  int result = 1;

  printf ( "Enter a number: " );
  scanf ( "%d", &n );

  int num = factorial ( n, &result );

  if ( num > 0 )
    printf ( "The factorial is: %d", num );
  else
    printf ( "Please enter a non-negative number.\n" );

  return 0;
}

int factorial ( int n, int *result ) {
  
  if ( n < 0 )
    return -1;
  else
    if ( n == 0 || n == 1 )
      return *result;
    else
      for ( int i = 2; i <= n; i++ )
        *result *= i;

  return *result;
}
```

---

### Sample Output:
-  ![sample output 1](https://github.com/zoreladrean/C-language-codes/blob/main/factorial/for_loop_version_factorial/sampleOutput1.PNG)
-  ![sample output 2](https://github.com/zoreladrean/C-language-codes/blob/main/factorial/for_loop_version_factorial/sampleOutput2.PNG)
-  ![sample output 3](https://github.com/zoreladrean/C-language-codes/blob/main/factorial/for_loop_version_factorial/sampleOutput3.PNG)
-  ![sample output 4](https://github.com/zoreladrean/C-language-codes/blob/main/factorial/for_loop_version_factorial/sampleOutput4.PNG)
-  ![sample output 5](https://github.com/zoreladrean/C-language-codes/blob/main/factorial/for_loop_version_factorial/sampleOutput5.PNG)
-  ![sample output 6](https://github.com/zoreladrean/C-language-codes/blob/main/factorial/for_loop_version_factorial/sampleOutput6.PNG)