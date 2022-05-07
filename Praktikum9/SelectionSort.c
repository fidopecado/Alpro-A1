/*Nama File	: InsertionSort.c*/
/*Deskripsi	: Sorting Descending dengan Selection Sort*/
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

void selectionSort(int arr[], int n)
{
	// Kamus Lokal
	int i, j, min;

    // Algoritma
	for (i = 0; i < n-1; i++)
	{
		min = i;
		for (j = i+1; j < n; j++)
		if (arr[j] < arr[min])
			min = j;
		swap(&arr[min], &arr[i]);
	}
}

int main()
{
    // Kamus
    int i;
	int arr[] = { 99, 23, 25, 69, 100, 11, 6 };
	int n = sizeof(arr)/sizeof(arr[0]);

	// Algoritma
	printf("Array sebelum disortir : \n");
    for (i = 0; i < n; i++) {
        printf("%d  ", arr[i]);
    }
    printf("\n");
	selectionSort(arr, n);
	printf("Array setelah disortir : \n");
	for (i = n; i > 0; i--)
		printf("%d  ", arr[i-1]);
	printf("\n");
	return 0;
}

