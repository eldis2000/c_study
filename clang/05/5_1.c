#include<stdio.h>

void swap_val(int x, int y);
void swap_addr(int *x, int *y);
int main() {
    int a = 7;
    int b = 11;

    printf("a:%d, b:%d \n", a, b);

    swap_val(a, b);
    printf("swap_val : %d %d\n", a, b);

    swap_addr(&a, &b);
    printf("swap_addr : %d %d\n", a, b);

}
void swap_val(int x, int y) {
    int temp;
    temp = x;
    x = y;
    y = temp;
}
void swap_addr(int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
