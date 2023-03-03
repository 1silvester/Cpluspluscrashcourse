#include <iostream>
#include <cstdio>


int main() {
    int gettysburg{};
    int* gettysburg_address = &gettysburg;
    printf("Value at gettysburg_Address: %d\n", *gettysburg_address);
    printf("Gettysburg Address: %p\n", gettysburg_address);
    *gettysburg_address = 173254;
    printf("Value at gettysburg_Address: %d\n", *gettysburg_address);
    printf("Gettysburg Address: %p\n", gettysburg_address);
    return 0;
}
