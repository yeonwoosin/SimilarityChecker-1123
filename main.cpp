#include "gmock/gmock.h"
#include "checker.cpp"
using namespace testing;
using std::string;


class checkerfixture : public Test
{
public :
	string str = "abcdefff";
	int num = 0;
	LetterChecker lc;
};

TEST_F(checkerfixture, TC_Basic)
{
	num = lc.RunCheck(str, "adcdefff");
	EXPECT_EQ(100, num);
}

TEST_F(checkerfixture, TC_letter_count_zero)
{
	num = lc.RunCheck(str, "");
	EXPECT_EQ(40, num);
}
TEST_F(checkerfixture, TC_letter_count_x2)
{
	num = lc.RunCheck(str, "adcdefffadcdefff");
	EXPECT_EQ(40, num);
}
TEST_F(checkerfixture, TC_letter_count_part)
{
	num = lc.RunCheck(str, "effffff");
	EXPECT_EQ(91, num);
}

TEST_F(checkerfixture, TC_alpha_zero)
{
	num = lc.RunCheck(str, "adcdefff");
	EXPECT_EQ(100, num);
}
TEST_F(checkerfixture, TC_alpha_part)
{
	num = lc.RunCheck(str, "adcdefff");
	EXPECT_EQ(100, num);
}
TEST_F(checkerfixture, TC_alpha_all)
{

	num = lc.RunCheck(str, "adcdefff");
	EXPECT_EQ(100, num);
}



int main()
{
	InitGoogleMock();
	return RUN_ALL_TESTS();
}