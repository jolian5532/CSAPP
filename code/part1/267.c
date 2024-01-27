
/* 


You are given the task of writing a procedure int_size_is_32() that yields 1
when run on a machine for which an int is 32 bits, and yields 0 otherwise. You are
not allowed to use the sizeof operator. Here is a ﬁrst attempt:


int bad_int_size_is_32() {
/* Set most significant bit (msb) of 32-bit machine 
int set_msb = 1 << 31;
/* Shift past msb of 32-bit word 
int beyond_msb = 1 << 32;
/* set_msb is nonzero when word size >= 32
beyond_msb is zero when word size <= 32
return set_msb && !beyond_msb;





When compiled and run on a 32-bit SUN SPARC, however, this procedure returns
0. The following compiler message gives us an indication of the problem:
warning: left shift count >= width of type
A. In what way does our code fail to comply with the C standard?
B. Modify the code to run properly on any machine for which data type int is
at least 32 bits.
C. Modify the code t
*/









// b
// beyond 1<<31


// c
// msb 1 << 15 << 15 << 1;
//beyond 1 << 15 << 16; 