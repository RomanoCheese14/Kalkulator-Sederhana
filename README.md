# KALKULATOR ROMANO

Kalkulator Romano adalah kalkulator berbasis teks yang memungkinkan pengguna untuk melakukan berbagai operasi matematis. Program ini dirancang untuk memberikan hasil perhitungan dengan cepat dan mudah melalui antarmuka pengguna yang interaktif. Fitur-fitur utama dari kalkulator ini mencakup operasi matematika dasar seperti penjumlahan, pengurangan, perkalian, dan pembagian; perhitungan faktorial; serta penghitungan Kelipatan Persekutuan Terkecil (KPK) dan Faktor Persekutuan Terbesar (FPB). Kalkulator ini juga menyediakan fungsi logaritma yang memungkinkan pengguna menghitung logaritma dari suatu bilangan dengan basis yang ditentukan.

## Format Input

Pengguna diminta untuk memasukkan input dalam format berikut:
```
OPERASI angka1 angka2
```
- **OPERASI**: Salah satu dari `ADD`, `SUB`, `MULT`, `DIV`, `FACT`, `LCM`, `GCM`, atau `LOG`.
- **angka1**: Angka pertama (diperlukan untuk sebagian besar operasi).
- **angka2**: Angka kedua (diperlukan untuk operasi yang relevan).

Untuk menghentikan program, ketik `KELUAR`.

## Contoh Penggunaan

```plaintext
KALKULATOR ROMANO
Format input : OPERASI angka1 angka2
ketik KELUAR jika ingin menghentikan

Masukkan Input: ADD 5 10
Hasil perhitungan = 15

Masukkan Input: SUB 20 8
Hasil perhitungan = 12

Masukkan Input: FACT 5
Hasil perhitungan = 120

Masukkan Input: LOG 2 8
Hasil logaritma = 3.00

Masukkan Input: KELUAR
Program telah selesai.
```

## Implementasi

Program ini ditulis dalam bahasa pemrograman C. Berikut adalah beberapa fungsi kunci:
- **FPB**: Menghitung Faktor Persekutuan Terbesar menggunakan algoritma Euclid.
- **KPK**: Menghitung Kelipatan Persekutuan Terkecil berdasarkan FPB.
- **faktorial**: Menghitung faktorial suatu bilangan secara rekursif.
- **logaritma**: Menghitung logaritma dari bilangan dengan basis yang ditentukan.

## Instalasi dan Kompilasi

1. Pastikan Anda memiliki compiler C seperti GCC terinstal.
2. Salin kode sumber ke dalam file dengan nama `kalkulator_romano.c`.
3. Buka terminal dan navigasikan ke direktori tempat file disimpan.
4. Jalankan perintah berikut untuk mengompilasi program:
   ```bash
   gcc kalkulator_romano.c -o kalkulator_romano -lm
   ```
5. Setelah berhasil dikompilasi, jalankan program dengan perintah:
   ```bash
   ./kalkulator_romano
   ```

## Kontribusi

Jika Anda ingin berkontribusi pada pengembangan program ini, silakan ajukan permintaan tarik (pull request) atau laporkan masalah (issues) yang Anda temui.

## Lisensi

Program ini dilisensikan di bawah [MIT License](LICENSE).