#include <stdio.h>

int main() {
    float pi = 22.0 / 7;
    float r, t;

    scanf("%f", &r);
    scanf("%f", &t);

    float volume = pi * r * r * t;
    float luas = 2 * pi * r * (r + t);
    float keliling = 2 * pi * r;

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);
    return 0;
}