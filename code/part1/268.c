/* Write code for a function with the following prototype:
/*
* Mask with least signficant n bits set to 1
* Examples: n = 6 --> 0x2F, n = 17 --> 0x1FFFF
* Assume 1 <= n <= w

int lower_one_mask(int n);
Your function should follow the bit-level integer coding rules (page 120). Be
careful of the case n = w. */

#include <stdio.h>
#include <limits.h>

lower_one_mask(int n){
    printf("%b \n",(2 << n-1)-1);
}
int main(){

    lower_one_mask(15);
    return 0;
}