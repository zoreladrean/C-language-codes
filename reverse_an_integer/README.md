# Integer Reversal
This program reverses the digits of an integer inputted by the user.

---
-   Reverses the digits of the integer mathematically
-   Handles both positive and negative numbers

---
### Code sample of `reverseInt` function:
- *this version handles both positive and negative integers*
```c
void reverseInt ( int num ) {

  int rem, sum = 0;
  int isNegative = num < 0;

  if ( isNegative ) //handles negative numbers
    num = -num;

  while ( num != 0 ) {
    rem = num % 10; //extract last digit
    sum = sum * 10 + rem; //add that last digit to sum
    num /= 10; //remove last digit
  }

  if ( isNegative ) //restore sign if original was negative
    sum = -sum;

  printf ( "Reversed integer: %d", sum );
}
```
---
- *this version only handles positive integers*
```c
void reverseInt ( int num ) {

  int rem, sum = 0;

  while ( num != 0 ) {
    rem = num % 10; //extract last digit
    sum = sum * 10 + rem; //add that last digit to sum
    num /= 10; //remove last digit
  }

  printf ( "Reversed integer: %d", sum );
}
```
---
- *Alternative Implementation (Recursive)*
```c
void reverseIntRecursive ( int num, int* sum ) {
    if ( num == 0 )
	  return;
    *sum = *sum * 10 + num % 10;
    reverseIntRecursive ( num / 10, sum );
}

void reverseInt ( int num ) {
    int isNegative = num < 0;
    int sum = 0;
    
    if ( isNegative )
      num = -num;
      
    reverseIntRecursive(num, &sum);
    
    if ( isNegative )
      sum = -sum;
      
    printf("Reversed: %d\n", sum);
}
```
*honestly, I don't understand the recursive version*:laughing::cry:

---

### Sample Outputs:
- ![sample output 1](https://github.com/zoreladrean/C-language-codes/blob/main/reverse_an_integer/sampleOutput1.PNG)
- ![sample output 2](https://github.com/zoreladrean/C-language-codes/blob/main/reverse_an_integer/sampleOutput2.PNG)
- ![sample output 3](https://github.com/zoreladrean/C-language-codes/blob/main/reverse_an_integer/sampleOutput3.PNG)
- ![sample output 4](https://github.com/zoreladrean/C-language-codes/blob/main/reverse_an_integer/sampleOutput4.PNG)