/* Write a function int_shifts_are_arithmetic() that yields 1 when run on a
machine that uses arithmetic right shifts for int’s, and 0 otherwise. Your code
should work on a machine with any word size. Test your code on several machines.*/

#include <stdio.h>
#include <limits.h>

int int_shifts_are_arithmetic(){
  /* masking again */
  return ((INT_MIN>>8)&0xff000000) && 1;
}

int main(){
  printf("%x\n",int_shifts_are_arithmetic());
  return 0;
}
