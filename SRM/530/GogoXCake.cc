
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

class GogoXCake
{
public:
	string solve(vector <string> cake, vector <string> cutter)
	{
        FOR(i, 0, cake.size()-cutter.size()+1)
            FOR(j, 0, cake[0].size()-cutter[0].size()+1)
            {
                bool doCut = true;
                FOR(k, 0, cutter.size())
                {
                    FOR(l, 0, cutter[0].size())
                    {
                        if(cake[i+k][j+l] == 'X' && cutter[k][l] == '.')
                        {
                            doCut = false;
                            break;
                        }
                    }
                    if (!doCut)
                        break;
                }
                if(doCut)
                    FOR(k, 0, cutter.size())
                        FOR(l, 0, cutter[0].size())
                            if(cutter[k][l] == '.')
                                cake[i+k][j+l] = 'X';
            }
        FOR(i, 0, cake.size())
            FOR(j, 0, cake[i].size())
                if(cake[i][j] == '.')
                    return "NO";
        return "YES";
	}
};

