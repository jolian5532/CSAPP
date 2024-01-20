#include <stdio.h>

int div16(int x){
    return x >> 4;
}

int main(){
    printf("%d",div16(16*10));
    return 0;
}