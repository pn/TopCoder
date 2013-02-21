
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

class Chopsticks
{
public:
	int getmax(vector <int> length)
	{
        int guests = 0;
        sort(length.begin(), length.end());
        bool second = true;
        for (int i=1; i < length.size(); ++i) {
            if (length[i] == length[i-1]) {
                if (second)
                    guests++;
            } else
                second = false;
            second = second?false:true;
        }
		return guests;
	}
};

