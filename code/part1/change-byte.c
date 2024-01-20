/**
Suppose we number the bytes in a w-bit word from 0 (least signiﬁcant) to w/8 − 1
(most signiﬁcant). Write code for the following C function, which will return an
unsigned value in which byte i of argument x has been replaced by byte b:
unsigned replace_byte (unsigned x, int i, unsigned char b);
Here are some examples showing how the function should work:
replace_byte(0x12345678, 2, 0xAB) --> 0x12AB5678
replace_byte(0x12345678, 0, 0xAB) --> 0x123456AB
**/

#include <stdio.h>

void change_byte(unsigned char* x, int pos, unsigned char byte){
  x[pos] = byte;
}
void show_bytes(unsigned char* start, int len) {
    int i;
    for (i = 0; i < len; i++)
    printf(" %x", start[i]);
    printf("\n");
}
int main(){
  int x = 0x15203050;
  /* show bytes is wrong order ? */
  show_bytes((unsigned char*) &x , sizeof(int));
  change_byte((unsigned char*) &x, 1, 0x00) ;
  show_bytes((unsigned char*) &x , sizeof(int));
}
