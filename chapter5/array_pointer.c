#include <stdio.h>

int main () 
{
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int *pa;

    pa = &a[0];
    printf("%d\n", *pa);

    // ポインタをincrすると次の要素のアドレスを指す
    pa++;
    printf("%d\n", *pa);

    // 配列名は0番目の要素のアドレス
    if ( a == &a[0] ) {
        printf("%d\n", *a);
    }

    // 配列の添字
    if ( a[0+2] = *(a+2) ) {
        printf("%d\n", a[0+2]);
    }
}

