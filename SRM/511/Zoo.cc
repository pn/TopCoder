
// {{{ Boilerplate Code <--------------------------------------------------
//
// vim:filetype=cpp foldmethod=marker foldmarker={{{,}}}

#include <algorithm>
#include <vector>

using namespace std;
#define FOR(I,A,B)	for(int I = (A); I < (B); ++I)
#define REP(I,N)	FOR(I,0,N)
#define ALL(A)		(A).begin(), (A).end()

// }}}

class Zoo
{
public:
	long long theCount(vector<int> answers)
	{
		int N = answers.size();
		int cats = 0, rabbits = 0;
		sort(ALL(answers));
		REP(i, N)
		{
			if(answers[i] == cats)
				cats++;
			else if (answers[i] == rabbits)
				rabbits++;
			else
				return 0;
		}
		long long result = 1;
		if (cats != rabbits)
			result = 2;
		if (cats > rabbits)
			cats = rabbits;
		while(cats--)
			result *= 2;
		return result;
	}
};

