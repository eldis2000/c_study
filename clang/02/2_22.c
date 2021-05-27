#include <stdio.h>

void func1();
void func2();
int add(int a, int b);

int main()
{
    func1();
    func2();
    int a = 10;
    int b = 20;
    int result = add(a, b);
    printf("%d + %d = %d\n", a, b, result);
}
void func1()
{
    printf("function 1\n");
}
void func2()
{
    printf("function 2\n");
}
int add(int a, int b)
{
    return a + b;
}
