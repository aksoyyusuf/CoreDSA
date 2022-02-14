#include "gtest/gtest.h"
#include "mergesort.h"

TEST(mergesortTest, descendingOrderTest) 
{
    int actual[] = {1, 5, 4, 6, 7, 8, 9, 15};
    int expected[] = { 15, 9, 8, 7, 6, 5, 4, 1 };

    mergeSort(actual, 0, 8, false);

    EXPECT_EQ(actual, expected);
}

TEST(mergesortTest, ascendingOrderTest)
{
    int actual[] = { 8, 11, 54, 79, 1, 5, 81, 30 };
    int expected[] = { 1, 5, 8, 11, 30, 54, 79, 81 };

    mergeSort(actual, 0, 8, false);

    EXPECT_EQ(actual, expected);
}

int main(int argc, char **argv) 
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
