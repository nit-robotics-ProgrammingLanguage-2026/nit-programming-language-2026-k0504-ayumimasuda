#include <stdio.h>

int main(void)
{
    int input_number;
    int is_ok;

    scanf("%d", &input_number);

    /* 仕様: 0以上15未満の整数のうち、10と11を除いたものが OK */
    is_ok = (input_number >= 0)
         && (input_number < 10 || input_number >= 12)
         && (input_number < 15);

    /* OKなら "OK"、そうでなければ "NG" を表示する */
    if (is_ok)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }

    return 0;
}
