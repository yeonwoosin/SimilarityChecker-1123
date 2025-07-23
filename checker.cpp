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
		int B = (RefStrCount > ChkCount ? ChkCount : RefStrCount);
		int DiffCount = (RefStrCount > ChkCount ? RefStrCount - ChkCount : ChkCount - RefStrCount) ;
		if (B == 0) return 0;
		int ret = (((double)1 - ((double)DiffCount / (double)B)) * MAX_VALUE);
		return ret;
	}
private:
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