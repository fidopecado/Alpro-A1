/*Nama File	: InsertionSort.c*/
/*Deskripsi	: Sorting Descending dengan Insertion Sort*/
/*Pembuat	: Firdaus Ravi Faizzani - 24060121130067*/
/*Tgl pembuatan	: Sabtu, 07-05-2022*/

#include <math.h>
#include <stdio.h>

void insertionSort(int arr[], int n)
{
    // Kamus Lokal
	int i, key, j;

	// Algoritma
	for (i = 1; i < n; i++) {
		key = arr[i];
		j = i - 1;

		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

int main()
{
    // Kamus
    int i;
	int arr[] = {20, 19, 5, 29, 18, 13, 11, 26};
	int n = sizeof(arr) / sizeof(arr[0]);

	// Algoritma
    printf("Array sebelum disortir : \n");
    for (i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
	insertionSort(arr, n);
	printf("Array setelah disortir : \n");
	for (i = n; i > 0; i--)
		printf("%d  ", arr[i-1]);
	printf("\n");

	return 0;
}

