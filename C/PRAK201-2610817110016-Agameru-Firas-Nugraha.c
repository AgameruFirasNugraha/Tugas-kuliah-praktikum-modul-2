#include <stdio.h>

int main() {
    char nama[50]; char nim[30]; char kelasparalel[5]; char tempattanggallahir[40]; char alamat[100];
    char hobby[50]; char nohp[35];

    printf("%-21s: ", "Nama");
    scanf(" %[^\n]", nama);
    printf("%-21s: ", "NIM");
    scanf(" %[^\n]", nim);
    printf("%-21s: ", "Kelas Paralel");
    scanf(" %[^\n]", kelasparalel);
    printf("%-21s: ", "Tempat/Tanggal Lahir");
    scanf(" %[^\n]", tempattanggallahir);
    printf("%-21s: ", "Alamat");
    scanf(" %[^\n]", alamat);
    printf("%-21s: ", "Hobby");
    scanf(" %[^\n]", hobby);
    printf("%-21s: ", "No. HP");
    scanf(" %[^\n]", nohp);

    printf("\n\n");
    printf("%-21s: %s\n", "Nama", nama);
    printf("%-21s: %s\n", "NIM", nim);
    printf("%-21s: %s\n", "Kelas Paralel", kelasparalel);
    printf("%-21s: %s\n", "Tempat/Tanggal Lahir", tempattanggallahir);
    printf("%-21s: %s\n", "Alamat", alamat);
    printf("%-21s: %s\n", "Hobby", hobby);
    printf("%-21s: %s\n", "No. HP", nohp);
    return 0;
}