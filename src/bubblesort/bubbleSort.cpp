#include "bubbleSort.h"

static void swap(int& x, int& y) 
{
	int temp = x;
	x = y;
	y = temp;
}

void bubbleSort(std::vector<int>& nums, bool isAscendingOrder)
{
	for (int i = 0; i < nums.size() - 1; ++i) 
	{
		for (int j = 0; j < nums.size() - i - 1; ++j)
		{
			if (isAscendingOrder)
			{
				if (nums.at(j) > nums.at(j + 1))
					swap(nums.at(j), nums.at(j + 1));
			}
			else 
			{
				if (nums.at(j) < nums.at(j + 1))
					swap(nums.at(j), nums.at(j + 1));
			}
		}
	}
}
