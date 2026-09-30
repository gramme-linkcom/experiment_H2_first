#include <stdio.h>

int main(void)
{
    double num = 0.0;
    const double ADD_NUM = 0.5;
    const double TARGET = 500.0;

    for (int i = 0; i < 1000; i++) {
        num += ADD_NUM;
    }

    printf("sum = %.20g\n", num);

    int judge_result = 0;
    if (num == TARGET) {
        judge_result = 1;
    }

    printf("num == 500.0: %s\n", judge_result ? "true" : "false");

    return 0;
}
