#include <stdio.h>

int main() {
    float r, t;
    float phi = 22.0 / 7.0; // Menggunakan 22/7 untuk nilai pi

    printf("Masukkan jari-jari (r): ");
    scanf("%f", &r);
    printf("Masukkan tinggi tabung (t): ");
    scanf("%f", &t);

    float volume = phi * r * r * t;
    float luas_permukaan = 2 * phi * r * (r + t);
    float keliling = 2 * phi * r;

    printf("\n--- Hasil Perhitungan ---\n");
    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas_permukaan);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}