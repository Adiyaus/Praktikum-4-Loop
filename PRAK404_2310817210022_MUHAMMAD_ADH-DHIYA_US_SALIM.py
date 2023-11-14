while True:
    print("Pilih Program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5.Exit\n")
    pil = float(input("masukkan pilihan: "))
    if pil == 5:
        print("Terimakasih, telah menggunakan kalkulator Adiya")
        break
    elif pil == 1:
        x = float(input("Masukkan nilai pertama: "))
        y = float(input("Masukkan nilai kedua: "))
        print(f"Hasil penjumlahana antara {x:.2f} dan {y:.2f} adalah {x + y:.2f}\n")
    elif pil == 2:
        x = float(input("Masukkan nilai pertama : "))
        y = float(input("Masukkan nilai kedua: "))
        print(f"Hasil pengurangan antara {x:.2f} dan {y:.2f} adalah {x - y:.2f}\n")
    elif pil == 3:
        x = float(input("Masukkan nilai pertama: "))
        y = float(input("Masukkan nilai kedua: "))
        print(f"Hasil perkalian antara {x:.2f} dan {y:.2f} adalah {x * y:.2f}\n")
    elif pil == 4:
        x = float(input("Masukkan nilai pertama: "))
        y = float(input("Masukkan nilai kedua: "))
        print("Hasil pembagian antara {x:.2f} dan {y:.2f} adalah {x / y:.2f}\n")
    else:
        print("Input anda salah, silahkan coba lagi\n")