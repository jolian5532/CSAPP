/**

Write code to implement the following function:
Return 1 when x contains an odd number of 1s; 0 otherwise.
Assume w=32. 
int odd_ones(unsigned x);
Your function should follow the bit-level integer coding rules (page 120), except
that you may assume that data type int has w = 32 bits.
Your code should contain a total of at most 12 arithmetic, bit-wise, and logical
operations.

**/

/*
0001 1 = odd
0010 2 = odd
0100 4 = odd
1000 8 = odd
--------
0111 7 = odd 
1110 14 = odd 
1101 13 = odd
1011 11 = odd
------------
0011 3 
0110 6 
1001 9 
1100 12

0101 5
1010 10
1111 15
SMH!! was gonna do recursion
 

*/
#include <stdio.h>
#include <assert.h>

int odd_ones(unsigned x){
  x = x  ^(x >> 16);
  printf("%b\n",x);
  return  0;  
}


int main(){
  //printf("%d\n",odd_ones(0b0100000100000101)); // odd
  //1100000100000101
  odd_ones(0b10000000000000011000000000000001);
  //odd_ones(0x10101011);
  //odd_ones(0x01010101);
  //assert(odd_ones(0x10101011));
  //assert(!odd_ones(0x01010101));
  
}
