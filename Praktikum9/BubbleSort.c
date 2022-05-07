/*Nama File	: BubbleSort.c*/
/*Deskripsi	: Sorting Descending dengan Bubble Sort*/
/*Pembuat	: Firdaus Ravi Faizzani - 24060121130067*/
/*Tgl pembuatan	: Sabtu, 07-05-2022*/
#include <stdio.h>

void swap(int* x, int* y)
{
    // Kamus
	int temp = *y;

	// Algoritma
	*y = *x;
	*x = temp;
}

void bubbleSort(int arr[], int n)
{
    // Kamus Lokal
	int i, j;

	// Algoritma
	for (i = 0; i < n - 1; i++)
		for (j = 0; j < n - i - 1; j++)
			if (arr[j] < arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
}


int main()
{
    // Kamus
    int i;
	int arr[] = { 99, 23, 25, 69, 100, 11, 6 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Algoritma
	printf("Array sebelum disortir : \n");
    for (i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
	bubbleSort(arr, n);
	printf("Array setelah disortir : \n");
	for (i = 0; i < n; i++)
		printf("%d  ", arr[i]);
	printf("\n");
	return 0;
}
