#include <stdio.h>
#include <time.h>
#include "matrix.h"
#include "point.h"

int main(int argc, char const *argv[]) {
	row = 10;
	col = 10;
	int matrix[row][col];
	fillMatrix(matrix,row,col);
	printMatrix(matrix,row,col);
	struct POINT p = createPoint(2,3);
	printPoint(p);
	return 0;
}
