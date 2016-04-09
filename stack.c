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
    int i;
    for (i = 0; i < (*stack).top; i++) {
        printPoint((*stack).points[i]);
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
        (*stack).top++;
        (*stack).points[(*stack).top]  = point;
    }
}

void popStack(struct STACK *stack){
    if(!isEmptyStack(stack)){
        (*stack).top--;
    }
}

struct POINT getTopPointStack(struct STACK *stack){
    return (*stack).points[(*stack).top];
}
