#include "gmock/gmock.h"
#include "checker.cpp"
using namespace testing;
using std::string;


TEST(TS, TC1)
{
	string str = "abcdefff";
	int num = 0;
	LetterChecker lc;
	num = lc.RunCheck(str);
	EXPECT_EQ(100, num);

}

int main()
{
	InitGoogleMock();
	return RUN_ALL_TESTS();
}