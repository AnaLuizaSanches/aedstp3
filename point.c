#include "point.h"
#include <stdio.h>

struct POINT createPoint(int x, int y){
    struct POINT point;
    point.x = x;
    point.y = y;
    return point;
}

int comparePoint(struct POINT point1, struct POINT point2){
    return (point1.x == point2.x && point1.y == point2.y);
}

void printPoint(struct POINT point){
    printf("(%d, %d) ", point.x+1, point.y+1);
}
