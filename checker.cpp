#include <string>

class LetterNumberChecker
{
public:

private:
	static const int MAX_VALUE = 60;
};

class SameLetterChecker
{
public:

private:
	static const int MAX_VALUE = 60;
};


class LetterChecker
{
public:
	static const int MAX_VALUE = 100;

	int RunCheck(const std::string& str)
	{
		return 100;
	}

private:
	LetterNumberChecker lnc;
	SameLetterChecker slc;
};