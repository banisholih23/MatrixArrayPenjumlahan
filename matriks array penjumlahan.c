#include <stdio.h>
int main() 
{
	int matrix1 [2][2] ;
	matrix1 [0][0] = 1 ;
	matrix1 [0][1] = 3 ;
	matrix1 [1][0] = 5 ;
	matrix1 [1][1] = 7 ;
	
	int matrix2 [2][2] ;
	matrix2 [0][0] = 2 ;
	matrix2 [0][1] = 4 ;
	matrix2 [1][0] = 6 ;
	matrix2 [1][1] = 8 ;
	
	int matrixHasil [2][2] ;
	
	int i = 0 ;
	int j ;
	for (i=0 ; i<=2 ; i++) {
		for (j=0 ; j<=2 ; j++) {
			matrixHasil [i][j] = matrix1 [i][j] + matrix2 [i][j] ;
			printf (" Elemen[%d][%d] = " , i, j ); 
			scanf (" %d ", &matrixHasil[i][j]);
		}
	}
	getch();
	return 0;
}
