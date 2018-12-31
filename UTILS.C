/* Sorting algorithms programm
 * Utilities function file
 * Protected by GNU GPL license v3 */

#include <stdlib.h>
#include <time.h>

#include "SORT.H"

/* Integer swap function */
void Swap( int *X, int *Y )
{
  int *tmp;

  tmp = *X;
  *X = *Y;
  *Y = tmp;
} /* End of 'Swap' function */

/* Check sort function */
int CheckSort( int *Mas, int N )
{
  int i;

  for (i = 0; i < N - 1; i++)
    if (Mas[i] > Mas[i + 1])
      /* Massive isn't sorted */
      return 0;

  /* Massive is sorted */
  return 1;
} /* End of 'CheckSort' function */

/* Massive fill with increasing values function */
void FillIncr( int *Mas, int N )
{
  int i, x;

  srand(clock());

  x = rand();

  Mas[0] = x;

  for (i = 1; i < N; i++)
    Mas[i] = Mas[i - 1] + x; 
} /* End of 'FillIncr' function */

/* Massive fill with decreasing values function */
void FillDecr( int *Mas, int N )
{
  int i, x;
 
  srand(clock());

  x = rand();
 
  Mas[N - 1] = x;
 
  for (i = N - 2; i >= 0; i--)
    Mas[i] = Mas[i + 1] + x;
} /* End of 'FillDecr' function */

/* Massive fill with random values function */
void FillRand( int *Mas, int N )
{
  int i;

  srand(clock());

  for (i = 0; i < N; i++)
    Mas[i] = rand();  
} /* End of 'FillRand' function */

/* Massive fill with equal vales function */
void FillEq( int *Mas, int N )
{
  int i, x;

  srand(clock());

  x = rand();

  for (i = 0; i < N; i++)
    Mas[i] = x;  
} /* End of 'FillEq' function */

/* Massive fill with mostly sorted values */
void FillMostly( int *Mas, int N )
{ 
  int i;

  srand(clock());

  for (i = 0; i < N; i++)
    if (rand() % 5 == 0)
      Mas[i] = rand();
    else
      Mas[i] = i;  
} /* End of 'FillMostly' function */

/* END OF 'UTILS.C' FILE */

