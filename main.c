#include <stdio.h>

int osszeg(int a, int b);
int main() {
    int a=5,b=4;
    printf("A ket egesz szam osszege: %i", osszeg(a,b));
    return 0;
}
int osszeg(int a, int b){
    return a+b;
}
