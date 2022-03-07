/*Nama File	: luasbjsk.c*/
/*Deskripsi	: Menghitung dan menampilkan nilai luas bujursangkar*/
/*Pembuat	: Firdaus Ravi Faizzani - 24060121130067*/
/*Tgl pembuatan	: Senin, 07-03-2022 11:40 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Kamus
    int S;
    int Luas;

    //Algoritma
    printf("Masukkan Sisi:");
    scanf("%d", &S);
    Luas = S * S;
    printf("Luas bujursangkar = %d x %d = %d",S,S,Luas);
    return 0;
}
