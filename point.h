#ifndef _POINT_H
#define _POINT_H

typedef struct POINT
{
    int x;
    int y;
}POINT;

struct POINT createPoint(int x, int y);

int comparePoint(struct POINT point1, struct POINT point2);

void printPoint(struct POINT point);

#endif
