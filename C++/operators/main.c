#include <stdio.h>

int main() {
    int a, b;
    float c;
    double d;
    int e;
    long f;
    int g;

    a = 3;
    b = 8;
    c = a + b;
    d = b / a;
    e = a * e;
    f = b % a;
    g = b -a;

    printf("The sum of %d and %d is %.2f\n", a,b,c);
    printf("The division of %d and %d is %.2F\n", b,a,d);
    printf("The multiplication of %d and %d is %d\n", a,b,e);
    printf("The modulus of %d and %d is %.2ld\n", b,a,f);
    printf("The subtraction of %d and %d is %d\n", b,a,g);
   
}