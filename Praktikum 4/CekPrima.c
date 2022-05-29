/*Nama File 	: CekPrima.c*/
/*Deskripsi 	: Mengecek apakah integer yang dimasukkan merupakan bilangan prima atau bukan dengan mengecek jumlah bilangan faktornya*/
/*Pembuat   	: Firdaus Ravi Faizzani - 24060121130049*/
/*Tgl Pembuatan	: Minggu, 27 Maret 2022*/


#include <stdio.h>
#include <stdlib.h>

int main(){

	//Kamus
    int N,i;


	//Algoritma
    printf("Masukkan nilai N:");
    scanf("%d", &N);
    for (i = 2;i <= N;i++){
        if (N % i == 0){
            if (i != N){
                printf("Bukan Bilangan Prima");
                break;
            }
            else {
                printf("Bilangan Prima");
                break;
            }
        }
    }

}
