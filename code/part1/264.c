/*
  Write code to implement the following function:
 Return 1 when any odd bit of x equals 1; 0 otherwise.
Assume w=32.
int any_odd_one(unsigned x);
Your function should follow the bit-level integer coding rules (page 120), except
that you may assume that data type int has w = 32 bits.
*/

#include <stdio.h>

int any_odd_one(unsigned x){
  /* is && with 1 allowed ? */
  /* 1431655765 = 1010101010101010101010101010101 */
  return x&1431655765 && 1;
}
int main(){
  printf("%d\n",any_odd_one(4));
}
