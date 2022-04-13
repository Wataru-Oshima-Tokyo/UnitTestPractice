/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};


/*
  void sortDescending(int & first, int & second, int & third);
  bool isPalindrome(string input);
  int count_starting_repeats(string word);
*/


TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}

TEST(PracticeTest, zzz_test)
{
	Practice prc;
	int a=3;
	int b=4;
	int c=5;
	bool t=true;
	prc.sortDescending(a,b,c);
	ASSERT_EQ(a,5);
	ASSERT_EQ(b,4);
	ASSERT_EQ(c,3);


	ASSERT_EQ(prc.isPalindrome("zzz"),t);
// 	ASSERT_EQ(prc.isPalindrome("zzz"),1);
}
