#include "mergesort.h"

static void merge(int arr[], const int left, const int mid, const int right, const bool isAscendingOrder)
{
    const int leftArrSize{ mid - left + 1 };
    const int rightArrSize{ right - mid };
    int leftArrCursor{ 0 }, rightArrCursor{ 0 }, arrCursor{ left };

    int* leftArr = new int[leftArrSize];
    int* rightArr = new int[rightArrSize];


    for (int i = 0; i < leftArrSize; ++i)
        leftArr[i] = arr[left + i];

    for (int i = 0; i < rightArrSize; ++i)
        rightArr[i] = arr[mid + i + 1];


    while ((leftArrCursor < leftArrSize) &&
            (rightArrCursor < rightArrSize))
    {
        if (isAscendingOrder)
        {
            if (leftArr[leftArrCursor] < rightArr[rightArrCursor])
                arr[arrCursor++] = leftArr[leftArrCursor++];
            else
                arr[arrCursor++] = rightArr[rightArrCursor++];        
        }
        else 
        {
            if (leftArr[leftArrCursor] > rightArr[rightArrCursor])
                arr[arrCursor++] = leftArr[leftArrCursor++];
            else
                arr[arrCursor++] = rightArr[rightArrCursor++];
        }
    }


    while (leftArrCursor < leftArrSize)
    {
        arr[arrCursor++] = leftArr[leftArrCursor++];
    }

    while (rightArrCursor < rightArrSize)
    {
        arr[arrCursor++] = rightArr[rightArrCursor++];
    }

    delete[] leftArr, rightArr;
}

void mergeSort(int arr[], int left, int right, bool isAscendingOrder)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid, isAscendingOrder);
        mergeSort(arr, mid + 1, right, isAscendingOrder);

        merge(arr, left, mid, right, isAscendingOrder);
    }
}