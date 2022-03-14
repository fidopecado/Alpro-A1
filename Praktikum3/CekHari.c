/*Nama File	: CekHari.c*/
/*Deskripsi	: Menuliskan nama-nama hari dari nomor hari 1-7 yang diinput, namun melakukan validasi terlebih dahulu untuk menentukan masukkan sudah benar atau belum*/
/*Pembuat	: Firdaus Ravi Faizzani - 24060121130067*/
/*Tgl pembuatan	: Senin, 14-03-2022 19.30 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int Hari;

    //Algoritma
    printf("Masukkan Hari dalam angka 1-7:");
    scanf("%d", &Hari);
    switch (Hari) {
        case 1:
            printf("Senin");
            break;
        case 2:
            printf("Selasa");
            break;
        case 3:
            printf("Rabu");
            break;
        case 4:
            printf("Kamis");
            break;
        case 5:
            printf("Jum`at");
            break;
        case 6:
            printf("Sabtu");
            break;
        case 7:
            printf("Minggu");
            break;
    }
    return 0;
}
