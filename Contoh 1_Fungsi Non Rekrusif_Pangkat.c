//BAHASA C
#include <stdio.h>

int fpangkat (int angka, int pangkat) {
    int i;
    int hasil = 1;
    for (i = 1; i <= pangkat; i++) {
        hasil = hasil * angka;
    }
    return hasil;
}

int main() {
    int angka, pangkat;
    printf("Angka = ");
    scanf("%d", &angka);
    printf("Pangkat = ");
    scanf("%d", &pangkat);
    
    printf("Hasil = %d\n", fpangkat(angka, pangkat));
    
    return 0;
}

