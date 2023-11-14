#include <stdio.h>

void kalk(float *x, float *y){
    printf("Masukkan nilai pertama: ");
    scanf("%f", x);
    printf("Masukkan nilai kedua: ");
    scanf("%f", y);
}
int main(){
    float x, y;
    int pil;
    while(1){
        printf("Pilih program\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\n");
        printf("Masukkan Pilihan: ");
        scanf("%d", &pil);
        switch(pil){
            case 1:
                kalk(&x, &y);
                printf("Hasil penjumlahan antara %.2f dan %.2f adalah %.2f\n", x, y, x + y);
                break;
            case 2:
                kalk(&x, &y);
                printf("Hasil pengurangan antara %.2f dan %.2f adalah %.2f\n", x, y, x - y);
                break;
            case 3:
                kalk(&x, &y);
                printf("Hasil perkalian antara %.2f dan %.2f adalah %.2f\n", x, y, x * y);
                break;
            case 4:
                kalk(&x, &y);
                printf("Hasil pembagian antara %.2f dan %.2f adalah %.2f\n", x, y, x / y);
                break;
            case 5:
                printf("Terimakasih, telah menggunakan kalkulator Adiya");
                return 0;
            default:
                printf("Input anda salah, silahkan coba lagi\n");
                break;
        }
        }
    }