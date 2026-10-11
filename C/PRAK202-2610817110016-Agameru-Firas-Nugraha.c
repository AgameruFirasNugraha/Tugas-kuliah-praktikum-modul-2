#include<stdio.h>

int main() {
float n1, n2, Hasil;

printf("Masukkan Nilai Pertama : ");
scanf("%f", &n1);
printf("Masukkan Nilai Kedua : ");
scanf("%f", &n2);

Hasil = n1 + n2;

printf("Hasil dari penjumlahan nilai Pertama \"%g\" dan nilai Kedua \"%g\" Adalah \"%.2f\"", n1, n2, Hasil);
return 0;
}
