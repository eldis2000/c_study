#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <math.h>
//======================
// how to comple : 
// gcc donut.c -o donut -lm
//======================
double sin(), cos();
int main() {
    float A=0, B=0;
    float i, j;
    float z[1760];
    int k;
    char b[1760];
    printf("\x1b[2J]");
    for(;;) {
        memset(b, 32, 1760);
        memset(z, 0, 7040);
        for(j=0; j<6.28; j+=0.07) {
            for(i=0; i<6.28; i+=0.02) {
                float sini=sin(i),
                      cosj=cos(j),
                      sinA=sin(A),
                      sinj=sin(j),
                      cosA=cos(A),
                      cosj2=cosj+2,
                      mess=1/(sini*sinA+sinj*cosA+5),
                      cosi=cos(i),
                      cosB=cos(B),
                      sinB=sin(B),
                      t=sini*cosj2*cosA-sinj* sinA;
                int x=40+30*mess*(cosi*cosj2*cosB-t*sinB),
                    y=12+15*mess*(cosi*cosj2*sinB +t*cosB),
                    o=x+80*y,
                    N=8*((sinj*sinA-sini*cosj*cosA)*cosB-sini*cosj*sinA-sinj*cosA-cosi *cosj*sinB);
                if(22>y && y>0 && 80>x && mess>z[o]) {
                    z[o]=mess;
                    b[o]=".,-~:;=!*#$@"[N > 0 ? N : 0];
                }
            }
        }
        printf("\x1b[d");
        for(k=0; k<1761; k++) {
            putchar(k%80?b[k]:10);
            A+=0.00004;
            B+= 0.00002;
        }
        usleep(30000);
    }
    return 0;
}
