#include <stdio.h>
#include "stack.h"
#include "point.h"

struct STACK createStack(int size, struct POINT *points){
    struct STACK stack;
    stack.size = size;
    stack.top = 0;
    stack.points = points;
    return stack;
}

void printStack(struct STACK *stack){
    if(!isEmptyStack(stack)){
        int i;
        for (i = 0; i < (*stack).top; i++) {
            printPoint((*stack).points[i]);
        }
        printf("\n");
    }
}

int isEmptyStack(struct STACK *stack){
    return (*stack).top == 0;
}

int isFullStack(struct STACK *stack){
    return (*stack).top == (*stack).size;
}

void pushStack(struct POINT point, struct STACK *stack){
    if(!isFullStack(stack)){
        (*stack).points[(*stack).top]  = point;
	(*stack).top++;
    }
}

void popStack(struct STACK *stack){
    if(!isEmptyStack(stack)){
        (*stack).top--;
    }
}

struct POINT getTopStack(struct STACK *stack){
    struct POINT point = createPoint(-1,-1);
    if(!isEmptyStack(stack))
        point = (*stack).points[(*stack).top-1];

    return point;
}
