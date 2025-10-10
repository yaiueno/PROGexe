/**文字を表記するためのプログラム**/
#include <stdio.h>
int main(){
    
    //thisisintegerを初期化します
    int thisisinteger = 8;
    printf("%d is integer.\n", thisisinteger);//printf関数は%dなどの数に応じて引数の数が変動するがどういう仕組で動いているのだろうか。動的に関数を定義する仕組みをかけるのかもしれない。
    thisisinteger = thisisinteger / 8;
    printf("%d is integer too.\n", thisisinteger);
    printf("%p",&thisisinteger);
    return 200;
    
}