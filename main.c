#include <stdio.h>
#include <time.h>
#include "matrix.h"
#include "point.h"
#include "stack.h"

int main(int argc, char const *argv[]) {
	row = 10;
	col = 10;
	int matrix[row][col];
	fillMatrix(matrix,row,col);
	printMatrix(matrix,row,col);


	//criando pontos
	struct POINT p0 = createPoint(1,1);
	struct POINT p1 = createPoint(2,3);
	struct POINT p2 = createPoint(3,4);
	struct POINT p3 = createPoint(5,6);

	//criando pilha
	int size = 3;
	struct POINT points[size];
	struct STACK s = createStack(size, points);

	//adicionando pontos pra pilha
	pushStack(p1, &s);
	pushStack(p2, &s);
	pushStack(p0, &s);

	//imprimindo pilha
	printStack(&s);
	return 0;
}
