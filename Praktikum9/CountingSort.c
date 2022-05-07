/*Nama File	: CountingSort.c*/
/*Deskripsi	: Sorting Descending dengan Counting Sort*/
/*Pembuat	: Firdaus Ravi Faizzani - 24060121130067*/
/*Tgl pembuatan	: Sabtu, 07-05-2022*/
#include <stdio.h>

void countingSort(int array[], int n) {
    // Kamus Lokal
  int max = array[0];

    // Algoritma
  for (int i = 1; i < n; i++) {
    if (array[i] > max)
      max = array[i];
  }
    // Kamus Lokal
  int output[max];
  int count[max];

    // Algoritma
  for (int i = 0; i <= max; ++i) {
    count[i] = 0;
  }

  for (int i = 0; i < n; i++) {
    count[array[i]]++;
  }

  for (int i = 1; i <= max; i++) {
    count[i] += count[i - 1];
  }


  for (int i = n - 1; i >= 0; i--) {
    output[count[array[i]] - 1] = array[i];
    count[array[i]]--;
  }

  for (int i = 0; i < n; i++) {
    array[i] = output[i];
  }
}

int main() {
    // Kamus
  int i;
  int array[] = {20, 19, 5, 29, 18, 13, 11, 26};
  int n = sizeof(array) / sizeof(array[0]);
    // Algoritma
  printf("Array sebelum disortir : \n");
  for (i = 0; i < n; i++) {
    printf("%d  ", array[i]);
  }
  printf("\n");
  countingSort(array, n);
  printf("Array setelah disortir : \n");
  for (i = n; i > 0; i--) {
    printf("%d  ", array[i-1]);
  }
  printf("\n");
}
