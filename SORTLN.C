/* Sorting algorithms programm
  * log(N) * N Sort functions file 
  * Protected by GNU GPL v3 license */

#include <stdlib.h>

#include "SORT.H"

void Merge( int *Mas, int N, int M )
{
  int i, j, k, *x = malloc(N * sizeof (int));
    
  for (i = 0, j = M, k = 0; k < N; k++) 
  {
    if ((x[k] = j) == N)
      Mas[i++];
    else
      if (i == M)  
        Mas[j++];
      else
        if (Mas[j] < Mas[i])
          Mas[j++];
        else
          Mas[i++];  
  }
 
  for (i = 0; i < N; i++) 
  {
    Mas[i] = x[i];
  }

  free(x);  
}  

/* Merge sort function */
void MergeSort( int *Mas, int N )
{
  int i, j, k, M; 

  if (N == 1)
    return;

  M = N / 2;

  MergeSort(Mas, M);
  MergeSort(Mas + M, N - M);

  Merge(Mas, N, M);
} /* End of 'MergeSort' function */

/* END OF 'SORTLN.C' FILE */

