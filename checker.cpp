#include <string>

using std::string;
class LetterCountChecker
{
public:
	explicit LetterCountChecker(const std::string& str) : refStr(str) {}
	int run(const std::string& CheckStr)
	{
		int RefStrCount = refStr.size();
		int ChkCount = CheckStr.size();
		int B = getMin(RefStrCount, ChkCount);
		int DiffCount = getDiffCount(RefStrCount, ChkCount);
		if (B == 0) return 0;
		int ret = calcDiffScore(DiffCount, B);
		return ret;
	}
private:
	int getMin(int a, int b) {
		return (a > b ? b : a);
	}
	int getDiffCount(int a, int b)
	{
		return (a > b ? a - b : b - a);
	}
	int calcDiffScore(int diff, int b)
	{
		return (((double)1 - ((double)diff / (double)b)) * MAX_VALUE);
	}
	string refStr;
	static const int MAX_VALUE = 60;
};

class SameLetterChecker
{
public:
	explicit SameLetterChecker(const std::string& str) : refStr(str) {}

	int run(const std::string& str)
	{
		return MAX_VALUE;
	}
private:
	string refStr;
	static const int MAX_VALUE = 40;
};


class LetterChecker
{
public:
	static const int MAX_VALUE = 100;

	int RunCheck(const std::string& RefStr, const std::string& CheckStr)
	{
		LetterCountChecker lcc(RefStr);
		SameLetterChecker slc(RefStr);
		int ret = 0;
		ret += lcc.run(CheckStr);
		ret += slc.run(CheckStr);
		return ret;
	}
private:

};