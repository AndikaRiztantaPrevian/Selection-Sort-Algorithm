#include <stdio.h>


/**
 * 
 * Selection Sort
 * 
 */

void sortAscending(int arr[], int n, int *comparisons, int *swaps) {

    int i, j, min;

    for (i = 0; i < n-1; i++) {

        min = i;

        for (j = i+1; j < n; j++) {

            (*comparisons)++;

            if (arr[j] < arr[min]) {

                min = j;

            }

        }

        if (min != i) {

            int temp = arr[i];

            arr[i] = arr[min];

            arr[min] = temp;

            (*swaps)++;

        }

    }

}


/**
 * 
 * Ouput Result
 * 
 */

void printResult(int arr[], int n) {

    for (int i = 0; i < n; i++) {

        printf("%d ", arr[i]);

    }

    printf("\n");

}


/**
 * 
 * Main
 * 
 */

int main() {

    // Array 1.
    int arr[10] = {3, 10, 4, 6, 8, 9, 7, 2, 1, 5};

    // Array 2.
    // int arr[10] = {1, 2, 3, 4, 5, 9, 7, 6, 8, 10};

    // Array 3.
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Array 4.
    // int arr[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    // Untuk menampung size dari arr.
    int n = 10;

    // Untuk menampung nilai dari (Jumlah Perbandingan) dan (Jumlah Pertukaran).
    int comparisons, swaps;

    printf("Unsorted: ");
    printResult(arr, n);

    sortAscending(arr, n, &comparisons, &swaps);

    printf("Sorted: ");
    printResult(arr, n);

    printf("Total Perbandingan: %d\n", comparisons);
    printf("Total Pertukaran: %d\n", swaps);

    printf("\n");

    return 0;

}