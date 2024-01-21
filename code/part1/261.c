/*
Write C expressions that evaluate to 1 when the following conditions are true, and
to 0 when they are false. Assume x is of type int.
A. Any bit of x equals 1.
B. Any bit of x equals 0.
C. Any bit in the least signiﬁcant byte of x equals 1.
D. Any bit in the most signiﬁcant byte of x equals 0.
Your code should follow the bit-level integer coding rules (page 120), with the
additional restriction that you may not use equality (==) or inequality (!=) tests.
*/

#include <stdio.h>

int expr(int x){
  /* masking */
  return x&0xffffffff && ~(x|0x00000000) && x & 0x000000ff && ~(x|0x00ffffff);
}
int main(){

  printf("%d\n",expr(0xfe000050));
  return 0;
  
}
