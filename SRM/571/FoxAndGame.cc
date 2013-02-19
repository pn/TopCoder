
// {{{ Boilerplate Code <--------------------------------------------------
//
// vim:filetype=cpp foldmethod=marker foldmarker={{{,}}}

#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <vector>

using namespace std;

// }}}

class FoxAndGame
{
public:
	int countStars(vector <string> result)
	{
        int stars = 0;
        for (int i=0; i < result.size(); ++i)
        {
            for (int j=0; j < 3; ++j)
            {
                if (result[i][j] == 'o')
                    stars++;
            }
        }
		return stars;
	}
};

