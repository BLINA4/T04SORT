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

/* Quick sort function */
void QuickSort( int *Mas, int N )
{
  int x = Mas[N / 2], b, e;

  b = 0;
  e = N - 1;

  if (N < 2)
    return;

  while (b <= e)
  {
    while (Mas[b] < x)
      b++;
    while (Mas[e] > x)
      e--;
    if (b <= e)
      Swap(&Mas[b++], &Mas[e--]);
  }

  QuickSort(Mas, e + 1);
  QuickSort(Mas + b, N - b);
} /* End of 'QuickSort' function */

/* Heap correction function */
void HeapCorrection( int *Mas, int N, int i )
{
  int l = 2 * i + 1, r = 2 * i + 2, big = i;

  if (l < N && Mas[i] < Mas[l])
    big = l;

  if (r < N && Mas[big] < Mas[r])
    big = r;

  if (i != big)
  {
    Swap(&Mas[i], &Mas[big]);
    HeapCorrection(Mas, N, big);
  }    
} /* End of 'HeapCorrection' fucntion */

/* Head sort function */
void HeapSort( int *Mas, int N )
{
  int i;

  for (i = N / 2 - 1; i >= 0; i--)
    HeapCorrection(Mas, N, i);

  for (i = N - 1; i >= 0; i--)
  {
    Swap(&Mas[0], &Mas[i]);  
    
    HeapCorrection(Mas, i, 0);
  }
} /* End of 'HeapSort' function */

/* END OF 'SORTLN.C' FILE */

