#include "gtest/gtest.h"
#include "selectionsort.h"

TEST(selectionsortTest, descendingOrderTest) 
{
    std::vector<int> actual{ 1, 5, 4, 6, 7, 8, 9, 15 };
    std::vector<int> expected{ 15, 9, 8, 7, 6, 5, 4, 1 };

    selectionSort(actual, false);

    EXPECT_EQ(actual, expected);
}

TEST(selectionsortTest, ascendingOrderTest)
{
    std::vector<int> actual{ 8, 11, 54, 79, 1, 5, 81, 30 };
    std::vector<int> expected{ 1, 5, 8, 11, 30, 54, 79, 81 };

    selectionSort(actual, true);

    EXPECT_EQ(actual, expected);
}

int main(int argc, char **argv) 
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
