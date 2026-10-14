import math

print("--- Menghitung Segitiga Pythagoras ---")

a = float(input("Masukkan nilai A (Tinggi): "))
b = float(input("Masukkan nilai B (Sisi Miring): "))

alas = math.sqrt((b ** 2) - (a ** 2))
tinggi = a

keliling = alas + tinggi + b
luas = 0.5 * alas * tinggi

print("\n--- Hasil Perhitungan ---")
print(f"Alas = {int(alas)} cm")
print(f"Tinggi = {int(tinggi)} cm")
print(f"Keliling = {int(keliling)} cm")
print(f"Luas = {int(luas)} cm^2")