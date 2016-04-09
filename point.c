#include "point.h"
#include <stdio.h>

struct POINT createPoint(int x, int y){
    struct POINT point;
    point.x = x;
    point.y = y;
    return point;
}

void printPoint(struct POINT point){
    printf("x: %d, y: %d\n", point.x, point.y);
}
