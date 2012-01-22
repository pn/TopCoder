
// {{{ Boilerplate Code <--------------------------------------------------
//
// vim:filetype=cpp foldmethod=marker foldmarker={{{,}}}

#include <algorithm>
#include <bitset>
#include <vector>

using namespace std;

#define FOR(I,A,B)	for(int I = (A); I < (B); ++I)
#define REP(I,N)	FOR(I,0,N)

// }}}

class GameOfLifeDivTwo
{
public:
	string theSimulation(string init, int T)
	{
		string *s[2];
		int in_i = 0; //init index
		int res_i = 1; //result index
		int N = init.length();
		s[in_i] = &init;
		s[res_i] = new string(init);
		while(T--)
		{
			in_i = (in_i+1) % 2;
			res_i = (res_i+1) % 2;
			REP(i, N)
			{
				int num_1 = 0;
				REP(j, 3)
				{
					if ((*s[in_i])[(i-1+j+N)%N] == '1')
						num_1++;
				}
				if (num_1 >= 2)
					(*s[res_i])[i] = '1';
				else
					(*s[res_i])[i] = '0';
			}
		}
		return *s[res_i];
	}
};

