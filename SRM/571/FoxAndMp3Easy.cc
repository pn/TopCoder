
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

class FoxAndMp3Easy
{
public:
	vector <string> playList(int n)
	{
        vector<string> result;
        int i = 0;
        for (i=0; i < n; ++i)
        {
            stringstream ss;
            ss << i + 1;
            result.push_back(ss.str() + ".mp3");
        }
        std::sort(result.begin(), result.end());
        if (n > 50)
            result.resize(50);
		return result;
	}
};

