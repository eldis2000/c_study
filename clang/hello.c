#include<stdio.h>
#define BUFSIZE 12
int main()
{
    printf("Hello termux\n");
    printf("%d\n", 28);
    printf("%d\n", 0734);
    printf("%d\n", 0xA1C);
    printf("%f\n", 1.234);
    printf("%f\n", 0.5E-2);

    printf("%c %c %c\n", 'T', 100, '5');

    printf("%s\n%s\n","Linux","C Programming");

    printf("%s\'s name\n", "Kim");

    char buf[BUFSIZE] = "Programming";
    printf("%s\n", buf);

    enum month {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC} mon;
    mon = JUL; /* JUL is 7 */
    printf("%d\n", mon);
    printf("%d\n", NOV);

}
