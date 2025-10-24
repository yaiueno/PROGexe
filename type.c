#include <float.h>
#include <limits.h>
#include <stdio.h>

int main()
{
    printf("double型の最大値:%g\n", DBL_MAX);
    printf("double型の最小値:%g\n", DBL_MIN);
    printf("double型の精度:%d\n", DBL_DIG);
    printf("int型の最大値:%d\n", INT_MAX);
    printf("int型の最大値:%d\n", INT_MIN);
    printf("float型の最大値:%g\n", FLT_MAX);
    printf("float型の最小値:%g\n", FLT_MIN);
    printf("long long intの最大値 %lld\n", LLONG_MAX);
    printf("long long intの最小値 %lld\n", LLONG_MIN);
    printf("65に充てられてる文字:%c\n", 65);
    printf("Aを表す整数:%d\n", 'A');
    printf("35に充てられている文字:%c\n", 35);
    printf("#+Aがあらわす整数:%d\n", '#' + 'A');
    printf("#+Aが 表す文字:%c\n", '#' + 'A');
    printf("100が表す文字:%c\n", 100);
    
    return 0;
}