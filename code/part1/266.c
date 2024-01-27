/* Write code to implement the following function:
/*
* Generate mask indicating leftmost 1 in x. Assume w=32.
* For example 0xFF00 -> 0x8000, and 0x6600 --> 0x4000.
* If x = 0, then return 0.
int leftmost_one(unsigned x);
Your function should follow the bit-level integer coding rules (page 120), except
that you may assume that data type int has w = 32 bits.
Your code should contain a total of at most 15 arithmetic, bit-wise, and logical
operations.
Hint: First transform x into a bit vector of the form [0 . . . 011 . . . 1].
*/

/*
0101
1000

32 
16
8
4
2
1
*/


#include <stdio.h>

leftmost_one(unsigned int x){
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    x = x & ~(x >> 1);
    printf("%b\n",x);
};

int main(){
    leftmost_one(0b0110000000000000);
    leftmost_one(0b0101);
    leftmost_one(0b0011);
    return 0;
}