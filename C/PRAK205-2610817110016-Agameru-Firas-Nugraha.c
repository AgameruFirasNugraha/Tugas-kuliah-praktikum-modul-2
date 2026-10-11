#include <stdio.h>
#include <math.h>

int main() {
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    int tinggi = a;
    int alas = sqrt(b * b - a * a);
    int keliling = alas + tinggi + b;
    float luas = alas * tinggi / 2.0;

    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %.0f cm^2\n", luas);
    return 0;
}