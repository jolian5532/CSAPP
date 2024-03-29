/* 

You are given the task of writing a function that will copy an integer val into a
buffer buf, but it should do so only if enough space is available in the buffer.
Here is the code you write:
/* Copy integer into buffer if space is available
/* WARNING: The following code is buggy 


void copy_int(int val, void *buf, int maxbytes) {
if (maxbytes-sizeof(val) >= 0)
memcpy(buf, (void *) &val, sizeof(val));
}

This code makes use of the library function memcpy. Although its use is a bit
artiﬁcial here, where we simply want to copy an int, it illustrates an approach
commonly used to copy larger data structures.
You carefully test the code and discover that it always copies the value to the
buffer, even when maxbytes is too small.
A. Explain why the conditional test in the code always succeeds. Hint: The
sizeof operator returns a value of type size_t.
B. Show how you can rewrite the conditional test to make it work properly


A. casting to an unsigned int (size_t)
B. cast sizeof result to int 
*/

#include <stdio.h>
#include <string.h>

void copy_int(int val, void *buf, int maxbytes) {
    if (maxbytes - (int)sizeof(val) >= 0){
        memcpy(buf, (void *) &val, sizeof(val));
    }
}

int main(){
    int x=0;
    copy_int(277,&x,1);
    printf("hello world! %d\n",x);

}