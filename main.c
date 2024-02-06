#include <stdio.h>
#include <stdlib.h>

// void input(int*** array, int* y, int* x);
// void output(int*** array, int y, int x);

int main() {
    int n1=1;
    int n2=3;
    int* ptr1;
    int* ptr2;
    ptr1=&n1;
    ptr2=&n2;
    printf("%p",ptr1+3);
    return 0;
}