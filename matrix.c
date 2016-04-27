#include <stdio.h>
#include <time.h>
#include "point.h"
#include "matrix.h"

void fillMatrix(int matrix[][col]){
	int i, j;
	srand(time(0));

	for(i=0; i<row; i++){
		for (j=0; j<col; j++){
			int r = rand()%100;
			if(r <= 80)
				matrix[i][j] = 1;
			else
				matrix[i][j] = 0;
		}
	}
	matrix[0][0] = 1;
}

void printMatrix(int matrix[][col]){
	int i,j;
	for(i=0; i<row; i++){
		for (j=0; j<col; j++){
			if(matrix[i][j] == 2){
				printf("  ");
			}else{
				printf("%d ",matrix[i][j]);
			}
		}
		printf("\n");
	}
	printf("\n");
}

void visitMatrix(struct POINT point,int matrix[][col]){
	matrix[point.x][point.y] = 2;
}

int isVisited(struct POINT point, int matrix[][col]){
	return matrix[point.x][point.y] == 2;
}

struct POINT getPath(struct POINT point, int matrix[][col]){
	struct POINT p = createPoint(-1, -1);
	if(point.x < col && matrix[point.x+1][point.y] == 1){
		p =  createPoint(point.x+1, point.y);
	}
	else if(point.y < row && matrix[point.x][point.y+1] == 1){
		p = createPoint(point.x,point.y+1);
	}
	else if(point.x>0 && matrix[point.x-1][point.y] == 1){
		p = createPoint(point.x-1,point.y);
	}
	else if(point.y>0 && matrix[point.x][point.y-1] == 1){
		p = createPoint(point.x,point.y-1);
	}
	return p;
}
