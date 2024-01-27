/* 

Write code for a function with the following prototype:
/* Addition that saturates to TMin or TMax 
int saturating_add(int x, int y);
Instead of overﬂowing the way normal two’s-complement addition does, sat-
urating addition returns TMax when there would be positive overﬂow, and TMin
when there would be negative overﬂow. Saturating arithmetic is commonly used
in programs that perform digital signal processing.
Your function should follow the bit-level integer coding rules (page 120).


*/

#include <stdio.h>
#include <limits.h>

int saturating_add(int x, int y){
    int sum = x + y;
    int pos = x > 0 && y > 0 && x+y <= 0;
    int neg = x < 0 && y < 0 && x+y > 0;
    // lazy boyz 
    ((!pos&&!neg) || pos && (sum = INT_MAX)|| neg && (sum = INT_MIN));
    printf("%d \n",sum);
}

int main(){
    saturating_add(INT_MAX,+7);
    printf("hello world!\n");
    return 0;
}