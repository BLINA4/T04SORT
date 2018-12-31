/* Sorting algorithms programm
 * Header file 
 * Protected by GNU GPL license v3 */

#ifndef __SORT_H_
#define __SORT_H_

#define MAX 50000

/* Utility functions */
void Swap( int *X, int *Y );
int CheckSort( int *Mas, int N );

/* Fill functions */
void FillIncr( int *Mas, int N );
void FillDecr( int *Mas, int N );
void FillEq( int *Mas, int N );
void FillRand( int *Mas, int N );
void FillMostly( int *Mas, int N );   

/* Sort functions */
void BubbleSort( int *Mas, int N );
void BubbleSort1( int *Mas, int N );
void InsertionSort( int *Mas, int N );
void SelectionSort( int *Mas, int N );   

#endif /* __SORT_H_ */

/* END OF 'SORT.H' FILE */

