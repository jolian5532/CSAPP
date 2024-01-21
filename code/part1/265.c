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


*/
#include <stdio.h>

int odd_ones(unsigned x){
  /* TODO */
  int mask = 15;
  int result = 0;
  int odd = !(!((x&mask)%3) || !((x&mask)%5)) ;
  x = x >> 4;
  result = result + odd;
  odd = !(!((x&mask)%3) || !((x&mask)%5)) ;
  x = x >> 4;
  result = result + odd;
  odd = !(!((x&mask)%3) || !((x&mask)%5)) ;
  x = x >> 4;
  result = result + odd;
  odd = !(!((x&mask)%3) || !((x&mask)%5)) ;
  x = x >> 4;
  result = result + odd;
  odd = !(!((x&mask)%3) || !((x&mask)%5)) ;
  x = x >> 4;
  result = result + odd;
  odd = !(!((x&mask)%3) || !((x&mask)%5)) ;
  x = x >> 4;
  result = result + odd;
  odd = !(!((x&mask)%3) || !((x&mask)%5)) ;
  x = x >> 4;
  result = result + odd;
  odd = !(!((x&mask)%3) || !((x&mask)%5)) ;
  x = x >> 4;
  result = result + odd;
  printf("%d\n",result);
}


int main(){
  
  odd_ones(1<<4+15);
  odd_ones(2<<4);
  odd_ones(4<<4);
  odd_ones(8<<4);
  odd_ones(7<<4);
  odd_ones(14<<4);
  odd_ones(13<<4);
  odd_ones(11<<4);
  printf("none odd\n");
  odd_ones(3<<4);
  odd_ones(6<<4);
  odd_ones(9<<4);
  odd_ones(12<<4);
  odd_ones(5<<4);
  odd_ones(10<<4);
  odd_ones(15<<4);
  
  odd_ones(124);
}
