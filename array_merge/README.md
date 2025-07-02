# Array Merger
A C program that merges two sorted integer arrays into a single combined array.

---
-   Merges two pre-sorted arrays into one combined array
-   Uses pointer arithmetic for array manipulation
-   Preserves the original order of elements
-   Efficient O(n+m) time complexity

---
### Code:
```c
#include <stdio.h>

void mergeArrays ( int *a, int lenA, int *b, int lenB, int *c );
```
```c
int main ( void ) {

  int arrayA [ ] = { 1, 2, 3, 4, 5, 6 };
  int arrayB [ ] = { 7, 8, 9, 10, 11, 12 };
  int sizeA = sizeof ( arrayA ) / sizeof ( arrayA [ 0 ] );
  int sizeB = sizeof ( arrayB ) / sizeof ( arrayB [ 0 ] );
  int combineAB [ sizeA + sizeB ];
  int sizeC = sizeof ( combineAB ) / sizeof ( combineAB [ 0 ] );

  mergeArrays ( arrayA, sizeA, arrayB, sizeB, combineAB );

  for ( int i = 0; i < sizeC; i++ )
    printf ( "%d ", combineAB [ i ] );

  return 0;
}
```

```c
void mergeArrays ( int *a, int lenA, int *b, int lenB, int *c ) {

  int i = 0, j = 0, k = 0;

  while ( i < lenA )
    *( c + ( k++ ) ) = *( a + ( i++ ) );

  while ( j < lenB )
    *( c + ( k++ ) ) = *( b + ( j++ ) );
}

```

*you can also use a non pointer approach for the mergeArrays function* :wink:
```c
void mergeFunct ( int a [ ], int sizeA, int b[ ], int sizeB, int c [ ] ) {
    int i = 0, j = 0, k = 0;

    while ( i < sizeA )
        c [ k++ ] = a [ i++ ];

    while ( j < sizeB )
        c [ k++ ] = b [ j++ ];
}
```

---
The reason why arrays  **A** and **B** merge into the third array **C** without overlapping in the same index is because of the way the indices *(i, j, and k)* are handled in the merge function.

Here's how it works:

#### Array A Copying:
The first while loop copies all elements from array **A** to array **C** one by one. **i** is the index for traversing array **A**, and **k** is the index for traversing array **C**.
Every time an element from **A** is copied to **C**, both **i** and **k** are incremented, ensuring that the next element from **A** will be copied to the next available index in **C**.

#### Array B Copying:
After all elements from **A** have been copied to **C**, the second while loop copies all elements from array **B** to array **C**, starting from where **k** left off.
**j** is the index for traversing array **B**, and **k** continues from where it was left after copying **A**. Since **k** was already incremented to the correct index during the copying of **A**, **B** will begin filling **C** from the next available index.

#### Visual Breakdown:
Let's take a specific example to make it clearer.

Given arrays:
```c
int arrayA[] = {1, 2, 3, 4, 5};
int arrayB[] = {6, 7, 8, 9, 10};
```
```
Merge process:
Initial state of combineAB (empty array):
```
```c
combineAB: [_, _, _, _, _, _, _, _, _, _]
```

#### After copying elements from arrayA:

` c[k++] = a[i++] ` ensures elements from `arrayA` are copied sequentially into `combineAB` without overwriting anything.

After copying **arrayA**, **combineAB** looks like this:

`combineAB: [1, 2, 3, 4, 5, _, _, _, _, _]`

#### After copying elements from arrayB:

`c[k++] = b[j++]` starts copying elements from `arrayB`, starting from where **k** left off (which is after the last element of `arrayA`).

#### After copying arrayB, combineAB looks like this:

`combineAB: [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]`

*Why No Overlap Happens:*
The index **k** is responsible for tracking where the next element in **combineAB** should be placed. It is incremented each time an element is copied, ensuring that no elements from **A** or **B** overwrite each other.
The copying from **A** completes first, filling the first **lenA** slots of **C**. Afterward, **B** fills the remaining slots, starting from where **A** left off.
This avoids any overlap, and all elements are placed in their proper position in **combineAB**.