// C program for implementation of Bubble sort
#include <stdio.h>

//function for swapping
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// function for bubble sort
void bubbleSort(int arr[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)

       // Last i elements are already in place
       for (j = 0; j < n-i-1; j++)
           if (arr[j] > arr[j+1])
              swap(&arr[j], &arr[j+1]);
}

// function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
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
    bubbleSort(arr, n);
    printf("\n Sorted array: ");
    printArray(arr, n);
    return 0;
}

