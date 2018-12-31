/* Sorting algorithms programm
 * N^2 Sort functions file 
 * Protected by GNU GPL v3 license */

#include "SORT.H"

/* Bubble sort function */
void BubbleSort( int *Mas, int N )
{
  int i, j;

  for (i = 0; i < N - 1; i++)
    for (j = 0; j < N - 1; j++) 
      if (Mas[j] > Mas[j + 1])
        Swap(Mas[j], Mas[j + 1]);  
} /* End of 'BubbleSort' function */

/* Bubble sort (upgraded) function */
void BubbleSort1( int *Mas, int N )
{
  
} /* End of 'BubbleSort1' function */

/* Insertion sort function */
void InsertionSort( int *Mas, int N )
{

} /* End of 'InsertionSort' function */

/* Selection sort function */
void SelectionSort( int *Mas, int N )
{

} /* End of 'SelectionSort' function */   

/* END OF 'SORTN2.C' FILE */

