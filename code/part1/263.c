/* Fill in code for the following C functions. Function srl performs a logical right
shift using an arithmetic right shift (given by value xsra), followed by other oper-
ations not including right shifts or division. Function sra performs an arithmetic
right shift using a logical right shift (given by value xsrl), followed by other
operations not including right shifts or division. You may use the computation
8*sizeof(int) to determine w, the number of bits in data type int. The shift
amount k can range from 0 to w − 1.*/


#include <stdio.h>
#include <limits.h>

unsigned srl(unsigned x, int k) {
/* Perform shift arithmetically */
  unsigned xsra = (int) x >> k;
  /* pow(2,k) - 1 would've also worked */
  printf("%b\n",( ~(-1 << (8*sizeof(int) - k))) & xsra);
}


int sra(int x, int k) {
     
/* Perform shift logically */
  int xsrl = (unsigned) x >> k;
  /* this wasn't easy but still just masking */
  printf("%b\n", ((-1 << (8*sizeof(int) - k)) ^ xsrl) & (~(-1 << (8*sizeof(int) -k))) | (INT_MIN&x)>>k);
}

int main(){
  srl(-32,2);
  sra(-32,2);
  return 0;
}
