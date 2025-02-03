#include <stdio.h>
#include <limits.h>
int main() { int x = 10; int *ptr = &x; if (*ptr + 20 > INT_MAX) { printf("Integer Overflow! "); } else { *ptr += 20; printf("%d", x); } return 0;} 