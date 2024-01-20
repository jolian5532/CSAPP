```
#define M
/* Mystery number 1 */
#define N
/* Mystery number 2 */
int arith(int x, int y) {
int result = 0;
result = x*M + y/N; /* M and N are mystery numbers. */
return result;
}
```
x*M + y/N;

``` 
int optarith(int x, int y) {
int t = x;
x <<= 5; * 2^5 
x -= t;  - x 

if (y < 0) y += 7; # bias ?? 
y >>= 3; /* Arithmetic shift */  :8
return x+y;
}```

M = 31
N = 8