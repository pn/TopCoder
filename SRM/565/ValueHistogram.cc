
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

class ValueHistogram
{
public:
	vector <string> build(vector <int> values)
	{
        string empty_row(10, '.');
		vector <string> result;
        vector <int> counts(10, 0);
        result.insert(result.begin(), empty_row);
        for (int i=0; i < values.size(); ++i) {
            counts[values[i]]++;
            result[result.size() - counts[values[i]]][values[i]] = 'X';
            if (counts[values[i]] == result.size())
                result.insert(result.begin(), empty_row);
        }
        return result;
	}
};

