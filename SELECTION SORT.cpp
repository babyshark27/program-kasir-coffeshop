#include <stdio.h>
#define n 7
main ()
{
	int A[n] = {15, 10, 7, 22, 17, 5, 12};
	int X,I,K,J;
	
	printf ("sebelum di sort\n");
	for(I=0; I<=n-1; I++)
	      printf(" %d ",A[I]);
	 printf("\n");
	 K = 0;
	 while (K <= n-2)
	 { J=K; I = K+1;
	     while (I<= n-1)
           { if (A[I] < A[J])
	    	     J = I;
		    I++;
	      }
	
	    X = A[J];
	    A[J] = A[K];
	    A[K] = X;
	
	  K++;
     }
   printf("sesudah di sort \n");
   for (I=0; I<=n-1; I++)
   printf(" %d ", A[I]);
}