
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

class NinjaTurtles
{
public:
	int countOpponents(int P, int K)
	{
        int N = 0, p = 0;
        do {
            N++;
            p = 3 * (N/K) + N/3;
        } while (p < P);
        if (p != P)
            return -1;
		return N;
	}
};

