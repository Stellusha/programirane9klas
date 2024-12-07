#include "safeint.h"
#include <limits.h>
#include <stdlib.h>

SafeResult safeadd(int a, int b){
    SafeResult res;
    if ((b > 0 && a > INT_MAX - b) || (b < 0 && a < INT_MIN - b)) {
        res.errorflag = 1;
    } 
    else
    {
        res.errorflag = 0;
        res.value = a + b;
    }
    return res;
}

SafeResult safesubtract(int a, int b){
    SafeResult res;
    if ((b > 0 && a < INT_MIN + b) || (b < 0 && a > INT_MAX + b)){
        res.errorflag = 1;
    }
    else
    {
        res.errorflag = 0;
        res.value = a - b;
    }
    return res;
}

SafeResult safemultiply(int a, int b){
    SafeResult res;
    if (a > 0 && b > 0 && a> INT_MAX /b){
        res.errorflag = 1;
    }
    else if (a < 0 && b < 0 && a < INT_MAX /b)
    {
        res.errorflag = 1;
    }
    else if (a > 0 && b < 0 && a < INT_MIN /b)
    {
        res.errorflag = 1;
    }
    else if (a < 0 && b > 0 && a < INT_MIN /b)
    {
        res.errorflag = 1;
    }
    else
    {
        res.errorflag = 0;
        res.value = a * b;
    }
    return res;
}

SafeResult safedivide(int a, int b) {
    SafeResult res;
    if(b == 0 || (a == INT_MIN && b == -1)){
        res.errorflag = 1;
    }
    else
    {
        res.errorflag = 0;
        res.value = a / b;
    }
    return res;
}

SafeResult safestrtoint(const char *str){
    char *end;
    SafeResult res;
    long val = strtol(str, &end, 10);
    if (val > INT_MAX || val < INT_MIN || *end != '\0'){
        res.errorflag = 1;
    } 
    else
    {
        res.errorflag = 0;
        res.value - (int)val;
    }
    return res;
}


