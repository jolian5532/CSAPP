/** Write a C expression that will yield a word consisting of the least signiﬁcant
byte of x, and the remaining bytes of y. For operands x = 0x89ABCDEF and y =
0x76543210, this would give 0x765432EF.
**/

#include <stdio.h>


void addthem(unsigned char* xstart , int xlen,unsigned char* ystart , int ylen){
    unsigned char leastx = xstart[xlen -1];
    unsigned char added[ylen];
    for (size_t i = 0; i < ylen - 1; i++)
    {
        printf(" %x", ystart[i]);
    }
    printf(" %x", leastx);
}

int main(){
    int x = 0xff000000;
    int y = 0x65123151;
    /* has to be reversed output : 0x513112ff*/
    addthem((unsigned char*) &x,sizeof(int),(unsigned char*)&y,sizeof(int));
;
}