
# 📌 A simple C program that counts the number of digits in an integer.  

📋 This program takes an integer input (positive or negative) from the user and calculates the number of digits it contains. It handles negative numbers by converting them to positive before counting digits.  

*in the code I used*
```c
if ( n  <  0 )
n  =  -n;
```
>to convert the number to positive if the user inputed a negative number

*but you can use:*
```c
int absolute_n = (n < 0) ? -n : n;
```
>which is a bit complicated to understand for beginners because it uses **ternary operators**

**or**
```c
n = fabs ( n );
```
>but you will need to add the `#include  <math.h>` library
>or else you will get this error: `warning: incompatible implicit declaration of built-in function 'fabs'`
---
### Sample Outputs
- ![sample output 1](https://github.com/zoreladrean/C-language-codes/blob/main/digit-counter/sampleOutput1.PNG)
- ![sample outpu2](https://github.com/zoreladrean/C-language-codes/blob/main/digit-counter/sampleOutput2.PNG)