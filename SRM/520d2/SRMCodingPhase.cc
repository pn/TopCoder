
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

class SRMCodingPhase
{
public:
	int countScore(vector<int> points, vector<int> skills, int luck)
	{
		const int tlimit = 75;
		const int problems = 3;
		int maxresult = 0;
		int mask = 0;
		for (int k = 0; k < problems; k++)
			mask |= (1<<k);
		for (int i = 1; i<=mask; i++) {
			int result = 0, j, m, n, t = tlimit;
			vector<int> p;
			vector<int> s;
			vector<int> ind;
			// prepare case
			for (j = 0; j < problems; j++) {
				if ( i&(1<<j) ) {
					p.push_back(points[j]);
					s.push_back(skills[j]);
					ind.push_back(j);
				}
			}
			int l = luck;
			// use luck
			for (m = s.size() - 1; m >= 0; m--) {
				if ((l > 0) && (s[m] > 1)) {
					if (s[m]-1-l < 0) {
						l -= s[m] - 1;
						s[m] = 1;
					} else {
						s[m] -= l;
						l = 0;
					}
				}
			}
			// check if enough time
			for (j = 0; j<s.size(); j++)
				t -= s[j];
			if (t < 0)
				continue;
			// compute points
			for (n = 0; n<s.size(); n++) {
				result += p[n] - s[n] * (2*(1<<ind[n]));
			}
			// decide if better case
			if(result > maxresult)
				maxresult = result;
		}
		return maxresult;
	}
};

