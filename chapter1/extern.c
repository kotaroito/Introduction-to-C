#include <stdio.h>

int  n; 
void change_n(void);

main()
{
    int n = 1;
    printf("n is %d\n", n); // ローカル変数

    change_n();

    printf("n is %d\n", n); // ローカル変数
}

void change_n(void) {
    extern int n; // 同一ソース内で定義されてるので明示的にextern宣言しなくてもOK
    n = 2;        // グローバル変数
    printf("n is %d\n", n);
}

