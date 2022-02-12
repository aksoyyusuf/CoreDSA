#include "selectionsort.h"

static void swap(int& x, int& y) 
{
	int temp = x;
	x = y;
	y = temp;
}

void selectionSort(std::vector<int>& nums, bool isAscendingOrder)
{
	int index;

	for (int i = 0; i < nums.size() - 1; ++i)
	{
		index = i;

		for (int j = i + 1; j < nums.size(); ++j)
		{
			if (isAscendingOrder)
			{
				if (nums.at(j) < nums.at(index))
					index = j;
			}
			else 
			{
				if (nums.at(j) > nums.at(index))
					index = j;
			}
		}

		swap(nums.at(i), nums.at(index));
	}
}
