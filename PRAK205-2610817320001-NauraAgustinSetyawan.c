#include <stdio.h>
#include <math.h>

int main() {
    float a, b, alas, tinggi, keliling, luas;

    printf("--- Menghitung Segitiga Pythagoras ---\n");
    printf("Masukkan nilai A (Tinggi): ");
    scanf("%f", &a);
    printf("Masukkan nilai B (Sisi Miring): ");
    scanf("%f", &b);

    alas = sqrt((b * b) - (a * a));
    tinggi = a;

    keliling = alas + tinggi + b;
    luas = 0.5 * alas * tinggi;

    printf("\n--- Hasil Perhitungan ---\n");
    printf("Alas = %.0f cm\n", alas);
    printf("Tinggi = %.0f cm\n", tinggi);
    printf("Keliling = %.2f cm\n", keliling);
    printf("Luas = %.2f cm^2\n", luas);

    return 0;
}