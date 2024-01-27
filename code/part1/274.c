/*

int tsub_ok(int x, int y);
Write a function with the following prototype:
/* Determine whether arguments can be subtracted without overflow
This function should return 1 if the computation x − y does not overﬂow.
 */

#include <stdio.h>
#include <limits.h>

int tsub_ok(int x, int y){
    int pos = x > 0 && y > 0 && x+y <= 0;
    int neg = x < 0 && y < 0 && x+y > 0;
    return (!pos && !neg);
}

int main(){
    tsub_ok(INT_MAX,+7);
    printf("hello world! %d\n",tsub_ok(INT_MAX,0));
    return 0;
}