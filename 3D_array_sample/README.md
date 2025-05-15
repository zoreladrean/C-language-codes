
# 🧊 3D Array Visualizer in C

A simple demonstration of 3-dimensional array initialization and displaying the table via triple nested loop traversal.

---
```c
#include  <stdio.h>

  

int  main ( void ) {
int  array [ 3 ] [ 3 ] [ 3 ] ={ 
								{
									{ 1, 2, 3 },
									{ 4, 5, 6 },
									{ 7, 8, 9 }
								},
								{
									{ 10, 11, 12 },
									{ 13, 14, 15 },
									{ 16, 17, 18 }
								},
								{
									{ 19, 20, 21 },
									{ 22, 23, 24 },
									{ 25, 26, 27 }
								}
							  };
								
int  dim, row, col; //dim means dimension

for ( dim  =  0; dim  <  3; dim++ ) {
	printf ( "\n\nTable %d", dim  +1 );
	for ( row  =  0; row  <  3; row++ ) {
		printf ( "\n" );
		for ( col  =  0; col  <  3; col++ ) {
			printf ( "%d ", array [ dim ] [ row ] [ col ] );
		}
	}
}
return  0;
}
```
---
### Sample Output
- ![sample output](https://github.com/zoreladrean/C-language-codes/blob/main/3D_array_sample/sampleOutput.PNG)
