
// {{{ Boilerplate Code <--------------------------------------------------
//
// vim:filetype=cpp foldmethod=marker foldmarker={{{,}}}

#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <utility>
#include <vector>

#define FOR(I,A,B)	for(int I = (A); I < (B); ++I)
#define REP(I,N)	FOR(I,0,N)
#define ALL(A)		(A).begin(), (A).end()

using namespace std;

// }}}

class CubeAnts
{
public:
	int getMinimumSteps(vector<int> pos)
	{
		int values[] = {0, 1, 2, 1, 1, 2, 3, 2};
		int result = 0;
		REP(i, pos.size()) {
			int t = values[pos[i]];
			if(pos[i] == 6)
				return 3;
			if(t > result)
				result = t;
		}
		return result;
	}
};

