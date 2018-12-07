#include "task1.h"
#include "task3.h"
#include "task4.h"
#include "task5.h"
#include "task6.h"

#include "gtest/gtest.h"

TEST(task1, word_count)
{
   char buf[256]="   abc    f efg h12   9827398798";
   ASSERT_EQ(5, wordCount(buf));
}


TEST(task3, longest_word)
{
        char buf[256]="abc    f efg h12   9827398798";
        char word[256];
        int len=getMaxWord(buf,word);
	ASSERT_EQ(10,len);
        ASSERT_STREQ("9827398798",word);
}


TEST(task4, sum_of_numbers)
{
        char buf[256]="ab12cd45e";
        int sum=getSum(buf);
        ASSERT_EQ(57,sum);
}

TEST(task5, sum_btw_bounds)
{
        int arr[]={1,-2,3,-4,-6,2,3};
        int sum=getSumInt(arr,7);
	ASSERT_EQ(-5,sum);
}

TEST(task6, sum_btw_max_min)
{
        int arr[]={1,-2,3,-4,-6,2,3};
        int sum=getSumMaxMin(arr,7);
	ASSERT_EQ(-4,sum);
}

