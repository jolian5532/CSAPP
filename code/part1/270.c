/*
Write code for the function with the following prototype:
/*
* Return 1 when x can be represented as an n-bit, 2’s complement
* number; 0 otherwise
* Assume 1 <= n <= w

int fits_bits(int x, int n);
Your function should follow the bit-level integer coding rules (page 120).


*/

#include <stdio.h>
#include <limits.h>

void fits_bits(int x, int n){
    printf("%b \n",(x << (32 - n) >> (32 - n)) == x);
}

int main(){

    fits_bits(3,3);
    return 0;
}