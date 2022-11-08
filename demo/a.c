#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 12;
    printf("八进制 --> %o\n", a);
    printf("十六进制 --> %X\n", a);
    printf("十进制 --> %d\n", a);
    char s[10];
    itoa(a, s,2);
    printf("二进制 --> %s\n", s);
    itoa(a, s, 3);
    printf("三进制 --> %s\n", s);




    
    return 0;
}




















