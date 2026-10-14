#include <stdio.h>

int main() {
    // Deklarasi variabel dengan array karakter (string)
    char nama[50];
    char nim[20];
    char kelas_paralel[20];
    char ttl[50];
    char alamat[50];
    char hobby[30];
    char no_hp[20];

    printf("=== Masukkan Biodata ===\n");
    
    printf("Nama                  : ");
    fgets(nama, sizeof(nama), stdin);

    printf("NIM                   : ");
    fgets(nim, sizeof(nim), stdin);

    printf("Kelas Paralel         : ");
    fgets(kelas_paralel, sizeof(kelas_paralel), stdin);

    printf("Tempat/Tanggal Lahir  : ");
    fgets(ttl, sizeof(ttl), stdin);

    printf("Alamat                : ");
    fgets(alamat, sizeof(alamat), stdin);

    printf("Hobby                 : ");
    fgets(hobby, sizeof(hobby), stdin);

    printf("No. hp                : ");
    fgets(no_hp, sizeof(no_hp), stdin);

    // Menampilkan hasil output
    printf("\n=== Output Biodata ===\n");
    printf("Nama                  : %s", nama);
    printf("NIM                   : %s", nim);
    printf("Kelas Paralel         : %s", kelas_paralel);
    printf("Tempat/Tanggal Lahir  : %s", ttl);
    printf("Alamat                : %s", alamat);
    printf("Hobby                 : %s", hobby);
    printf("No. hp                : %s", no_hp);

    return 0;
}