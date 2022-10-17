#include "pch.h"
#include "gtest/gtest.h"

#include "qsort.h"

TEST(qsort_testing, testingSortingFunctionlity) {

	int arr[5] = { 5, 3, 4, 1, 2 };
	int arr1[5] = { 1, 2, 3, 4, 5 };

	qsort(arr, 5);
	for (int i = 0; i < 5; i++)
	{
		EXPECT_EQ(arr[i], arr1[i]);
		EXPECT_TRUE(true);

	}
}
TEST(qsort_testing, alreadySorted) {

	int arr[2] = { 1, 2 };
	int arr1[2] = { 1, 2 };

	qsort(arr, 2);
	for (int i = 0; i < 2; i++)
	{
		EXPECT_EQ(arr[i], arr1[i]);
		EXPECT_TRUE(true);

	}
}

TEST(qsort_testing, decendingArrayToAscending) {

	int arr[5] = { 10000, 1000, 100, 10, 1 };
	int arr1[5] = { 1, 10, 100, 1000, 10000 };
	
	qsort(arr, 5);
	for (int i = 0; i < 5; i++)
	{
		EXPECT_EQ(arr[i], arr1[i]);
		EXPECT_TRUE(true);
		
	}
}

TEST(qsort_DeathTest, throwErrorNegitiveValues) {

	int arr[2] = { 2, -1 };
	
	EXPECT_EXIT(qsort(arr, 2), ::testing::ExitedWithCode(1), "Value out of range.*");
}

TEST(qsort_DeathTest, throwErrorwithGreaterValues) {

	int arr[2] = { 2, 60000000000};

	EXPECT_EXIT(qsort(arr, 2), ::testing::ExitedWithCode(1), "Value out of range.*");
}




