// Quick sort in C

#include "qsort.h"
#include "pch.h"

// function to swap elements
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

// function to find the partition position
int partition(int* data, int low, int high) {

    // select the rightmost element as pivot
    int pivot = data[high];

    // pointer for greater element
    int i = (low - 1);

    // traverse each element of the array
    // compare them with the pivot
    for (int j = low; j < high; j++) {
        if (data[j] <= pivot) {

            // if element smaller than pivot is found
            // swap it with the greater element pointed by i
            i++;

            // swap element at i with element at j
            swap(&data[i], &data[j]);
        }
    }

    // swap the pivot element with the greater element at i
    swap(&data[i + 1], &data[high]);

    // return the partition point
    return (i + 1);
}

void sort(int* array, int low, int high)
{
    if (low < high) {

        if ((array[low] >= 0 && array[low] <= 60000) && (array[high] >= 0 && array[high] <= 60000))
        {
            // find the pivot element such that
            // elements smaller than pivot are on left of pivot
            // elements greater than pivot are on right of pivot
            int pi = partition(array, low, high);

            // recursive call on the left of pivot
            sort(array, low, (pi - 1));

            // recursive call on the right of pivot
            sort(array, pi + 1, high);

        }
        else
        {
            std::cerr << "Value out of range. The program will close";
            exit(1);
        }
    }

}


// function to print array elements
void printArray(int input[], int count) {
    for (int i = 0; i < count; ++i) {
        printf("%d  ", input[i]);
    }
    printf("\n");
}

void qsort(int* input, int count)
{
    if (count == 0)
    {
        printf("No data to sort");

    }
    else
    {

        sort(input, 0, count - 1);

    }

}





