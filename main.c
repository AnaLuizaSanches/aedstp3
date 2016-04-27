#include <stdio.h>
#include <time.h>
#include "point.h"
#include "stack.h"
#include "matrix.h"

int main(int argc, char const *argv[]) {
	int n = 10; // define o tamanho da matriz quadrada
	row = n;
	col = n;
	int matrix[row][col]; // cria a matriz
	fillMatrix(matrix); // preenche a matriz
	printMatrix(matrix);

	int size = n*n; // define tamanho máximo da pilha
	struct POINT points[size]; // cria vetor de ponto
	struct STACK stack = createStack(size, points); // cria pilha

	struct POINT p0 = createPoint(0,0); // ponto inicial
	struct POINT pfim = createPoint(n-1,n-1); // ponto final
	struct POINT null = createPoint(-1,-1); //ponto nulo
	struct POINT p; // ponto auxiliar usado no loop

	p = p0; // inicia na primeira posicao
	pushStack(p0,&stack); // empilha primeira posicao (p0)
	visitMatrix(p0,matrix); // marca a primeira posicao como visitada(p0)
  // enquanto não for o ponto final e for diferente de nulo
	while( (!comparePoint(p,pfim)) &&  (!comparePoint(p,null)) ){
		p = getPath(p,matrix); //proximo ponto a ser visitado, se nulo desempilha
		if(!comparePoint(p, null)){
			visitMatrix(p, matrix);
			pushStack(p, &stack);
		}
		else{
			popStack(&stack);
			p = getTopStack(&stack);
		}
		/* se todos os elementos sao desempilhados (volta-se ao ponto inicial)
		 entao nao existe caminho ate o fim */
		if(comparePoint(p,p0)){
			printf("caminho não encontrado\n\n");
			break;
		}
	}
	/*imprime matriz (labirinto) e pilha (pontos do caminho)*/
	printMatrix(matrix);
	printStack(&stack);
	return 0;
}
