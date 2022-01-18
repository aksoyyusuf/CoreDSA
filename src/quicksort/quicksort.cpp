#include "quicksort.h"

static void exchange(std::vector<int>& nums, int index1, int index2)
{
    int temp = nums.at(index1);
    nums.at(index1) = nums.at(index2);
    nums.at(index2) = temp;
}

static int partition(std::vector<int>& nums, int lowIndex, int highIndex)
{
    int pivot = nums.at(highIndex);

    int smallestNumIndex = lowIndex - 1;

    for (int j = lowIndex; j <= highIndex - 1; ++j)
    {
        if (nums.at(j) < pivot)
        {
            ++smallestNumIndex;
            exchange(nums, smallestNumIndex, j);
        }
    }

    exchange(nums, smallestNumIndex + 1, highIndex);

    return (smallestNumIndex + 1);
}

void quickSort(std::vector<int>& nums, int lowIndex, int highIndex)
{
    if (lowIndex < highIndex)
    {
        int pivotIndex = partition(nums, lowIndex, highIndex);

        quickSort(nums, lowIndex, pivotIndex - 1);
        quickSort(nums, pivotIndex + 1, highIndex);
    }
}
