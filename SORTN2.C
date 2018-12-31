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
        Swap(&Mas[j], &Mas[j + 1]);  
} /* End of 'BubbleSort' function */

/* Bubble sort (upgraded) function */
void BubbleSort1( int *Mas, int N )
{
  int i, last = N - 2, last_changed;

  do
  { 
    last_changed = 0;

    for (i = 0; i <= last; i++)
      if (Mas[i] > Mas[i + 1])
        Swap(&Mas[i], &Mas[i + 1]), last_changed = i;

    last = last_changed - 1;
  } while (last >= 0);
} /* End of 'BubbleSort1' function */

/* Insertion sort function */
void InsertionSort( int *Mas, int N )
{
  int x, i, j;

  for (i = 1; i < N; i++)
  {    
    x = Mas[i];
    j = i - 1;

    while (Mas[j] > x && j >= 0)
      Mas[j + 1] = Mas[j], j--;
    Mas[j + 1] = x;
  } 
} /* End of 'InsertionSort' function */

/* Selection sort function */
void SelectionSort( int *Mas, int N )
{
  int i, j, min;

  for (i = 0; i < N - 1; i++)
  {
    for (j = i + 1, min = i; j < N; j++)
      if (Mas[j] < Mas[min])
        min = j;
    Swap(&Mas[min], &Mas[i]);
  } 
} /* End of 'SelectionSort' function */   

/* END OF 'SORTN2.C' FILE */

