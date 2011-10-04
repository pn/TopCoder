
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

using namespace std;

// }}}

class SRMRoomAssignmentPhase
{
public:
	int countCompetitors(vector<int> ratings, int K)
	{
		int myrank = ratings[0];
		sort(ratings.rbegin(), ratings.rend());
		int pos = 0;
		while (ratings[pos] != myrank)
			pos++;
		return pos/K;
	}
};

