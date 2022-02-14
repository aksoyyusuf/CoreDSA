#include "gtest/gtest.h"
#include "quicksort.h"

TEST(quicksortTest, ascendingOrderTest)
{
    std::vector<int> actual{ 8, 11, 54, 79, 1, 5, 81, 30 };
    std::vector<int> expected{ 1, 5, 8, 11, 30, 54, 79, 81 };

    quickSort(actual, 0, 7);

    EXPECT_EQ(actual, expected);
}

int main(int argc, char **argv) 
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
