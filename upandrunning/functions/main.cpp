#include <iostream>
#include <cstdio>

int step_functions(int x) {
    int result = 0;
    if (x < 0) {
        result = -1;
    } else if (x > 0) {
        result = 1;
    }
    return result;
}

int absolute_value(int x) {
    if (x >= 0) {
        return 1;
    } else {
        return -1;
    }
}

int sum(int num1, int num2) {
    return num1 + num2;
}
int main() {
//    int num1 = 42;
//    int value1 = step_functions(num1);
//    int num2 = 0;
//    int value2 = step_functions(num2);
//    int num3 = 324688;
//    int value3 = step_functions(num3);
//
//    printf("Num1: %d, Step: %d\n", num1, value1);
//    printf("Num2: %d, Step: %d\n", num2, value2);
//    printf("Num3: %d, Step: %d\n", num3, value3);

//    int my_num = 10;
//    printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num));
//
//    int my_num2 = 0;
//    printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num2));
//
//    int my_num3 = -1;
//    printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num3));
//
//    int my_num4 = 32000;
//    printf("The absolute value of %d is %d.\n", my_num, absolute_value(my_num4));

    int num1 = 0;
    int num2 = 44;
    printf("The sum value of %d + %d is %d.\n",num1, num2, sum(num1, num2));

    int num3 = 22;
    int num4 = 33;
    printf("The sum value of %d + %d is %d.\n",num3, num4, sum(num4, num3));

    return 0;
}
