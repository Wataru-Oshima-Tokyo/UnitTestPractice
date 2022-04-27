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



TEST(PracticeTest, isPalindrome_test)
{
	Practice prc;
    ASSERT_EQ(prc.isPalindrome("zawwAz"),true);
}

TEST(PracticeTest, sorting_fail_test)
{
	Practice prc;
	int a=4;
	int b=5;
	int c=5;
	bool t=true;
	prc.sortDescending(a,b,c);
	
	ASSERT_EQ(a,5);
	ASSERT_EQ(b,5);
	ASSERT_EQ(c,4);

	// ASSERT_EQ(prc.count_starting_repeats(""),0);


	// ASSERT_EQ(prc.count_starting_repeats(""),1);

	// ASSERT_EQ(prc.isPalindrome("zawwAz"),t);
	// ASSERT_EQ(prc.isPalindrome("galkjgalsklal"),!t);

}


TEST(PracticeTest, sorting_success_test)
{
	Practice prc;
	int x=3;
	int y=2;
	int z=1;
	prc.sortDescending(x,y,z);
	ASSERT_EQ(x,3);
	ASSERT_EQ(y,2);
	ASSERT_EQ(z,1);

}



