#ifndef _STACK_H
#define _STACK_H

typedef struct STACK
{
    int top;
    int size;
    struct POINT *points;
}STACK;

struct STACK createStack(int size, struct POINT *points);

void printStack(struct STACK *stack);

int isEmptyStack(struct STACK *stack);

int isFullStack(struct STACK *stack);

void pushStack(struct POINT point, struct STACK *stack);

void popStack(struct STACK *stack);

struct POINT getTopStack(struct STACK *stack);

#endif
