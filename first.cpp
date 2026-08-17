#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num;

    printf("请输入一个整数：");
    if (scanf("%d", &num) != 1) {
        printf("输入无效，程序退出\n");
        return 1;
    }

    if (num % 2 == 0) {
        printf("%d 是偶数\n", num);
    }
    else {
        printf("%d 是奇数\n", num);
    }

    return 0;
}

