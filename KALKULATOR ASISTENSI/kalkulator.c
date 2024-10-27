#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int tambah(int a, int b){
    return a + b;
}

int kurang(int a, int b){
    return a - b;
}

int kali(int a, int b){
    return a * b;
}

int bagi(int a, int b){
    return a / b;
}

int FPB(int a, int b){
    while(b !=0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int KPK(int a, int b){
    return (a * b) / FPB(a, b);
}

unsigned long long faktorial(int n){
    if(n == 1)
    return 1;
    return n*faktorial(n-1);
}

double logaritma(double a, double b){
    return log(b) / log(a);
}

int main (){
    char input[100];
    char operasi[20];
    int a, b;

    printf("KALKULATOR ROMANO\n");
    printf("Format input : OPERASI angka1 angka2\n");
    printf("ketik KELUAR jika ingin menghentikan\n");

    while (1){
        printf("Masukkan Input: ");
        fgets(input, sizeof(input), stdin);
        sscanf(input, "%s %d %d", operasi, &a, &b);

         if (strncmp(input, "KELUAR", 6) == 0) {
            printf("Program telah selesai.\n");
            break;
         }

        if(strcmp(operasi, "ADD") == 0){
            printf("Hasil perhitungan = %d\n", tambah(a, b));
        }
        else if(strcmp(operasi, "SUB") == 0){
            printf("Hasil perhitungan = %d\n", kurang(a, b));
        }
        else if(strcmp(operasi, "MULT") == 0){
            printf("Hasil perhitungan = %d\n", kali(a, b));
        }
        else if(strcmp(operasi, "DIV") == 0){
            printf("Hasil perhitungan = %d\n", bagi(a, b));
        }
        else if(strcmp(operasi, "FACT") == 0){
            unsigned long long hasil = faktorial(a);
            printf("Hasil perhitungan = %llu\n", hasil);
        }
        else if(strcmp(operasi, "LCM") == 0){
            printf("Hasil KPK = %d\n", KPK(a, b));
        }
        else if(strcmp(operasi, "GCD") == 0){
            printf("Hasil FPB = %d\n", FPB(a, b));
        }
         else if(strcmp(operasi, "LOG") == 0){
            double hasil = logaritma(a, b);
            printf("Hasil logaritma = %.2f\n", hasil);
        }
    }
      return 0;
}