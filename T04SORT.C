/* Sorting algorithms programm
 * Main programm file
 * Protected by GNU GPL license v3 */

#include <stdio.h>
#include <time.h>

#include "SORT.H"

/* Main programm function */
void main( void )
{
  int si, fi;
  long t;

  void (*Sort[])(int *Mas, int N) =
  {
    BubbleSort, BubbleSort1, InsertionSort, SelectionSort, MergeSort, QuickSort, HeapSort  
  };

  void (*Fill[])(int *Mas, int N) =
  { 
    FillIncr, FillDecr, FillRand, FillEq, FillMostly
  };

  char *SortName[] = 
  {
    "BubbleSort", "BubbleSort1", "InsertionSort", "SelectionSort", "MergeSort", "QuickSort", "HeapSort"
  };

  static int Mas[MAX];

  for (si = 0; si < sizeof(Sort) / sizeof(Sort[0]); si++)
  {
    printf("Sort: %s\n", SortName[si]);
    
    for (fi = 0; fi < sizeof(Fill) / sizeof(Fill[0]); fi++)
    {
      Fill[fi](Mas, MAX);
      t = clock();
      Sort[si](Mas, MAX);
      t = clock() - t;
      if (CheckSort(Mas, MAX))
        printf(" %10.5f ", t / (double)CLOCKS_PER_SEC);
      else 
        printf(" Fail ");
    }  
    printf("\n");
  }    
} /* End of 'main' function */

/* END OF 'T04SORT.C' FILE */

