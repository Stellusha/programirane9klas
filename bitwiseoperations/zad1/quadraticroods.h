#ifndef QUADRATICROODS_H_
#define QUADRATICROODS_H_

typedef struct{
    long double x1;
    long double x2;
    int norealroots;
} QadraticRoodsResult;

QadraticRoodsResult findroots(long double a, long double b, long double c);

#endif