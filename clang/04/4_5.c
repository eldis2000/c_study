#include<stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;

    ptr = arr; // ptr = &arr[0];
    for(i=0; i<5; i++) {
        printf("%d\n", *ptr++);
    }


    char *str;
    str = "Hello";
    for(; *str; str++)
        printf("%s\n", str);
}
