# Robust Palindrome Checker
A C program that determines if a string is a palindrome, ignoring case and non-alphanumeric characters.

---
### Try it yourself :wink:
| Input String  | Palindrome? |
| ------------- | ------------- |
| racecar  | Yes  |
| A man, a plan, a canal: Panama  | Yes  |
| No 'x' in Nixon  | Yes  |
| Hello, World!  | No  |
| 12321  | Yes  |
| 1abba1  | Yes  |
| palindrome  | No  |

---
### Code of the palindrome function
```c
int isPalindrome ( const char *string ) {
  int left = 0;
  int right = strlen ( string ) - 1;

  while ( left < right ) {
    //move left index to the next alphanumeric character
    while ( left < right && !isalnum ( string [ left ] ) )
      left++;

    //move right index to the previous alphanumeric character
    while ( left < right && !isalnum ( string [ right ] ) )
      right--;
    
    //compare characters and ignore case
    if ( tolower ( string [ left ] ) != tolower ( string [ right ] ) )
      return 0;

    //move to the center
    left++;
    right--;
  }

  return 1; //if its a palindrome
}
```
---
### Sample Outputs
- ![sample output 1](https://github.com/zoreladrean/C-language-codes/blob/main/robust_palindrome_checker/sampleOutput1.PNG)
- ![sample output 2](https://github.com/zoreladrean/C-language-codes/blob/main/robust_palindrome_checker/sampleOutput2.PNG)