/*Nama File 	: FaktorBil.c*/
/*Deskripsi 	: Mencari faktor-faktor bilangan dari bilangan integer sembarang yang dimasukan*/
/*Pembuat   	: Firdaus Ravi Faizzani - 24060121130049*/
/*Tgl Pembuatan	: Minggu, 27 Maret 2022*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    //Kamus
    int i,N;


    //Algoritma
    printf("Masukkan Nilai N:");
    scanf("%d",&N);
    for (i=1;i<=N;i++){
        if (N % i == 0){
                printf("%d\n", i);
        }

    }




}
