#include <stdio.h>
#include <time.h>
#include "matrix.h"

void fillMatrix(int matrix[][col],int row, int col){
	int i, j;
	//srand(time(0));

	for(i=0; i<row; i++){
		for (j=0; j<col; j++){
			matrix[i][j] = rand()%2;
		}
	}
}
void printMatrix(int matrix[][col], int row, int col){
	int i,j;
	for(i=0; i<row; i++){
		for (j=0; j<col; j++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
}
