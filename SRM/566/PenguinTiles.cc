
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

class PenguinTiles
{
public:
	int minMoves(vector <string> tiles)
	{
        for (int i=0; i < tiles.size(); ++i)
            for (int j=0; j < tiles[0].length(); ++j)
                if (tiles[i][j] == '.')
		            return ((tiles.size() - 1 - i)?1:0) + ((tiles[0].length() - 1 - j)?1:0);
        return 0;
	}
};

