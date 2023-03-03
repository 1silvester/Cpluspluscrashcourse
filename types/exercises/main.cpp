#include <iostream>

enum class Operation {
    Add,
    Subtract,
    Multiply,
    Divide
};

struct Calculator{
    Calculator(){
        operatorChar  = '+';
    }

    Calculator(Operation operation1) {
        if (operation1 == Operation::Add){
            operatorChar = '+';
        }
        else if (operation1 == Operation::Subtract)
        {
            operatorChar = '-';
        }
        else if (operation1 == Operation::Divide) {
            operatorChar = '/';
        }
        else if (operation1 == Operation::Multiply){
            operatorChar = '*';
        }
    }

    int calculate(int a, int b) {
        if(operatorChar == '+'){
            printf("You are calculating the addition of a: %d and b: %d result is: %d\n", a , b , a + b);
        } else if (operatorChar == '-'){
            printf("You are calculating the subtraction of a: %d and b: %d result is: %d\n", a , b , a - b);
        } else if (operatorChar == '/'){
            printf("You are calculating the division of a: %d and b: %d result is: %d\n", a , b , a / b);
        } else if (operatorChar == '*') {
            printf("You are calculating the multiplication of a: %d and b: %d result is: %d\n", a , b , a * b);
        } else {
            printf("You are calculating the addition of a: %d and b: %d result is: %d\n", a , b , a + b);
        }

    };

    private:
        char operatorChar;
};
int main() {
    Calculator calculator1;
    calculator1.calculate(3,1);
    Calculator calculator2{Operation::Multiply};
    calculator2.calculate(3, 2);
    Calculator calculator3 = {Operation::Divide};
    calculator3.calculate(10, 2);
    return 0;
}
