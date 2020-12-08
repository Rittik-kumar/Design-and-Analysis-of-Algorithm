// C program for insertion sort
#include <math.h>
#include <stdio.h>

//function for insertion sort
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// function to print an array
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{   int i, n, arr[50];
    printf("\n Enter size of an array : ");
    scanf("%d", &n);
    printf("\n Enter elements of an array to be sorted : ");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);
    insertionSort(arr, n);
    printf("\n Sorted array: ");
    printArray(arr, n);

    return 0;
}

