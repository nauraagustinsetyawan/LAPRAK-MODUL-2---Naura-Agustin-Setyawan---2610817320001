print("--- Menghitung Bejana Tabung Pak Dengklek ---")
r = float(input("Masukkan jari-jari (r): "))
t = float(input("Masukkan tinggi tabung (t): "))

phi = 22 / 7

volume = phi * (r ** 2) * t
luas_permukaan = 2 * phi * r * (r + t)
keliling = 2 * phi * r

print("\n--- Hasil Perhitungan ---")
print(f"Volume = {volume:.2f}")
print(f"Luas = {luas_permukaan:.2f}")
print(f"Keliling = {keliling:.2f}")