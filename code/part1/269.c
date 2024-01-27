/*Write code for a function with the following prototype:

* Do rotating left shift. Assume 0 <= n < w
* Examples when x = 0x12345678 and w = 32:
*
n=4 -> 0x23456781, n=20 -> 0x67812345

unsigned rotate_left(unsigned x, int n);
Your function should follow the bit-level integer coding rules (page 120). Be
careful of the case n = 0.*/

#include <stdio.h>
#include <limits.h>

void rotate_left(unsigned x, int n){

    printf("%x \n",(n << x) ^ ((n & INT_MIN >> x) >> ((sizeof(int)*8) - x)));
}

int main(){

    rotate_left(8,0x12345678);
    return 0;
}