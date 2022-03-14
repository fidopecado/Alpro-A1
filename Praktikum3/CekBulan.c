/*Nama File	: CekBulan.c*/
/*Deskripsi	: Menuliskan nama-nama bulan dari nomor hari 1-12 yang diinput, namun melakukan validasi terlebih dahulu untuk menentukan masukkan sudah benar atau belum*/
/*Pembuat	: Firdaus Ravi Faizzani - 24060121130067*/
/*Tgl pembuatan	: Senin, 14-03-2022 19.45 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int Bulan;

    //Algoritma
    printf("Masukkan Bulan dalam nomor 1-12:");
    scanf("%d", &Bulan);
    if ((1 <= Bulan) && (Bulan <= 12)) {
                switch (Bulan) {
            case 1:
                printf("Januari");
                break;
            case 2:
                printf("Februari");
                break;
            case 3:
                printf("Maret");
                break;
            case 4:
                printf("April");
                break;
            case 5:
                printf("Mei");
                break;
            case 6:
                printf("Juni");
                break;
            case 7:
                printf("Juli");
                break;
            case 8:
                printf("Agustus");
                break;
            case 9:
                printf("September");
                break;
            case 10:
                printf("Oktober");
                break;
            case 11:
                printf("November");
                break;
            case 12:
                printf("Desember");
                break;
        }
    }
    else {
        printf("Masukkan nomor Bulan tidak tepat");
    }
    return 0;
}

