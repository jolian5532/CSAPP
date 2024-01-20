#include <stdio.h>

int is_littel_endian() {
    int x = 1;
    unsigned char* p = (unsigned char*) &x;
    return p[0];
}
int main(){
    if(is_littel_endian()){
        printf("yes");
    }
    
}