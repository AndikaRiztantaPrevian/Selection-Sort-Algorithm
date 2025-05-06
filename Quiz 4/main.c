#include <stdio.h>


/**
 * 
 * Shell Sort
 * 
 */

void shellSort(int arr[], int n, int *comparisons, int *shifts, int *insertions) {

    int gap, i, j, temp;
    *comparisons = 0;
    *shifts = 0;
    *insertions = 0;

    for (gap = n / 2; gap > 0; gap /= 2) {

        for (i = gap; i < n; i++) {

            temp = arr[i];

            (*insertions)++;

            j = i;

            while (j >= gap && arr[j - gap] > temp) {

                (*comparisons)++;

                arr[j] = arr[j - gap];

                (*shifts)++;
                
                j -= gap;
            
            }
            
            (*comparisons)++;

            arr[j] = temp;

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

    int arr[10] = {3, 10, 4, 6, 8, 9, 7, 2, 1, 5};

    int n = 10;

    int comparisons, shifts, insertions;

    printf("Unsorted: ");
    printResult(arr, n);

    shellSort(arr, n, &comparisons, &shifts, &insertions);

    printf("Sorted: ");
    printResult(arr, n);

    printf("Total Perbandingan: %d\n", comparisons);
    printf("Total Pergeseran: %d\n", shifts);
    printf("Total Penyisipan: %d\n", insertions);

    return 0;

}